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


import com.squareup.moshi.Json
/**
 * 
 * @param latitude 
 * @param longitude 
 */
data class LatLong (
    @Json(name = "latitude")
    val latitude: kotlin.String,
    @Json(name = "longitude")
    val longitude: kotlin.String
) {

}

