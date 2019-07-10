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
package dev.haven.client.apis

import dev.haven.client.models.AddAnnotationRequest
import dev.haven.client.models.AddAnnotationResponse
import dev.haven.client.models.BadRequestServiceError
import dev.haven.client.models.CleanSingleTransactionRequest
import dev.haven.client.models.CleanSingleTransactionResponse
import dev.haven.client.models.ConflictServiceError
import dev.haven.client.models.CreateWebhookRequest
import dev.haven.client.models.CreateWebhookResponse
import dev.haven.client.models.EmptyResponse
import dev.haven.client.models.GetMerchantResponse
import dev.haven.client.models.GetTransactionsResponse
import dev.haven.client.models.GetWebhooksResponse
import dev.haven.client.models.NotFoundServiceError
import dev.haven.client.models.TenantServiceAccountAgentLoginRequest
import dev.haven.client.models.TenantServiceAccountAgentLoginResponse
import dev.haven.client.models.UnauthorizedServiceError
import dev.haven.client.models.UncaughtExceptionServiceError
import dev.haven.client.models.UploadBatchTransactionsRequest

import dev.haven.client.infrastructure.ApiClient
import dev.haven.client.infrastructure.ClientException
import dev.haven.client.infrastructure.ClientError
import dev.haven.client.infrastructure.ServerException
import dev.haven.client.infrastructure.ServerError
import dev.haven.client.infrastructure.MultiValueMap
import dev.haven.client.infrastructure.RequestConfig
import dev.haven.client.infrastructure.RequestMethod
import dev.haven.client.infrastructure.ResponseType
import dev.haven.client.infrastructure.Success
import dev.haven.client.infrastructure.toMultiValue

class DefaultApi(basePath: kotlin.String = "http://localhost") : ApiClient(basePath) {

    /**
    * 
    * 
    * @param tenantServiceAccountAgentLoginRequest  
    * @return TenantServiceAccountAgentLoginResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun createAccessToken(tenantServiceAccountAgentLoginRequest: TenantServiceAccountAgentLoginRequest) : TenantServiceAccountAgentLoginResponse {
        val localVariableBody: kotlin.Any? = tenantServiceAccountAgentLoginRequest
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.POST,
            "/v1/tokens",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<TenantServiceAccountAgentLoginResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as TenantServiceAccountAgentLoginResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param createWebhookRequest  
    * @return CreateWebhookResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun createWebhook(createWebhookRequest: CreateWebhookRequest) : CreateWebhookResponse {
        val localVariableBody: kotlin.Any? = createWebhookRequest
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.POST,
            "/v1/webhooks",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<CreateWebhookResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as CreateWebhookResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param endUserId  
    * @return EmptyResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun deleteForUser(endUserId: kotlin.String) : EmptyResponse {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.DELETE,
            "/v1/users/{EndUserId}".replace("{"+"EndUserId"+"}", "$endUserId"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<EmptyResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as EmptyResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param transactionId  
    * @return EmptyResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun deleteTransaction(transactionId: kotlin.String) : EmptyResponse {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.DELETE,
            "/v1/transactions/{TransactionId}".replace("{"+"TransactionId"+"}", "$transactionId"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<EmptyResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as EmptyResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param webhookId  
    * @return EmptyResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun deleteWebhook(webhookId: kotlin.String) : EmptyResponse {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.DELETE,
            "/v1/webhooks/{WebhookId}".replace("{"+"WebhookId"+"}", "$webhookId"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<EmptyResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as EmptyResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param merchantId  
    * @return GetMerchantResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun getMerchant(merchantId: kotlin.String) : GetMerchantResponse {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/v1/merchants/{MerchantId}".replace("{"+"MerchantId"+"}", "$merchantId"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<GetMerchantResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as GetMerchantResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param endUserId  
    * @param highWaterMark  (optional)
    * @param limit  (optional)
    * @return GetTransactionsResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun getTransactions(endUserId: kotlin.String, highWaterMark: kotlin.String?, limit: kotlin.Int?) : GetTransactionsResponse {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf("highWaterMark" to listOf("$highWaterMark"), "limit" to listOf("$limit"))
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/v1/transactions/{EndUserId}".replace("{"+"EndUserId"+"}", "$endUserId"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<GetTransactionsResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as GetTransactionsResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @return GetWebhooksResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun getWebhooks() : GetWebhooksResponse {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/v1/webhooks",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<GetWebhooksResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as GetWebhooksResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param uploadBatchTransactionsRequest  
    * @return EmptyResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun upsertBatchTransactions(uploadBatchTransactionsRequest: UploadBatchTransactionsRequest) : EmptyResponse {
        val localVariableBody: kotlin.Any? = uploadBatchTransactionsRequest
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.POST,
            "/v1/transactions/batch",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<EmptyResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as EmptyResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param cleanSingleTransactionRequest  
    * @return CleanSingleTransactionResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun upsertOneTransaction(cleanSingleTransactionRequest: CleanSingleTransactionRequest) : CleanSingleTransactionResponse {
        val localVariableBody: kotlin.Any? = cleanSingleTransactionRequest
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.POST,
            "/v1/transactions/online",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<CleanSingleTransactionResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as CleanSingleTransactionResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

    /**
    * 
    * 
    * @param transactionId  
    * @param addAnnotationRequest  
    * @return AddAnnotationResponse
    */
    @Suppress("UNCHECKED_CAST")
    fun upsertUserAnnotation(transactionId: kotlin.String, addAnnotationRequest: AddAnnotationRequest) : AddAnnotationResponse {
        val localVariableBody: kotlin.Any? = addAnnotationRequest
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.POST,
            "/v1/annotations/{TransactionId}".replace("{"+"TransactionId"+"}", "$transactionId"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<AddAnnotationResponse>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as AddAnnotationResponse
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
        }
    }

}
