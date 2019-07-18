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



#include "TenantServiceAccountAgentLoginResponse.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




TenantServiceAccountAgentLoginResponse::TenantServiceAccountAgentLoginResponse()
{
    m_Token = utility::conversions::to_string_t("");
    m_Expiry = utility::datetime();
}

TenantServiceAccountAgentLoginResponse::~TenantServiceAccountAgentLoginResponse()
{
}

void TenantServiceAccountAgentLoginResponse::validate()
{
    // TODO: implement validation
}

web::json::value TenantServiceAccountAgentLoginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("token")] = ModelBase::toJson(m_Token);
    val[utility::conversions::to_string_t("expiry")] = ModelBase::toJson(m_Expiry);

    return val;
}

void TenantServiceAccountAgentLoginResponse::fromJson(const web::json::value& val)
{
    setToken(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("token"))));
    setExpiry
    (ModelBase::dateFromJson(val.at(utility::conversions::to_string_t("expiry"))));
}

void TenantServiceAccountAgentLoginResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("token"), m_Token));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expiry"), m_Expiry));
}

void TenantServiceAccountAgentLoginResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setToken(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("token"))));
    setExpiry(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expiry"))));
}

utility::string_t TenantServiceAccountAgentLoginResponse::getToken() const
{
    return m_Token;
}

void TenantServiceAccountAgentLoginResponse::setToken(const utility::string_t& value)
{
    m_Token = value;
    
}

utility::datetime TenantServiceAccountAgentLoginResponse::getExpiry() const
{
    return m_Expiry;
}

void TenantServiceAccountAgentLoginResponse::setExpiry(const utility::datetime& value)
{
    m_Expiry = value;
    
}

}
}
}
}


