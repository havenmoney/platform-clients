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
package dev.haven.client.models

import dev.haven.client.models.Merchant

import com.squareup.moshi.Json
/**
 * 
 * @param merchant 
 */
data class GetMerchantResponse (
    @Json(name = "merchant")
    val merchant: Merchant? = null
) {

}

