package dev.haven.jclient.api;

import dev.haven.jclient.ApiClient;
import dev.haven.jclient.model.AccountRequestWrapper;
import dev.haven.jclient.model.AddAnnotationRequest;
import dev.haven.jclient.model.AddAnnotationResponse;
import dev.haven.jclient.model.CleanSingleTransactionRequest;
import dev.haven.jclient.model.CleanSingleTransactionResponse;
import dev.haven.jclient.model.CreateWebhookRequest;
import dev.haven.jclient.model.CreateWebhookResponse;
import dev.haven.jclient.model.EmptyResponse;
import dev.haven.jclient.model.GetAccountsResponse;
import dev.haven.jclient.model.GetMerchantResponse;
import dev.haven.jclient.model.GetTransactionsResponse;
import dev.haven.jclient.model.GetWebhooksResponse;
import dev.haven.jclient.model.ServiceError;
import dev.haven.jclient.model.TenantServiceAccountAgentLoginRequest;
import dev.haven.jclient.model.TenantServiceAccountAgentLoginResponse;
import dev.haven.jclient.model.UploadBatchTransactionsRequest;
import org.junit.Before;
import org.junit.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for DefaultApi
 */
public class DefaultApiTest {

    private DefaultApi api;

    @Before
    public void setup() {
        api = new ApiClient().createService(DefaultApi.class);
    }

    /**
     * 
     *
     * 
     */
    @Test
    public void createAccessTokenTest() {
        TenantServiceAccountAgentLoginRequest tenantServiceAccountAgentLoginRequest = null;
        // TenantServiceAccountAgentLoginResponse response = api.createAccessToken(tenantServiceAccountAgentLoginRequest);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void createWebhookTest() {
        CreateWebhookRequest createWebhookRequest = null;
        // CreateWebhookResponse response = api.createWebhook(createWebhookRequest);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void deleteAccountTest() {
        String accountId = null;
        // EmptyResponse response = api.deleteAccount(accountId);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void deleteForUserTest() {
        String endUserId = null;
        // EmptyResponse response = api.deleteForUser(endUserId);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void deleteTransactionTest() {
        String transactionId = null;
        // EmptyResponse response = api.deleteTransaction(transactionId);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void deleteWebhookTest() {
        String webhookId = null;
        // EmptyResponse response = api.deleteWebhook(webhookId);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void getAccountsForUserTest() {
        String endUserId = null;
        // GetAccountsResponse response = api.getAccountsForUser(endUserId);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void getMerchantTest() {
        String merchantId = null;
        // GetMerchantResponse response = api.getMerchant(merchantId);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void getTransactionsTest() {
        String endUserId = null;
        String highWaterMark = null;
        Integer limit = null;
        // GetTransactionsResponse response = api.getTransactions(endUserId, highWaterMark, limit);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void getWebhooksTest() {
        // GetWebhooksResponse response = api.getWebhooks();

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void upsertAccountTest() {
        AccountRequestWrapper accountRequestWrapper = null;
        // EmptyResponse response = api.upsertAccount(accountRequestWrapper);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void upsertBatchTransactionsTest() {
        UploadBatchTransactionsRequest uploadBatchTransactionsRequest = null;
        // EmptyResponse response = api.upsertBatchTransactions(uploadBatchTransactionsRequest);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void upsertOneTransactionTest() {
        CleanSingleTransactionRequest cleanSingleTransactionRequest = null;
        // CleanSingleTransactionResponse response = api.upsertOneTransaction(cleanSingleTransactionRequest);

        // TODO: test validations
    }
    /**
     * 
     *
     * 
     */
    @Test
    public void upsertUserAnnotationTest() {
        String transactionId = null;
        AddAnnotationRequest addAnnotationRequest = null;
        // AddAnnotationResponse response = api.upsertUserAnnotation(transactionId, addAnnotationRequest);

        // TODO: test validations
    }
}
