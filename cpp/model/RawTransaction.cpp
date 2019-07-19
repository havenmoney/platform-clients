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



#include "RawTransaction.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




RawTransaction::RawTransaction()
{
    m_Id = utility::conversions::to_string_t("");
    m_Account = utility::conversions::to_string_t("");
    m_User = utility::conversions::to_string_t("");
    m_RawMemo = utility::conversions::to_string_t("");
    m_MerchantIsSet = false;
    m_StoreIsSet = false;
    m_Network = utility::conversions::to_string_t("");
    m_NetworkIsSet = false;
    m_UserTransactedAt = utility::datetime();
    m_UserTransactedAtIsSet = false;
    m_Amount = utility::conversions::to_string_t("");
}

RawTransaction::~RawTransaction()
{
}

void RawTransaction::validate()
{
    // TODO: implement validation
}

web::json::value RawTransaction::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("account")] = ModelBase::toJson(m_Account);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("rawMemo")] = ModelBase::toJson(m_RawMemo);
    if(m_MerchantIsSet)
    {
        val[utility::conversions::to_string_t("merchant")] = ModelBase::toJson(m_Merchant);
    }
    if(m_StoreIsSet)
    {
        val[utility::conversions::to_string_t("store")] = ModelBase::toJson(m_Store);
    }
    if(m_NetworkIsSet)
    {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(m_Network);
    }
    if(m_UserTransactedAtIsSet)
    {
        val[utility::conversions::to_string_t("userTransactedAt")] = ModelBase::toJson(m_UserTransactedAt);
    }
    val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(m_Amount);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Categories )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("categories")] = web::json::value::array(jsonArray);
    }
    val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(m_Kind);
    val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);

    return val;
}

void RawTransaction::fromJson(const web::json::value& val)
{
    setId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("id"))));
    setAccount(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("account"))));
    setUser(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("user"))));
    setRawMemo(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("rawMemo"))));
    if(val.has_field(utility::conversions::to_string_t("merchant")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merchant"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RawMerchant> newItem(new RawMerchant());
            newItem->fromJson(fieldValue);
            setMerchant( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("store")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("store"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RawMerchantStore> newItem(new RawMerchantStore());
            newItem->fromJson(fieldValue);
            setStore( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            setNetwork(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userTransactedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userTransactedAt"));
        if(!fieldValue.is_null())
        {
            setUserTransactedAt(ModelBase::dateFromJson(fieldValue));
        }
    }
    setAmount(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("amount"))));
    {
        m_Categories.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("categories")).as_array() )
        {
            m_Categories.push_back(ModelBase::stringFromJson(item));
        }
    }
    std::shared_ptr<TransactionKind> newKind(new TransactionKind());
    newKind->fromJson(val.at(utility::conversions::to_string_t("kind")));
    setKind( newKind );
    std::shared_ptr<TransactionState> newState(new TransactionState());
    newState->fromJson(val.at(utility::conversions::to_string_t("state")));
    setState( newState );
}

void RawTransaction::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("account"), m_Account));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user"), m_User));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rawMemo"), m_RawMemo));
    if(m_MerchantIsSet)
    {
        if (m_Merchant.get())
        {
            m_Merchant->toMultipart(multipart, utility::conversions::to_string_t("merchant."));
        }
    }
    if(m_StoreIsSet)
    {
        if (m_Store.get())
        {
            m_Store->toMultipart(multipart, utility::conversions::to_string_t("store."));
        }
    }
    if(m_NetworkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("network"), m_Network));
    }
    if(m_UserTransactedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userTransactedAt"), m_UserTransactedAt));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount"), m_Amount));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Categories )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("categories"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    m_Kind->toMultipart(multipart, utility::conversions::to_string_t("kind."));
    m_State->toMultipart(multipart, utility::conversions::to_string_t("state."));
}

