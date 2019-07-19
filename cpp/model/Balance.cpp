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



#include "Balance.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




Balance::Balance()
{
    m_Current = utility::conversions::to_string_t("");
    m_Available = utility::conversions::to_string_t("");
    m_AvailableIsSet = false;
    m_Limit = utility::conversions::to_string_t("");
    m_LimitIsSet = false;
}

Balance::~Balance()
{
}

void Balance::validate()
{
    // TODO: implement validation
}

web::json::value Balance::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("current")] = ModelBase::toJson(m_Current);
    if(m_AvailableIsSet)
    {
        val[utility::conversions::to_string_t("available")] = ModelBase::toJson(m_Available);
    }
    if(m_LimitIsSet)
    {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(m_Limit);
    }

    return val;
}

void Balance::fromJson(const web::json::value& val)
{
    setCurrent(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("current"))));
    if(val.has_field(utility::conversions::to_string_t("available")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available"));
        if(!fieldValue.is_null())
        {
            setAvailable(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            setLimit(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Balance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("current"), m_Current));
    if(m_AvailableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("available"), m_Available));
    }
    if(m_LimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("limit"), m_Limit));
    }
}

void Balance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setCurrent(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("current"))));
    if(multipart->hasContent(utility::conversions::to_string_t("available")))
    {
        setAvailable(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("available"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("limit")))
    {
        setLimit(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("limit"))));
    }
}

utility::string_t Balance::getCurrent() const
{
    return m_Current;
}

void Balance::setCurrent(const utility::string_t& value)
{
    m_Current = value;
    
}

utility::string_t Balance::getAvailable() const
{
    return m_Available;
}

void Balance::setAvailable(const utility::string_t& value)
{
    m_Available = value;
    m_AvailableIsSet = true;
}

bool Balance::availableIsSet() const
{
    return m_AvailableIsSet;
}

void Balance::unsetAvailable()
{
    m_AvailableIsSet = false;
}

utility::string_t Balance::getLimit() const
{
    return m_Limit;
}

void Balance::setLimit(const utility::string_t& value)
{
    m_Limit = value;
    m_LimitIsSet = true;
}

bool Balance::limitIsSet() const
{
    return m_LimitIsSet;
}

void Balance::unsetLimit()
{
    m_LimitIsSet = false;
}

}
}
}
}

