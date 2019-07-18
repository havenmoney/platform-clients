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



#include "Webhook.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




Webhook::Webhook()
{
    m_Id = utility::conversions::to_string_t("");
    m_Callback = utility::conversions::to_string_t("");
    m_Secret = utility::conversions::to_string_t("");
}

Webhook::~Webhook()
{
}

void Webhook::validate()
{
    // TODO: implement validation
}

web::json::value Webhook::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("callback")] = ModelBase::toJson(m_Callback);
    val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(m_Secret);

    return val;
}

void Webhook::fromJson(const web::json::value& val)
{
    setId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("id"))));
    setCallback(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("callback"))));
    setSecret(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("secret"))));
}

void Webhook::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("callback"), m_Callback));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("secret"), m_Secret));
}

void Webhook::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setCallback(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("callback"))));
    setSecret(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("secret"))));
}

utility::string_t Webhook::getId() const
{
    return m_Id;
}

void Webhook::setId(const utility::string_t& value)
{
    m_Id = value;
    
}

utility::string_t Webhook::getCallback() const
{
    return m_Callback;
}

void Webhook::setCallback(const utility::string_t& value)
{
    m_Callback = value;
    
}

utility::string_t Webhook::getSecret() const
{
    return m_Secret;
}

void Webhook::setSecret(const utility::string_t& value)
{
    m_Secret = value;
    
}

}
}
}
}


