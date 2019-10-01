package org.openapitools.client.api;

import org.openapitools.client.CollectionFormats.*;

import retrofit2.Call;
import retrofit2.http.*;

import okhttp3.RequestBody;
import okhttp3.ResponseBody;
import okhttp3.MultipartBody;

import org.openapitools.client.model.AccountRequestWrapper;
import org.openapitools.client.model.AddAnnotationRequest;
import org.openapitools.client.model.AddAnnotationResponse;
import org.openapitools.client.model.CleanSingleTransactionRequest;
import org.openapitools.client.model.CleanSingleTransactionResponse;
import org.openapitools.client.model.CreateWebhookRequest;
import org.openapitools.client.model.CreateWebhookResponse;
import org.openapitools.client.model.EmptyResponse;
import org.openapitools.client.model.GetAccountsResponse;
import org.openapitools.client.model.GetMerchantResponse;
import org.openapitools.client.model.GetTransactionsResponse;
import org.openapitools.client.model.GetWebhooksResponse;
import org.openapitools.client.model.ServiceError;
import org.openapitools.client.model.TenantServiceAccountAgentLoginRequest;
import org.openapitools.client.model.TenantServiceAccountAgentLoginResponse;
import org.openapitools.client.model.UploadBatchTransactionsRequest;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public interface DefaultApi {
  /**
   * 
   * 
   * @param tenantServiceAccountAgentLoginRequest  (required)
   * @return Call&lt;TenantServiceAccountAgentLoginResponse&gt;
   */
  @Headers({
    "Content-Type:application/json"
  })
  @POST("v1/tokens")
  Call<TenantServiceAccountAgentLoginResponse> createAccessToken(
    @retrofit2.http.Body TenantServiceAccountAgentLoginRequest tenantServiceAccountAgentLoginRequest
  );

  /**
   * 
   * 
   * @param createWebhookRequest  (required)
   * @return Call&lt;CreateWebhookResponse&gt;
   */
  @Headers({
    "Content-Type:application/json"
  })
  @POST("v1/webhooks")
  Call<CreateWebhookResponse> createWebhook(
    @retrofit2.http.Body CreateWebhookRequest createWebhookRequest
  );

  /**
   * 
   * 
   * @param accountId  (required)
   * @return Call&lt;EmptyResponse&gt;
   */
  @DELETE("v1/accounts/{AccountId}")
  Call<EmptyResponse> deleteAccount(
    @retrofit2.http.Path("AccountId") String accountId
  );

  /**
   * 
   * 
   * @param endUserId  (required)
   * @return Call&lt;EmptyResponse&gt;
   */
  @DELETE("v1/users/{EndUserId}")
  Call<EmptyResponse> deleteForUser(
    @retrofit2.http.Path("EndUserId") String endUserId
  );

  /**
   * 
   * 
   * @param transactionId  (required)
   * @return Call&lt;EmptyResponse&gt;
   */
  @DELETE("v1/transactions/{TransactionId}")
  Call<EmptyResponse> deleteTransaction(
    @retrofit2.http.Path("TransactionId") String transactionId
  );

  /**
   * 
   * 
   * @param webhookId  (required)
   * @return Call&lt;EmptyResponse&gt;
   */
  @DELETE("v1/webhooks/{WebhookId}")
  Call<EmptyResponse> deleteWebhook(
    @retrofit2.http.Path("WebhookId") String webhookId
  );

  /**
   * 
   * 
   * @param endUserId  (required)
   * @return Call&lt;GetAccountsResponse&gt;
   */
  @GET("v1/accounts/user/{EndUserId}")
  Call<GetAccountsResponse> getAccountsForUser(
    @retrofit2.http.Path("EndUserId") String endUserId
  );

  /**
   * 
   * 
   * @param merchantId  (required)
   * @return Call&lt;GetMerchantResponse&gt;
   */
  @GET("v1/merchants/{MerchantId}")
  Call<GetMerchantResponse> getMerchant(
    @retrofit2.http.Path("MerchantId") String merchantId
  );

  /**
   * 
   * 
   * @param endUserId  (required)
   * @param highWaterMark  (optional)
   * @param limit  (optional)
   * @return Call&lt;GetTransactionsResponse&gt;
   */
  @GET("v1/transactions/{EndUserId}")
  Call<GetTransactionsResponse> getTransactions(
    @retrofit2.http.Path("EndUserId") String endUserId, @retrofit2.http.Query("highWaterMark") String highWaterMark, @retrofit2.http.Query("limit") Integer limit
  );

  /**
   * 
   * 
   * @return Call&lt;GetWebhooksResponse&gt;
   */
  @GET("v1/webhooks")
  Call<GetWebhooksResponse> getWebhooks();
    

  /**
   * 
   * 
   * @param accountRequestWrapper  (required)
   * @return Call&lt;EmptyResponse&gt;
   */
  @Headers({
    "Content-Type:application/json"
  })
  @PUT("v1/accounts")
  Call<EmptyResponse> upsertAccount(
    @retrofit2.http.Body AccountRequestWrapper accountRequestWrapper
  );

  /**
   * 
   * 
   * @param uploadBatchTransactionsRequest  (required)
   * @return Call&lt;EmptyResponse&gt;
   */
  @Headers({
    "Content-Type:application/json"
  })
  @POST("v1/transactions/batch")
  Call<EmptyResponse> upsertBatchTransactions(
    @retrofit2.http.Body UploadBatchTransactionsRequest uploadBatchTransactionsRequest
  );

  /**
   * 
   * 
   * @param cleanSingleTransactionRequest  (required)
   * @return Call&lt;CleanSingleTransactionResponse&gt;
   */
  @Headers({
    "Content-Type:application/json"
  })
  @POST("v1/transactions/online")
  Call<CleanSingleTransactionResponse> upsertOneTransaction(
    @retrofit2.http.Body CleanSingleTransactionRequest cleanSingleTransactionRequest
  );

  /**
   * 
   * 
   * @param transactionId  (required)
   * @param addAnnotationRequest  (required)
   * @return Call&lt;AddAnnotationResponse&gt;
   */
  @Headers({
    "Content-Type:application/json"
  })
  @POST("v1/annotations/{TransactionId}")
  Call<AddAnnotationResponse> upsertUserAnnotation(
    @retrofit2.http.Path("TransactionId") String transactionId, @retrofit2.http.Body AddAnnotationRequest addAnnotationRequest
  );

}
