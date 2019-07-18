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



#include "BootstrapStrategy.h"

namespace dev {
namespace haven {
namespace client {
namespace model {



BootstrapStrategy::BootstrapStrategy()
{
}

BootstrapStrategy::~BootstrapStrategy()
{
}

void BootstrapStrategy::validate()
{
    // TODO: implement validation
}

web::json::value BootstrapStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eBootstrapStrategy::BootstrapStrategy_user-exact) val = web::json::value::string(U("user-exact"));
    if (m_value == eBootstrapStrategy::BootstrapStrategy_user-fuzzy) val = web::json::value::string(U("user-fuzzy"));
    if (m_value == eBootstrapStrategy::BootstrapStrategy_account-exact) val = web::json::value::string(U("account-exact"));
    if (m_value == eBootstrapStrategy::BootstrapStrategy_account-fuzzy) val = web::json::value::string(U("account-fuzzy"));
    if (m_value == eBootstrapStrategy::BootstrapStrategy_none) val = web::json::value::string(U("none"));

    return val;
}

void BootstrapStrategy::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("user-exact")) m_value = eBootstrapStrategy::BootstrapStrategy_user-exact;
    if (s == utility::conversions::to_string_t("user-fuzzy")) m_value = eBootstrapStrategy::BootstrapStrategy_user-fuzzy;
    if (s == utility::conversions::to_string_t("account-exact")) m_value = eBootstrapStrategy::BootstrapStrategy_account-exact;
    if (s == utility::conversions::to_string_t("account-fuzzy")) m_value = eBootstrapStrategy::BootstrapStrategy_account-fuzzy;
    if (s == utility::conversions::to_string_t("none")) m_value = eBootstrapStrategy::BootstrapStrategy_none;
}

void BootstrapStrategy::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eBootstrapStrategy::BootstrapStrategy_user-exact) s = utility::conversions::to_string_t("user-exact");
    if (m_value == eBootstrapStrategy::BootstrapStrategy_user-fuzzy) s = utility::conversions::to_string_t("user-fuzzy");
    if (m_value == eBootstrapStrategy::BootstrapStrategy_account-exact) s = utility::conversions::to_string_t("account-exact");
    if (m_value == eBootstrapStrategy::BootstrapStrategy_account-fuzzy) s = utility::conversions::to_string_t("account-fuzzy");
    if (m_value == eBootstrapStrategy::BootstrapStrategy_none) s = utility::conversions::to_string_t("none");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

void BootstrapStrategy::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        utility::string_t s;
        s = ModelBase::stringFromHttpContent(multipart->getContent(namePrefix));
        eBootstrapStrategy v;
        
        
        if (s == utility::conversions::to_string_t("user-exact")) v = eBootstrapStrategy::BootstrapStrategy_user-exact;
        if (s == utility::conversions::to_string_t("user-fuzzy")) v = eBootstrapStrategy::BootstrapStrategy_user-fuzzy;
        if (s == utility::conversions::to_string_t("account-exact")) v = eBootstrapStrategy::BootstrapStrategy_account-exact;
        if (s == utility::conversions::to_string_t("account-fuzzy")) v = eBootstrapStrategy::BootstrapStrategy_account-fuzzy;
        if (s == utility::conversions::to_string_t("none")) v = eBootstrapStrategy::BootstrapStrategy_none;

        setValue(v);
    }
}

BootstrapStrategy::eBootstrapStrategy BootstrapStrategy::getValue() const
{
   return m_value;
}

void BootstrapStrategy::setValue(BootstrapStrategy::eBootstrapStrategy const value)
{
   m_value = value;
}


}
}
}
}


