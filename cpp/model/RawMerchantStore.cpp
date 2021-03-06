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



#include "RawMerchantStore.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




RawMerchantStore::RawMerchantStore()
{
    m_Mid = utility::conversions::to_string_t("");
    m_MidIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_AddressIsSet = false;
}

RawMerchantStore::~RawMerchantStore()
{
}

void RawMerchantStore::validate()
{
    // TODO: implement validation
}

web::json::value RawMerchantStore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MidIsSet)
    {
        val[utility::conversions::to_string_t("mid")] = ModelBase::toJson(m_Mid);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(m_Address);
    }

    return val;
}

void RawMerchantStore::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("mid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mid"));
        if(!fieldValue.is_null())
        {
            setMid(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Address> newItem(new Address());
            newItem->fromJson(fieldValue);
            setAddress( newItem );
        }
    }
}

void RawMerchantStore::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_MidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mid"), m_Mid));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_AddressIsSet)
    {
        if (m_Address.get())
        {
            m_Address->toMultipart(multipart, utility::conversions::to_string_t("address."));
        }
    }
}

void RawMerchantStore::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("mid")))
    {
        setMid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("mid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("address")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("address")))
        {
            std::shared_ptr<Address> newItem(new Address());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("address."));
            setAddress( newItem );
        }
    }
}

utility::string_t RawMerchantStore::getMid() const
{
    return m_Mid;
}

void RawMerchantStore::setMid(const utility::string_t& value)
{
    m_Mid = value;
    m_MidIsSet = true;
}

bool RawMerchantStore::midIsSet() const
{
    return m_MidIsSet;
}

void RawMerchantStore::unsetMid()
{
    m_MidIsSet = false;
}

utility::string_t RawMerchantStore::getName() const
{
    return m_Name;
}

void RawMerchantStore::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool RawMerchantStore::nameIsSet() const
{
    return m_NameIsSet;
}

void RawMerchantStore::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<Address> RawMerchantStore::getAddress() const
{
    return m_Address;
}

void RawMerchantStore::setAddress(const std::shared_ptr<Address>& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool RawMerchantStore::addressIsSet() const
{
    return m_AddressIsSet;
}

void RawMerchantStore::unsetAddress()
{
    m_AddressIsSet = false;
}

}
}
}
}


