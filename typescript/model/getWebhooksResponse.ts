/**
 * Haven Money API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { Webhook } from './webhook';

export class GetWebhooksResponse {
    'webhooks': Array<Webhook>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "webhooks",
            "baseName": "webhooks",
            "type": "Array<Webhook>"
        }    ];

    static getAttributeTypeMap() {
        return GetWebhooksResponse.attributeTypeMap;
    }
}

