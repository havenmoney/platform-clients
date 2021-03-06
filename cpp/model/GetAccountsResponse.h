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
 * GetAccountsResponse.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_GetAccountsResponse_H_
#define DEV_HAVEN_CLIENT_MODEL_GetAccountsResponse_H_


#include "../ModelBase.h"

#include <vector>
#include "ApiAccount.h"

namespace dev {
namespace haven {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  GetAccountsResponse
    : public ModelBase
{
public:
    GetAccountsResponse();
    virtual ~GetAccountsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetAccountsResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ApiAccount>>& getAccounts();
    
    void setAccounts(const std::vector<std::shared_ptr<ApiAccount>>& value);


protected:
    std::vector<std::shared_ptr<ApiAccount>> m_Accounts;
    };


}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_GetAccountsResponse_H_ */
