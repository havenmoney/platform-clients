export * from './accountRequestWrapper';
export * from './accountSubType';
export * from './accountType';
export * from './addAnnotationRequest';
export * from './addAnnotationResponse';
export * from './address';
export * from './apiAccount';
export * from './badRequestServiceError';
export * from './balance';
export * from './bootstrapStrategy';
export * from './cleanCategory';
export * from './cleanSingleTransactionRequest';
export * from './cleanSingleTransactionResponse';
export * from './cleanTransaction';
export * from './conflictServiceError';
export * from './createWebhookRequest';
export * from './createWebhookResponse';
export * from './emptyResponse';
export * from './getAccountsResponse';
export * from './getMerchantResponse';
export * from './getTransactionsResponse';
export * from './getWebhooksResponse';
export * from './latLong';
export * from './merchant';
export * from './notFoundServiceError';
export * from './openHours';
export * from './rawMerchant';
export * from './rawMerchantStore';
export * from './rawTransaction';
export * from './serviceError';
export * from './tenantServiceAccountAgentLoginRequest';
export * from './tenantServiceAccountAgentLoginResponse';
export * from './transactionKind';
export * from './transactionState';
export * from './unauthorizedServiceError';
export * from './uncaughtExceptionServiceError';
export * from './uploadBatchTransactionsRequest';
export * from './webhook';
export * from './webhookSubscription';

import localVarRequest = require('request');

import { AccountRequestWrapper } from './accountRequestWrapper';
import { AccountSubType } from './accountSubType';
import { AccountType } from './accountType';
import { AddAnnotationRequest } from './addAnnotationRequest';
import { AddAnnotationResponse } from './addAnnotationResponse';
import { Address } from './address';
import { ApiAccount } from './apiAccount';
import { BadRequestServiceError } from './badRequestServiceError';
import { Balance } from './balance';
import { BootstrapStrategy } from './bootstrapStrategy';
import { CleanCategory } from './cleanCategory';
import { CleanSingleTransactionRequest } from './cleanSingleTransactionRequest';
import { CleanSingleTransactionResponse } from './cleanSingleTransactionResponse';
import { CleanTransaction } from './cleanTransaction';
import { ConflictServiceError } from './conflictServiceError';
import { CreateWebhookRequest } from './createWebhookRequest';
import { CreateWebhookResponse } from './createWebhookResponse';
import { EmptyResponse } from './emptyResponse';
import { GetAccountsResponse } from './getAccountsResponse';
import { GetMerchantResponse } from './getMerchantResponse';
import { GetTransactionsResponse } from './getTransactionsResponse';
import { GetWebhooksResponse } from './getWebhooksResponse';
import { LatLong } from './latLong';
import { Merchant } from './merchant';
import { NotFoundServiceError } from './notFoundServiceError';
import { OpenHours } from './openHours';
import { RawMerchant } from './rawMerchant';
import { RawMerchantStore } from './rawMerchantStore';
import { RawTransaction } from './rawTransaction';
import { ServiceError } from './serviceError';
import { TenantServiceAccountAgentLoginRequest } from './tenantServiceAccountAgentLoginRequest';
import { TenantServiceAccountAgentLoginResponse } from './tenantServiceAccountAgentLoginResponse';
import { TransactionKind } from './transactionKind';
import { TransactionState } from './transactionState';
import { UnauthorizedServiceError } from './unauthorizedServiceError';
import { UncaughtExceptionServiceError } from './uncaughtExceptionServiceError';
import { UploadBatchTransactionsRequest } from './uploadBatchTransactionsRequest';
import { Webhook } from './webhook';
import { WebhookSubscription } from './webhookSubscription';

/* tslint:disable:no-unused-variable */
let primitives = [
                    "string",
                    "boolean",
                    "double",
                    "integer",
                    "long",
                    "float",
                    "number",
                    "any"
                 ];
                 
let enumsMap: {[index: string]: any} = {
}

let typeMap: {[index: string]: any} = {
    "AccountRequestWrapper": AccountRequestWrapper,
    "AccountSubType": AccountSubType,
    "AccountType": AccountType,
    "AddAnnotationRequest": AddAnnotationRequest,
    "AddAnnotationResponse": AddAnnotationResponse,
    "Address": Address,
    "ApiAccount": ApiAccount,
    "BadRequestServiceError": BadRequestServiceError,
    "Balance": Balance,
    "BootstrapStrategy": BootstrapStrategy,
    "CleanCategory": CleanCategory,
    "CleanSingleTransactionRequest": CleanSingleTransactionRequest,
    "CleanSingleTransactionResponse": CleanSingleTransactionResponse,
    "CleanTransaction": CleanTransaction,
    "ConflictServiceError": ConflictServiceError,
    "CreateWebhookRequest": CreateWebhookRequest,
    "CreateWebhookResponse": CreateWebhookResponse,
    "EmptyResponse": EmptyResponse,
    "GetAccountsResponse": GetAccountsResponse,
    "GetMerchantResponse": GetMerchantResponse,
    "GetTransactionsResponse": GetTransactionsResponse,
    "GetWebhooksResponse": GetWebhooksResponse,
    "LatLong": LatLong,
    "Merchant": Merchant,
    "NotFoundServiceError": NotFoundServiceError,
    "OpenHours": OpenHours,
    "RawMerchant": RawMerchant,
    "RawMerchantStore": RawMerchantStore,
    "RawTransaction": RawTransaction,
    "ServiceError": ServiceError,
    "TenantServiceAccountAgentLoginRequest": TenantServiceAccountAgentLoginRequest,
    "TenantServiceAccountAgentLoginResponse": TenantServiceAccountAgentLoginResponse,
    "TransactionKind": TransactionKind,
    "TransactionState": TransactionState,
    "UnauthorizedServiceError": UnauthorizedServiceError,
    "UncaughtExceptionServiceError": UncaughtExceptionServiceError,
    "UploadBatchTransactionsRequest": UploadBatchTransactionsRequest,
    "Webhook": Webhook,
    "WebhookSubscription": WebhookSubscription,
}

