/**
 * Haven Money API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DefaultApi.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_API_DefaultApi_H_
#define DEV_HAVEN_CLIENT_API_DefaultApi_H_


#include "../ApiClient.h"

#include "AccountRequestWrapper.h"
#include "AddAnnotationRequest.h"
#include "AddAnnotationResponse.h"
#include "CleanSingleTransactionRequest.h"
#include "CleanSingleTransactionResponse.h"
#include "CreateWebhookRequest.h"
#include "CreateWebhookResponse.h"
#include "EmptyResponse.h"
#include "GetAccountsResponse.h"
#include "GetMerchantResponse.h"
#include "GetTransactionsResponse.h"
#include "GetWebhooksResponse.h"
#include "ServiceError.h"
#include "TenantServiceAccountAgentLoginRequest.h"
#include "TenantServiceAccountAgentLoginResponse.h"
#include "UploadBatchTransactionsRequest.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace dev {
namespace haven {
namespace client {
namespace api {

using namespace dev::haven::client::model;



class  DefaultApi 
{
public:

    explicit DefaultApi( std::shared_ptr<ApiClient> apiClient );

    virtual ~DefaultApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="tenantServiceAccountAgentLoginRequest"></param>
    pplx::task<std::shared_ptr<TenantServiceAccountAgentLoginResponse>> createAccessToken(
        std::shared_ptr<TenantServiceAccountAgentLoginRequest> tenantServiceAccountAgentLoginRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="createWebhookRequest"></param>
    pplx::task<std::shared_ptr<CreateWebhookResponse>> createWebhook(
        std::shared_ptr<CreateWebhookRequest> createWebhookRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="accountId"></param>
    pplx::task<std::shared_ptr<EmptyResponse>> deleteAccount(
        utility::string_t accountId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="endUserId"></param>
    pplx::task<std::shared_ptr<EmptyResponse>> deleteForUser(
        utility::string_t endUserId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="transactionId"></param>
    pplx::task<std::shared_ptr<EmptyResponse>> deleteTransaction(
        utility::string_t transactionId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="webhookId"></param>
    pplx::task<std::shared_ptr<EmptyResponse>> deleteWebhook(
        utility::string_t webhookId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="endUserId"></param>
    pplx::task<std::shared_ptr<GetAccountsResponse>> getAccountsForUser(
        utility::string_t endUserId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="merchantId"></param>
    pplx::task<std::shared_ptr<GetMerchantResponse>> getMerchant(
        utility::string_t merchantId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="endUserId"></param>
    /// <param name="highWaterMark"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit"> (optional, default to 0)</param>
    pplx::task<std::shared_ptr<GetTransactionsResponse>> getTransactions(
        utility::string_t endUserId,
        boost::optional<utility::string_t> highWaterMark,
        boost::optional<int32_t> limit
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<GetWebhooksResponse>> getWebhooks(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="accountRequestWrapper"></param>
    pplx::task<std::shared_ptr<EmptyResponse>> upsertAccount(
        std::shared_ptr<AccountRequestWrapper> accountRequestWrapper
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uploadBatchTransactionsRequest"></param>
    pplx::task<std::shared_ptr<EmptyResponse>> upsertBatchTransactions(
        std::shared_ptr<UploadBatchTransactionsRequest> uploadBatchTransactionsRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="cleanSingleTransactionRequest"></param>
    pplx::task<std::shared_ptr<CleanSingleTransactionResponse>> upsertOneTransaction(
        std::shared_ptr<CleanSingleTransactionRequest> cleanSingleTransactionRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="transactionId"></param>
    /// <param name="addAnnotationRequest"></param>
    pplx::task<std::shared_ptr<AddAnnotationResponse>> upsertUserAnnotation(
        utility::string_t transactionId,
        std::shared_ptr<AddAnnotationRequest> addAnnotationRequest
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* DEV_HAVEN_CLIENT_API_DefaultApi_H_ */
