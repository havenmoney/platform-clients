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



#include "ApiAccount.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




ApiAccount::ApiAccount()
{
    m_Id = utility::conversions::to_string_t("");
    m_User = utility::conversions::to_string_t("");
    m_DisplayName = utility::conversions::to_string_t("");
    m_DisplayNameDetailed = utility::conversions::to_string_t("");
    m_Institution = utility::conversions::to_string_t("");
    m_InstitutionName = utility::conversions::to_string_t("");
    m_CreatedAt = utility::datetime();
    m_UpdatedAt = utility::datetime();
}

ApiAccount::~ApiAccount()
{
}

void ApiAccount::validate()
{
    // TODO: implement validation
}

web::json::value ApiAccount::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(m_DisplayName);
    val[utility::conversions::to_string_t("displayNameDetailed")] = ModelBase::toJson(m_DisplayNameDetailed);
    val[utility::conversions::to_string_t("institution")] = ModelBase::toJson(m_Institution);
    val[utility::conversions::to_string_t("institutionName")] = ModelBase::toJson(m_InstitutionName);
    val[utility::conversions::to_string_t("accountType")] = ModelBase::toJson(m_AccountType);
    val[utility::conversions::to_string_t("accountSubType")] = ModelBase::toJson(m_AccountSubType);
    val[utility::conversions::to_string_t("balance")] = ModelBase::toJson(m_Balance);
    val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    val[utility::conversions::to_string_t("updatedAt")] = ModelBase::toJson(m_UpdatedAt);

    return val;
}

void ApiAccount::fromJson(const web::json::value& val)
{
    setId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("id"))));
    setUser(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("user"))));
    setDisplayName(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("displayName"))));
    setDisplayNameDetailed(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("displayNameDetailed"))));
    setInstitution(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("institution"))));
    setInstitutionName(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("institutionName"))));
    std::shared_ptr<AccountType> newAccountType(new AccountType());
    newAccountType->fromJson(val.at(utility::conversions::to_string_t("accountType")));
    setAccountType( newAccountType );
    std::shared_ptr<AccountSubType> newAccountSubType(new AccountSubType());
    newAccountSubType->fromJson(val.at(utility::conversions::to_string_t("accountSubType")));
    setAccountSubType( newAccountSubType );
    std::shared_ptr<Balance> newBalance(new Balance());
    newBalance->fromJson(val.at(utility::conversions::to_string_t("balance")));
    setBalance( newBalance );
    setCreatedAt
    (ModelBase::dateFromJson(val.at(utility::conversions::to_string_t("createdAt"))));
    setUpdatedAt
    (ModelBase::dateFromJson(val.at(utility::conversions::to_string_t("updatedAt"))));
}

void ApiAccount::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user"), m_User));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayName"), m_DisplayName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayNameDetailed"), m_DisplayNameDetailed));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("institution"), m_Institution));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("institutionName"), m_InstitutionName));
    m_AccountType->toMultipart(multipart, utility::conversions::to_string_t("accountType."));
    m_AccountSubType->toMultipart(multipart, utility::conversions::to_string_t("accountSubType."));
    m_Balance->toMultipart(multipart, utility::conversions::to_string_t("balance."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updatedAt"), m_UpdatedAt));
}

void ApiAccount::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setUser(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user"))));
    setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayName"))));
    setDisplayNameDetailed(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayNameDetailed"))));
    setInstitution(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("institution"))));
    setInstitutionName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("institutionName"))));
    std::shared_ptr<AccountType> newAccountType(new AccountType());
    newAccountType->fromMultiPart(multipart, utility::conversions::to_string_t("accountType."));
    setAccountType( newAccountType );
    std::shared_ptr<AccountSubType> newAccountSubType(new AccountSubType());
    newAccountSubType->fromMultiPart(multipart, utility::conversions::to_string_t("accountSubType."));
    setAccountSubType( newAccountSubType );
    std::shared_ptr<Balance> newBalance(new Balance());
    newBalance->fromMultiPart(multipart, utility::conversions::to_string_t("balance."));
    setBalance( newBalance );
    setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt"))));
    setUpdatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updatedAt"))));
}

utility::string_t ApiAccount::getId() const
{
    return m_Id;
}

void ApiAccount::setId(const utility::string_t& value)
{
    m_Id = value;
    
}

utility::string_t ApiAccount::getUser() const
{
    return m_User;
}

void ApiAccount::setUser(const utility::string_t& value)
{
    m_User = value;
    
}

utility::string_t ApiAccount::getDisplayName() const
{
    return m_DisplayName;
}

void ApiAccount::setDisplayName(const utility::string_t& value)
{
    m_DisplayName = value;
    
}

utility::string_t ApiAccount::getDisplayNameDetailed() const
{
    return m_DisplayNameDetailed;
}

void ApiAccount::setDisplayNameDetailed(const utility::string_t& value)
{
    m_DisplayNameDetailed = value;
    
}

utility::string_t ApiAccount::getInstitution() const
{
    return m_Institution;
}

void ApiAccount::setInstitution(const utility::string_t& value)
{
    m_Institution = value;
    
}

utility::string_t ApiAccount::getInstitutionName() const
{
    return m_InstitutionName;
}

void ApiAccount::setInstitutionName(const utility::string_t& value)
{
    m_InstitutionName = value;
    
}

std::shared_ptr<AccountType> ApiAccount::getAccountType() const
{
    return m_AccountType;
}

void ApiAccount::setAccountType(const std::shared_ptr<AccountType>& value)
{
    m_AccountType = value;
    
}

std::shared_ptr<AccountSubType> ApiAccount::getAccountSubType() const
{
    return m_AccountSubType;
}

void ApiAccount::setAccountSubType(const std::shared_ptr<AccountSubType>& value)
{
    m_AccountSubType = value;
    
}

std::shared_ptr<Balance> ApiAccount::getBalance() const
{
    return m_Balance;
}

void ApiAccount::setBalance(const std::shared_ptr<Balance>& value)
{
    m_Balance = value;
    
}

utility::datetime ApiAccount::getCreatedAt() const
{
    return m_CreatedAt;
}

void ApiAccount::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    
}

utility::datetime ApiAccount::getUpdatedAt() const
{
    return m_UpdatedAt;
}

void ApiAccount::setUpdatedAt(const utility::datetime& value)
{
    m_UpdatedAt = value;
    
}

}
}
}
}