void RawTransaction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setAccount(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("account"))));
    setUser(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user"))));
    setRawMemo(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("rawMemo"))));
    if(multipart->hasContent(utility::conversions::to_string_t("merchant")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("merchant")))
        {
            std::shared_ptr<RawMerchant> newItem(new RawMerchant());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("merchant."));
            setMerchant( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("store")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("store")))
        {
            std::shared_ptr<RawMerchantStore> newItem(new RawMerchantStore());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("store."));
            setStore( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("network")))
    {
        setNetwork(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("network"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userTransactedAt")))
    {
        setUserTransactedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userTransactedAt"))));
    }
    setAmount(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount"))));
    {
        m_Categories.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("categories"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Categories.push_back(ModelBase::stringFromJson(item));
        }
    }
    std::shared_ptr<TransactionKind> newKind(new TransactionKind());
    newKind->fromMultiPart(multipart, utility::conversions::to_string_t("kind."));
    setKind( newKind );
    std::shared_ptr<TransactionState> newState(new TransactionState());
    newState->fromMultiPart(multipart, utility::conversions::to_string_t("state."));
    setState( newState );
}

utility::string_t RawTransaction::getId() const
{
    return m_Id;
}

void RawTransaction::setId(const utility::string_t& value)
{
    m_Id = value;
    
}

utility::string_t RawTransaction::getAccount() const
{
    return m_Account;
}

void RawTransaction::setAccount(const utility::string_t& value)
{
    m_Account = value;
    
}

utility::string_t RawTransaction::getUser() const
{
    return m_User;
}

void RawTransaction::setUser(const utility::string_t& value)
{
    m_User = value;
    
}

utility::string_t RawTransaction::getRawMemo() const
{
    return m_RawMemo;
}

void RawTransaction::setRawMemo(const utility::string_t& value)
{
    m_RawMemo = value;
    
}

std::shared_ptr<RawMerchant> RawTransaction::getMerchant() const
{
    return m_Merchant;
}

void RawTransaction::setMerchant(const std::shared_ptr<RawMerchant>& value)
{
    m_Merchant = value;
    m_MerchantIsSet = true;
}

bool RawTransaction::merchantIsSet() const
{
    return m_MerchantIsSet;
}

void RawTransaction::unsetMerchant()
{
    m_MerchantIsSet = false;
}

std::shared_ptr<RawMerchantStore> RawTransaction::getStore() const
{
    return m_Store;
}

void RawTransaction::setStore(const std::shared_ptr<RawMerchantStore>& value)
{
    m_Store = value;
    m_StoreIsSet = true;
}

bool RawTransaction::storeIsSet() const
{
    return m_StoreIsSet;
}

void RawTransaction::unsetStore()
{
    m_StoreIsSet = false;
}

utility::string_t RawTransaction::getNetwork() const
{
    return m_Network;
}

void RawTransaction::setNetwork(const utility::string_t& value)
{
    m_Network = value;
    m_NetworkIsSet = true;
}

bool RawTransaction::networkIsSet() const
{
    return m_NetworkIsSet;
}

void RawTransaction::unsetNetwork()
{
    m_NetworkIsSet = false;
}

utility::datetime RawTransaction::getUserTransactedAt() const
{
    return m_UserTransactedAt;
}

void RawTransaction::setUserTransactedAt(const utility::datetime& value)
{
    m_UserTransactedAt = value;
    m_UserTransactedAtIsSet = true;
}

bool RawTransaction::userTransactedAtIsSet() const
{
    return m_UserTransactedAtIsSet;
}

void RawTransaction::unsetUserTransactedAt()
{
    m_UserTransactedAtIsSet = false;
}

utility::string_t RawTransaction::getAmount() const
{
    return m_Amount;
}

void RawTransaction::setAmount(const utility::string_t& value)
{
    m_Amount = value;
    
}

std::vector<utility::string_t>& RawTransaction::getCategories()
{
    return m_Categories;
}

void RawTransaction::setCategories(const std::vector<utility::string_t>& value)
{
    m_Categories = value;
    
}

std::shared_ptr<TransactionKind> RawTransaction::getKind() const
{
    return m_Kind;
}

void RawTransaction::setKind(const std::shared_ptr<TransactionKind>& value)
{
    m_Kind = value;
    
}

std::shared_ptr<TransactionState> RawTransaction::getState() const
{
    return m_State;
}

void RawTransaction::setState(const std::shared_ptr<TransactionState>& value)
{
    m_State = value;
    
}

}
}
}
}

