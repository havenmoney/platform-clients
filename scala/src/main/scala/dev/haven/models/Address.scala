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
package dev.haven.models

import org.openapitools.client.core.ApiModel

case class Address(
  line1: String,
  line2: Option[String] = None,
  city: String,
  state: String,
  zip: String,
  coordinates: Option[LatLong] = None
) extends ApiModel


