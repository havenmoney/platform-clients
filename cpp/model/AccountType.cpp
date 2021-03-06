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



#include "AccountType.h"

namespace dev {
namespace haven {
namespace client {
namespace model {



AccountType::AccountType()
{
}

AccountType::~AccountType()
{
}

void AccountType::validate()
{
    // TODO: implement validation
}

web::json::value AccountType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eAccountType::AccountType_BROKERAGE) val = web::json::value::string(U("BROKERAGE"));
    if (m_value == eAccountType::AccountType_CREDIT) val = web::json::value::string(U("CREDIT"));
    if (m_value == eAccountType::AccountType_DEPOSITORY) val = web::json::value::string(U("DEPOSITORY"));
    if (m_value == eAccountType::AccountType_LOAN) val = web::json::value::string(U("LOAN"));
    if (m_value == eAccountType::AccountType_OTHER) val = web::json::value::string(U("OTHER"));

    return val;
}

void AccountType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("BROKERAGE")) m_value = eAccountType::AccountType_BROKERAGE;
    if (s == utility::conversions::to_string_t("CREDIT")) m_value = eAccountType::AccountType_CREDIT;
    if (s == utility::conversions::to_string_t("DEPOSITORY")) m_value = eAccountType::AccountType_DEPOSITORY;
    if (s == utility::conversions::to_string_t("LOAN")) m_value = eAccountType::AccountType_LOAN;
    if (s == utility::conversions::to_string_t("OTHER")) m_value = eAccountType::AccountType_OTHER;
}

void AccountType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eAccountType::AccountType_BROKERAGE) s = utility::conversions::to_string_t("BROKERAGE");
    if (m_value == eAccountType::AccountType_CREDIT) s = utility::conversions::to_string_t("CREDIT");
    if (m_value == eAccountType::AccountType_DEPOSITORY) s = utility::conversions::to_string_t("DEPOSITORY");
    if (m_value == eAccountType::AccountType_LOAN) s = utility::conversions::to_string_t("LOAN");
    if (m_value == eAccountType::AccountType_OTHER) s = utility::conversions::to_string_t("OTHER");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

void AccountType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        utility::string_t s;
        s = ModelBase::stringFromHttpContent(multipart->getContent(namePrefix));
        eAccountType v;
        
        
        if (s == utility::conversions::to_string_t("BROKERAGE")) v = eAccountType::AccountType_BROKERAGE;
        if (s == utility::conversions::to_string_t("CREDIT")) v = eAccountType::AccountType_CREDIT;
        if (s == utility::conversions::to_string_t("DEPOSITORY")) v = eAccountType::AccountType_DEPOSITORY;
        if (s == utility::conversions::to_string_t("LOAN")) v = eAccountType::AccountType_LOAN;
        if (s == utility::conversions::to_string_t("OTHER")) v = eAccountType::AccountType_OTHER;

        setValue(v);
    }
}

AccountType::eAccountType AccountType::getValue() const
{
   return m_value;
}

void AccountType::setValue(AccountType::eAccountType const value)
{
   m_value = value;
}


}
}
}
}


