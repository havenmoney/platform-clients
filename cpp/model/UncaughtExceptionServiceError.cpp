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



#include "UncaughtExceptionServiceError.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




UncaughtExceptionServiceError::UncaughtExceptionServiceError()
{
    m_Message = utility::conversions::to_string_t("");
}

UncaughtExceptionServiceError::~UncaughtExceptionServiceError()
{
}

void UncaughtExceptionServiceError::validate()
{
    // TODO: implement validation
}

web::json::value UncaughtExceptionServiceError::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);

    return val;
}

void UncaughtExceptionServiceError::fromJson(const web::json::value& val)
{
    setMessage(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("message"))));
}

void UncaughtExceptionServiceError::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
}

void UncaughtExceptionServiceError::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setMessage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("message"))));
}

utility::string_t UncaughtExceptionServiceError::getMessage() const
{
    return m_Message;
}

void UncaughtExceptionServiceError::setMessage(const utility::string_t& value)
{
    m_Message = value;
    
}

}
}
}
}


