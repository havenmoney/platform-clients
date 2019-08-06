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



#include "AccountRequestWrapper.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




AccountRequestWrapper::AccountRequestWrapper()
{
}

AccountRequestWrapper::~AccountRequestWrapper()
{
}

void AccountRequestWrapper::validate()
{
    // TODO: implement validation
}

web::json::value AccountRequestWrapper::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("account")] = ModelBase::toJson(m_Account);

    return val;
}

void AccountRequestWrapper::fromJson(const web::json::value& val)
{
    std::shared_ptr<AccountUpdate> newAccount(new AccountUpdate());
    newAccount->fromJson(val.at(utility::conversions::to_string_t("account")));
    setAccount( newAccount );
}

void AccountRequestWrapper::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    m_Account->toMultipart(multipart, utility::conversions::to_string_t("account."));
}

void AccountRequestWrapper::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    std::shared_ptr<AccountUpdate> newAccount(new AccountUpdate());
    newAccount->fromMultiPart(multipart, utility::conversions::to_string_t("account."));
    setAccount( newAccount );
}

std::shared_ptr<AccountUpdate> AccountRequestWrapper::getAccount() const
{
    return m_Account;
}

void AccountRequestWrapper::setAccount(const std::shared_ptr<AccountUpdate>& value)
{
    m_Account = value;
    
}

}
}
}
}