export class ObjectSerializer {
    public static findCorrectType(data: any, expectedType: string) {
        if (data == undefined) {
            return expectedType;
        } else if (primitives.indexOf(expectedType.toLowerCase()) !== -1) {
            return expectedType;
        } else if (expectedType === "Date") {
            return expectedType;
        } else {
            if (enumsMap[expectedType]) {
                return expectedType;
            }

            if (!typeMap[expectedType]) {
                return expectedType; // w/e we don't know the type
            }

            // Check the discriminator
            let discriminatorProperty = typeMap[expectedType].discriminator;
            if (discriminatorProperty == null) {
                return expectedType; // the type does not have a discriminator. use it.
            } else {
                if (data[discriminatorProperty]) {
                    var discriminatorType = data[discriminatorProperty];
                    if(typeMap[discriminatorType]){
                        return discriminatorType; // use the type given in the discriminator
                    } else {
                        return expectedType; // discriminator did not map to a type
                    }
                } else {
                    return expectedType; // discriminator was not present (or an empty string)
                }
            }
        }
    }

    public static serialize(data: any, type: string) {
        if (data == undefined) {
            return data;
        } else if (primitives.indexOf(type.toLowerCase()) !== -1) {
            return data;
        } else if (type.lastIndexOf("Array<", 0) === 0) { // string.startsWith pre es6
            let subType: string = type.replace("Array<", ""); // Array<Type> => Type>
            subType = subType.substring(0, subType.length - 1); // Type> => Type
            let transformedData: any[] = [];
            for (let index in data) {
                let date = data[index];
                transformedData.push(ObjectSerializer.serialize(date, subType));
            }
            return transformedData;
        } else if (type === "Date") {
            return data.toISOString();
        } else {
            if (enumsMap[type]) {
                return data;
            }
            if (!typeMap[type]) { // in case we dont know the type
                return data;
            }
            
            // Get the actual type of this object
            type = this.findCorrectType(data, type);

            // get the map for the correct type.
            let attributeTypes = typeMap[type].getAttributeTypeMap();
            let instance: {[index: string]: any} = {};
            for (let index in attributeTypes) {
                let attributeType = attributeTypes[index];
                instance[attributeType.baseName] = ObjectSerializer.serialize(data[attributeType.name], attributeType.type);
            }
            return instance;
        }
    }

    public static deserialize(data: any, type: string) {
        // polymorphism may change the actual type.
        type = ObjectSerializer.findCorrectType(data, type);
        if (data == undefined) {
            return data;
        } else if (primitives.indexOf(type.toLowerCase()) !== -1) {
            return data;
        } else if (type.lastIndexOf("Array<", 0) === 0) { // string.startsWith pre es6
            let subType: string = type.replace("Array<", ""); // Array<Type> => Type>
            subType = subType.substring(0, subType.length - 1); // Type> => Type
            let transformedData: any[] = [];
            for (let index in data) {
                let date = data[index];
                transformedData.push(ObjectSerializer.deserialize(date, subType));
            }
            return transformedData;
        } else if (type === "Date") {
            return new Date(data);
        } else {
            if (enumsMap[type]) {// is Enum
                return data;
            }

            if (!typeMap[type]) { // dont know the type
                return data;
            }
            let instance = new typeMap[type]();
            let attributeTypes = typeMap[type].getAttributeTypeMap();
            for (let index in attributeTypes) {
                let attributeType = attributeTypes[index];
                instance[attributeType.name] = ObjectSerializer.deserialize(data[attributeType.baseName], attributeType.type);
            }
            return instance;
        }
    }
}

export interface Authentication {
    /**
    * Apply authentication settings to header and query params.
    */
    applyToRequest(requestOptions: localVarRequest.Options): void;
}

export class HttpBasicAuth implements Authentication {
    public username: string = '';
    public password: string = '';

    applyToRequest(requestOptions: localVarRequest.Options): void {
        requestOptions.auth = {
            username: this.username, password: this.password
        }
    }
}

export class ApiKeyAuth implements Authentication {
    public apiKey: string = '';

    constructor(private location: string, private paramName: string) {
    }

    applyToRequest(requestOptions: localVarRequest.Options): void {
        if (this.location == "query") {
            (<any>requestOptions.qs)[this.paramName] = this.apiKey;
        } else if (this.location == "header" && requestOptions && requestOptions.headers) {
            requestOptions.headers[this.paramName] = this.apiKey;
        }
    }
}

export class OAuth implements Authentication {
    public accessToken: string = '';

    applyToRequest(requestOptions: localVarRequest.Options): void {
        if (requestOptions && requestOptions.headers) {
            requestOptions.headers["Authorization"] = "Bearer " + this.accessToken;
        }
    }
}

export class VoidAuth implements Authentication {
    public username: string = '';
    public password: string = '';

    applyToRequest(_: localVarRequest.Options): void {
        // Do nothing
    }
}