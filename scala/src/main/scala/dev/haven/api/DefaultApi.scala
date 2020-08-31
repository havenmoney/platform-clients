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
package dev.haven.api

import dev.haven.models.AccountRequestWrapper
import dev.haven.models.AddAnnotationRequest
import dev.haven.models.AddAnnotationResponse
import dev.haven.models.CleanSingleTransactionRequest
import dev.haven.models.CleanSingleTransactionResponse
import dev.haven.models.CreateWebhookRequest
import dev.haven.models.CreateWebhookResponse
import dev.haven.models.EmptyResponse
import dev.haven.models.GetAccountsResponse
import dev.haven.models.GetMerchantResponse
import dev.haven.models.GetTransactionsResponse
import dev.haven.models.GetWebhooksResponse
import dev.haven.models.ServiceError
import dev.haven.models.TenantServiceAccountAgentLoginRequest
import dev.haven.models.TenantServiceAccountAgentLoginResponse
import dev.haven.models.UploadBatchTransactionsRequest
import org.openapitools.client.core._
import alias._
import sttp.client._
import sttp.model.Method

object DefaultApi {

  def apply(baseUrl: String = "https://haven.dev/api")(implicit serializer: SttpSerializer) = new DefaultApi(baseUrl)
}

class DefaultApi(baseUrl: String)(implicit serializer: SttpSerializer) {

  import Helpers._
  import serializer._

  /**
   * Expected answers:
   *   code 200 : TenantServiceAccountAgentLoginResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param tenantServiceAccountAgentLoginRequest 
   */
  def createAccessToken(tenantServiceAccountAgentLoginRequest: TenantServiceAccountAgentLoginRequest)(implicit bearerToken: BearerToken): ApiRequestT[TenantServiceAccountAgentLoginResponse] =
    basicRequest
      .method(Method.POST, uri"$baseUrl/v1/tokens")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .body(tenantServiceAccountAgentLoginRequest)
      .response(asJson[TenantServiceAccountAgentLoginResponse])

  /**
   * Expected answers:
   *   code 200 : CreateWebhookResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param createWebhookRequest 
   */
  def createWebhook(createWebhookRequest: CreateWebhookRequest)(implicit bearerToken: BearerToken): ApiRequestT[CreateWebhookResponse] =
    basicRequest
      .method(Method.POST, uri"$baseUrl/v1/webhooks")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .body(createWebhookRequest)
      .response(asJson[CreateWebhookResponse])

  /**
   * Expected answers:
   *   code 200 : EmptyResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param accountId 
   */
  def deleteAccount(accountId: String)(implicit bearerToken: BearerToken): ApiRequestT[EmptyResponse] =
    basicRequest
      .method(Method.DELETE, uri"$baseUrl/v1/accounts/${AccountId}")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[EmptyResponse])

  /**
   * Expected answers:
   *   code 200 : EmptyResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param endUserId 
   */
  def deleteForUser(endUserId: String)(implicit bearerToken: BearerToken): ApiRequestT[EmptyResponse] =
    basicRequest
      .method(Method.DELETE, uri"$baseUrl/v1/users/${EndUserId}")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[EmptyResponse])

  /**
   * Expected answers:
   *   code 200 : EmptyResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param transactionId 
   */
  def deleteTransaction(transactionId: String)(implicit bearerToken: BearerToken): ApiRequestT[EmptyResponse] =
    basicRequest
      .method(Method.DELETE, uri"$baseUrl/v1/transactions/${TransactionId}")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[EmptyResponse])

  /**
   * Expected answers:
   *   code 200 : EmptyResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param webhookId 
   */
  def deleteWebhook(webhookId: String)(implicit bearerToken: BearerToken): ApiRequestT[EmptyResponse] =
    basicRequest
      .method(Method.DELETE, uri"$baseUrl/v1/webhooks/${WebhookId}")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[EmptyResponse])

  /**
   * Expected answers:
   *   code 200 : GetAccountsResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param endUserId 
   */
  def getAccountsForUser(endUserId: String)(implicit bearerToken: BearerToken): ApiRequestT[GetAccountsResponse] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/v1/accounts/user/${EndUserId}")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[GetAccountsResponse])

  /**
   * Expected answers:
   *   code 200 : GetMerchantResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param merchantId 
   */
  def getMerchant(merchantId: String)(implicit bearerToken: BearerToken): ApiRequestT[GetMerchantResponse] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/v1/merchants/${MerchantId}")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[GetMerchantResponse])

  /**
   * Expected answers:
   *   code 200 : GetTransactionsResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param endUserId 
   * @param highWaterMark 
   * @param limit 
   */
  def getTransactions(endUserId: String, highWaterMark: Option[String] = None, limit: Option[Int] = None)(implicit bearerToken: BearerToken): ApiRequestT[GetTransactionsResponse] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/v1/transactions/${EndUserId}?highWaterMark=$highWaterMark&limit=$limit")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[GetTransactionsResponse])

  /**
   * Expected answers:
   *   code 200 : GetWebhooksResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   */
  def getWebhooks()(implicit bearerToken: BearerToken): ApiRequestT[GetWebhooksResponse] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/v1/webhooks")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .response(asJson[GetWebhooksResponse])

  /**
   * Expected answers:
   *   code 200 : EmptyResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param accountRequestWrapper 
   */
  def upsertAccount(accountRequestWrapper: AccountRequestWrapper)(implicit bearerToken: BearerToken): ApiRequestT[EmptyResponse] =
    basicRequest
      .method(Method.PUT, uri"$baseUrl/v1/accounts")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .body(accountRequestWrapper)
      .response(asJson[EmptyResponse])

  /**
   * Expected answers:
   *   code 200 : EmptyResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param uploadBatchTransactionsRequest 
   */
  def upsertBatchTransactions(uploadBatchTransactionsRequest: UploadBatchTransactionsRequest)(implicit bearerToken: BearerToken): ApiRequestT[EmptyResponse] =
    basicRequest
      .method(Method.POST, uri"$baseUrl/v1/transactions/batch")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .body(uploadBatchTransactionsRequest)
      .response(asJson[EmptyResponse])

  /**
   * Expected answers:
   *   code 200 : CleanSingleTransactionResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param cleanSingleTransactionRequest 
   */
  def upsertOneTransaction(cleanSingleTransactionRequest: CleanSingleTransactionRequest)(implicit bearerToken: BearerToken): ApiRequestT[CleanSingleTransactionResponse] =
    basicRequest
      .method(Method.POST, uri"$baseUrl/v1/transactions/online")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .body(cleanSingleTransactionRequest)
      .response(asJson[CleanSingleTransactionResponse])

  /**
   * Expected answers:
   *   code 200 : AddAnnotationResponse 
   *   code 409 : ServiceError (Conflict)
   *   code 404 : ServiceError (Not found)
   *   code 401 : ServiceError (Unauthorized)
   *   code 400 : ServiceError (Bad request)
   *   code 500 : ServiceError (Server error)
   *   code 429 : ServiceError (Rate limited)
   * 
   * Available security schemes:
   *   bearerAuth (http)
   * 
   * @param transactionId 
   * @param addAnnotationRequest 
   */
  def upsertUserAnnotation(transactionId: String, addAnnotationRequest: AddAnnotationRequest)(implicit bearerToken: BearerToken): ApiRequestT[AddAnnotationResponse] =
    basicRequest
      .method(Method.POST, uri"$baseUrl/v1/annotations/${TransactionId}")
      .contentType("application/json")
      .auth.bearer(bearerToken.token)
      .body(addAnnotationRequest)
      .response(asJson[AddAnnotationResponse])

}

