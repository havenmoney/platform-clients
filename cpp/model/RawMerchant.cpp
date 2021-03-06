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



#include "RawMerchant.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




RawMerchant::RawMerchant()
{
    m_Mid = utility::conversions::to_string_t("");
    m_MidIsSet = false;
    m_Mcc = utility::conversions::to_string_t("");
    m_MccIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_AddressIsSet = false;
}

RawMerchant::~RawMerchant()
{
}

void RawMerchant::validate()
{
    // TODO: implement validation
}

web::json::value RawMerchant::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MidIsSet)
    {
        val[utility::conversions::to_string_t("mid")] = ModelBase::toJson(m_Mid);
    }
    if(m_MccIsSet)
    {
        val[utility::conversions::to_string_t("mcc")] = ModelBase::toJson(m_Mcc);
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

void RawMerchant::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("mid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mid"));
        if(!fieldValue.is_null())
        {
            setMid(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mcc")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mcc"));
        if(!fieldValue.is_null())
        {
            setMcc(ModelBase::stringFromJson(fieldValue));
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

void RawMerchant::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_MccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mcc"), m_Mcc));
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

void RawMerchant::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("mcc")))
    {
        setMcc(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("mcc"))));
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

utility::string_t RawMerchant::getMid() const
{
    return m_Mid;
}

void RawMerchant::setMid(const utility::string_t& value)
{
    m_Mid = value;
    m_MidIsSet = true;
}

bool RawMerchant::midIsSet() const
{
    return m_MidIsSet;
}

void RawMerchant::unsetMid()
{
    m_MidIsSet = false;
}

utility::string_t RawMerchant::getMcc() const
{
    return m_Mcc;
}

void RawMerchant::setMcc(const utility::string_t& value)
{
    m_Mcc = value;
    m_MccIsSet = true;
}

bool RawMerchant::mccIsSet() const
{
    return m_MccIsSet;
}

void RawMerchant::unsetMcc()
{
    m_MccIsSet = false;
}

utility::string_t RawMerchant::getName() const
{
    return m_Name;
}

void RawMerchant::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool RawMerchant::nameIsSet() const
{
    return m_NameIsSet;
}

void RawMerchant::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<Address> RawMerchant::getAddress() const
{
    return m_Address;
}

void RawMerchant::setAddress(const std::shared_ptr<Address>& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool RawMerchant::addressIsSet() const
{
    return m_AddressIsSet;
}

void RawMerchant::unsetAddress()
{
    m_AddressIsSet = false;
}

}
}
}
}


