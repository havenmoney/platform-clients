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

import dev.haven.client.models.BootstrapStrategy
import dev.haven.client.models.CleanCategory

import com.squareup.moshi.Json
/**
 * 
 * @param category 
 * @param memo 
 * @param excludeFromBreakdowns 
 * @param bootstrap 
 */
data class AddAnnotationRequest (
    @Json(name = "bootstrap")
    val bootstrap: BootstrapStrategy,
    @Json(name = "category")
    val category: CleanCategory? = null,
    @Json(name = "memo")
    val memo: kotlin.String? = null,
    @Json(name = "excludeFromBreakdowns")
    val excludeFromBreakdowns: kotlin.Boolean? = null
) {

}

