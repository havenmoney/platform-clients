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

import { CleanTransaction } from './cleanTransaction';

export class AddAnnotationResponse {
    'transactions': Array<CleanTransaction>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "transactions",
            "baseName": "transactions",
            "type": "Array<CleanTransaction>"
        }    ];

    static getAttributeTypeMap() {
        return AddAnnotationResponse.attributeTypeMap;
    }
}
