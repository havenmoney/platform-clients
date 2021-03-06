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

import java.time.OffsetDateTime
import org.openapitools.client.core.ApiModel

case class CleanTransaction(
  id: String,
  account: String,
  user: String,
  memo: String,
  rawMemo: String,
  network: Option[String] = None,
  userTransactedAt: Option[OffsetDateTime] = None,
  amount: String,
  categories: Seq[String],
  cleanCategory: CleanCategory,
  url: Option[String] = None,
  image: Option[String] = None,
  backgroundImage: Option[String] = None,
  excludeFromBreakdowns: Boolean,
  merchant: Option[String] = None,
  merchantData: Option[Merchant] = None,
  merchantAddress: Option[Address] = None,
  historical: Seq[String],
  tags: Seq[String]
) extends ApiModel


