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

import dev.haven.client.models.Address
import dev.haven.client.models.CleanCategory
import dev.haven.client.models.Merchant

import com.squareup.moshi.Json
/**
 * 
 * @param id 
 * @param account 
 * @param user 
 * @param memo 
 * @param rawMemo 
 * @param network 
 * @param userTransactedAt 
 * @param amount 
 * @param categories 
 * @param cleanCategory 
 * @param url 
 * @param image 
 * @param backgroundImage 
 * @param excludeFromBreakdowns 
 * @param merchant 
 * @param merchantData 
 * @param merchantAddress 
 * @param historical 
 * @param tags 
 */
data class CleanTransaction (
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "account")
    val account: kotlin.String,
    @Json(name = "user")
    val user: kotlin.String,
    @Json(name = "memo")
    val memo: kotlin.String,
    @Json(name = "rawMemo")
    val rawMemo: kotlin.String,
    @Json(name = "amount")
    val amount: kotlin.String,
    @Json(name = "categories")
    val categories: kotlin.Array<kotlin.String>,
    @Json(name = "cleanCategory")
    val cleanCategory: CleanCategory,
    @Json(name = "excludeFromBreakdowns")
    val excludeFromBreakdowns: kotlin.Boolean,
    @Json(name = "historical")
    val historical: kotlin.Array<kotlin.String>,
    @Json(name = "tags")
    val tags: kotlin.Array<kotlin.String>,
    @Json(name = "network")
    val network: kotlin.String? = null,
    @Json(name = "userTransactedAt")
    val userTransactedAt: java.time.Instant? = null,
    @Json(name = "url")
    val url: kotlin.String? = null,
    @Json(name = "image")
    val image: kotlin.String? = null,
    @Json(name = "backgroundImage")
    val backgroundImage: kotlin.String? = null,
    @Json(name = "merchant")
    val merchant: kotlin.String? = null,
    @Json(name = "merchantData")
    val merchantData: Merchant? = null,
    @Json(name = "merchantAddress")
    val merchantAddress: Address? = null
) {

}

