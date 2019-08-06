# dev.haven.client - Kotlin client library for Haven Money API

## Requires

* Kotlin 1.3.31
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

This runs all tests and packages the library.

## Features/Implementation Notes

* Supports JSON inputs/outputs, File inputs, and Form inputs.
* Supports collection formats for query parameters: csv, tsv, ssv, pipes.
* Some Kotlin and Java types are fully qualified to avoid conflicts with types defined in OpenAPI definitions.
* Implementation of ApiClient is intended to reduce method counts, specifically to benefit Android targets.

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *http://localhost*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*DefaultApi* | [**createAccessToken**](docs/DefaultApi.md#createaccesstoken) | **POST** /v1/tokens | 
*DefaultApi* | [**createWebhook**](docs/DefaultApi.md#createwebhook) | **POST** /v1/webhooks | 
*DefaultApi* | [**deleteAccount**](docs/DefaultApi.md#deleteaccount) | **DELETE** /v1/accounts/{AccountId} | 
*DefaultApi* | [**deleteForUser**](docs/DefaultApi.md#deleteforuser) | **DELETE** /v1/users/{EndUserId} | 
*DefaultApi* | [**deleteTransaction**](docs/DefaultApi.md#deletetransaction) | **DELETE** /v1/transactions/{TransactionId} | 
*DefaultApi* | [**deleteWebhook**](docs/DefaultApi.md#deletewebhook) | **DELETE** /v1/webhooks/{WebhookId} | 
*DefaultApi* | [**getAccountsForUser**](docs/DefaultApi.md#getaccountsforuser) | **GET** /v1/accounts/user/{EndUserId} | 
*DefaultApi* | [**getMerchant**](docs/DefaultApi.md#getmerchant) | **GET** /v1/merchants/{MerchantId} | 
*DefaultApi* | [**getTransactions**](docs/DefaultApi.md#gettransactions) | **GET** /v1/transactions/{EndUserId} | 
*DefaultApi* | [**getWebhooks**](docs/DefaultApi.md#getwebhooks) | **GET** /v1/webhooks | 
*DefaultApi* | [**upsertAccount**](docs/DefaultApi.md#upsertaccount) | **PUT** /v1/accounts | 
*DefaultApi* | [**upsertBatchTransactions**](docs/DefaultApi.md#upsertbatchtransactions) | **POST** /v1/transactions/batch | 
*DefaultApi* | [**upsertOneTransaction**](docs/DefaultApi.md#upsertonetransaction) | **POST** /v1/transactions/online | 
*DefaultApi* | [**upsertUserAnnotation**](docs/DefaultApi.md#upsertuserannotation) | **POST** /v1/annotations/{TransactionId} | 


<a name="documentation-for-models"></a>
## Documentation for Models

 - [dev.haven.client.models.AccountRequestWrapper](docs/AccountRequestWrapper.md)
 - [dev.haven.client.models.AccountSubType](docs/AccountSubType.md)
 - [dev.haven.client.models.AccountType](docs/AccountType.md)
 - [dev.haven.client.models.AccountUpdate](docs/AccountUpdate.md)
 - [dev.haven.client.models.AddAnnotationRequest](docs/AddAnnotationRequest.md)
 - [dev.haven.client.models.AddAnnotationResponse](docs/AddAnnotationResponse.md)
 - [dev.haven.client.models.Address](docs/Address.md)
 - [dev.haven.client.models.ApiAccount](docs/ApiAccount.md)
 - [dev.haven.client.models.BadRequestServiceError](docs/BadRequestServiceError.md)
 - [dev.haven.client.models.Balance](docs/Balance.md)
 - [dev.haven.client.models.BootstrapStrategy](docs/BootstrapStrategy.md)
 - [dev.haven.client.models.CleanCategory](docs/CleanCategory.md)
 - [dev.haven.client.models.CleanSingleTransactionRequest](docs/CleanSingleTransactionRequest.md)
 - [dev.haven.client.models.CleanSingleTransactionResponse](docs/CleanSingleTransactionResponse.md)
 - [dev.haven.client.models.CleanTransaction](docs/CleanTransaction.md)
 - [dev.haven.client.models.ConflictServiceError](docs/ConflictServiceError.md)
 - [dev.haven.client.models.CreateWebhookRequest](docs/CreateWebhookRequest.md)
 - [dev.haven.client.models.CreateWebhookResponse](docs/CreateWebhookResponse.md)
 - [dev.haven.client.models.EmptyResponse](docs/EmptyResponse.md)
 - [dev.haven.client.models.GetAccountsResponse](docs/GetAccountsResponse.md)
 - [dev.haven.client.models.GetMerchantResponse](docs/GetMerchantResponse.md)
 - [dev.haven.client.models.GetTransactionsResponse](docs/GetTransactionsResponse.md)
 - [dev.haven.client.models.GetWebhooksResponse](docs/GetWebhooksResponse.md)
 - [dev.haven.client.models.InstitutionColors](docs/InstitutionColors.md)
 - [dev.haven.client.models.LatLong](docs/LatLong.md)
 - [dev.haven.client.models.Merchant](docs/Merchant.md)
 - [dev.haven.client.models.NotFoundServiceError](docs/NotFoundServiceError.md)
 - [dev.haven.client.models.OpenHours](docs/OpenHours.md)
 - [dev.haven.client.models.RawMerchant](docs/RawMerchant.md)
 - [dev.haven.client.models.RawMerchantStore](docs/RawMerchantStore.md)
 - [dev.haven.client.models.RawTransaction](docs/RawTransaction.md)
 - [dev.haven.client.models.ServiceError](docs/ServiceError.md)
 - [dev.haven.client.models.TenantServiceAccountAgentLoginRequest](docs/TenantServiceAccountAgentLoginRequest.md)
 - [dev.haven.client.models.TenantServiceAccountAgentLoginResponse](docs/TenantServiceAccountAgentLoginResponse.md)
 - [dev.haven.client.models.TooManyRequestsServiceError](docs/TooManyRequestsServiceError.md)
 - [dev.haven.client.models.TransactionKind](docs/TransactionKind.md)
 - [dev.haven.client.models.TransactionState](docs/TransactionState.md)
 - [dev.haven.client.models.UnauthorizedServiceError](docs/UnauthorizedServiceError.md)
 - [dev.haven.client.models.UncaughtExceptionServiceError](docs/UncaughtExceptionServiceError.md)
 - [dev.haven.client.models.UploadBatchTransactionsRequest](docs/UploadBatchTransactionsRequest.md)
 - [dev.haven.client.models.Webhook](docs/Webhook.md)
 - [dev.haven.client.models.WebhookSubscription](docs/WebhookSubscription.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

All endpoints do not require authorization.
