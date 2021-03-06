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
 * TenantServiceAccountAgentLoginRequest.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_TenantServiceAccountAgentLoginRequest_H_
#define DEV_HAVEN_CLIENT_MODEL_TenantServiceAccountAgentLoginRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace dev {
namespace haven {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  TenantServiceAccountAgentLoginRequest
    : public ModelBase
{
public:
    TenantServiceAccountAgentLoginRequest();
    virtual ~TenantServiceAccountAgentLoginRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TenantServiceAccountAgentLoginRequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    
    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSecret() const;
    
    void setSecret(const utility::string_t& value);


protected:
    utility::string_t m_Id;
        utility::string_t m_Secret;
    };


}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_TenantServiceAccountAgentLoginRequest_H_ */
