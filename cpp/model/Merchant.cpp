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



#include "Merchant.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




Merchant::Merchant()
{
    m_Name = utility::conversions::to_string_t("");
    m_AddressIsSet = false;
    m_HoursIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
    m_BackgroundImage = utility::conversions::to_string_t("");
    m_BackgroundImageIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Facebook = utility::conversions::to_string_t("");
    m_FacebookIsSet = false;
    m_Twitter = utility::conversions::to_string_t("");
    m_TwitterIsSet = false;
    m_Instagram = utility::conversions::to_string_t("");
    m_InstagramIsSet = false;
    m_Yelp = utility::conversions::to_string_t("");
    m_YelpIsSet = false;
}

Merchant::~Merchant()
{
}

void Merchant::validate()
{
    // TODO: implement validation
}

web::json::value Merchant::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(m_Address);
    }
    if(m_HoursIsSet)
    {
        val[utility::conversions::to_string_t("hours")] = ModelBase::toJson(m_Hours);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }
    if(m_BackgroundImageIsSet)
    {
        val[utility::conversions::to_string_t("backgroundImage")] = ModelBase::toJson(m_BackgroundImage);
    }
    val[utility::conversions::to_string_t("category")] = ModelBase::toJson(m_Category);
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_FacebookIsSet)
    {
        val[utility::conversions::to_string_t("facebook")] = ModelBase::toJson(m_Facebook);
    }
    if(m_TwitterIsSet)
    {
        val[utility::conversions::to_string_t("twitter")] = ModelBase::toJson(m_Twitter);
    }
    if(m_InstagramIsSet)
    {
        val[utility::conversions::to_string_t("instagram")] = ModelBase::toJson(m_Instagram);
    }
    if(m_YelpIsSet)
    {
        val[utility::conversions::to_string_t("yelp")] = ModelBase::toJson(m_Yelp);
    }

    return val;
}

void Merchant::fromJson(const web::json::value& val)
{
    setName(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("name"))));
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
    if(val.has_field(utility::conversions::to_string_t("hours")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hours"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<OpenHours> newItem(new OpenHours());
            newItem->fromJson(fieldValue);
            setHours( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            setImage(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backgroundImage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backgroundImage"));
        if(!fieldValue.is_null())
        {
            setBackgroundImage(ModelBase::stringFromJson(fieldValue));
        }
    }
    std::shared_ptr<CleanCategory> newCategory(new CleanCategory());
    newCategory->fromJson(val.at(utility::conversions::to_string_t("category")));
    setCategory( newCategory );
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            setUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("facebook")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("facebook"));
        if(!fieldValue.is_null())
        {
            setFacebook(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("twitter")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("twitter"));
        if(!fieldValue.is_null())
        {
            setTwitter(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instagram")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instagram"));
        if(!fieldValue.is_null())
        {
            setInstagram(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yelp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yelp"));
        if(!fieldValue.is_null())
        {
            setYelp(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Merchant::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    if(m_AddressIsSet)
    {
        if (m_Address.get())
        {
            m_Address->toMultipart(multipart, utility::conversions::to_string_t("address."));
        }
    }
    if(m_HoursIsSet)
    {
        if (m_Hours.get())
        {
            m_Hours->toMultipart(multipart, utility::conversions::to_string_t("hours."));
        }
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
    if(m_BackgroundImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("backgroundImage"), m_BackgroundImage));
    }
    m_Category->toMultipart(multipart, utility::conversions::to_string_t("category."));
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_FacebookIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("facebook"), m_Facebook));
    }
    if(m_TwitterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("twitter"), m_Twitter));
    }
    if(m_InstagramIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("instagram"), m_Instagram));
    }
    if(m_YelpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("yelp"), m_Yelp));
    }
}

void Merchant::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    if(multipart->hasContent(utility::conversions::to_string_t("address")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("address")))
        {
            std::shared_ptr<Address> newItem(new Address());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("address."));
            setAddress( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hours")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("hours")))
        {
            std::shared_ptr<OpenHours> newItem(new OpenHours());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("hours."));
            setHours( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        setImage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("image"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("backgroundImage")))
    {
        setBackgroundImage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("backgroundImage"))));
    }
    std::shared_ptr<CleanCategory> newCategory(new CleanCategory());
    newCategory->fromMultiPart(multipart, utility::conversions::to_string_t("category."));
    setCategory( newCategory );
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("url"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("facebook")))
    {
        setFacebook(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("facebook"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("twitter")))
    {
        setTwitter(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("twitter"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("instagram")))
    {
        setInstagram(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("instagram"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("yelp")))
    {
        setYelp(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("yelp"))));
    }
}

utility::string_t Merchant::getName() const
{
    return m_Name;
}

void Merchant::setName(const utility::string_t& value)
{
    m_Name = value;
    
}

std::shared_ptr<Address> Merchant::getAddress() const
{
    return m_Address;
}

void Merchant::setAddress(const std::shared_ptr<Address>& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool Merchant::addressIsSet() const
{
    return m_AddressIsSet;
}

void Merchant::unsetAddress()
{
    m_AddressIsSet = false;
}

std::shared_ptr<OpenHours> Merchant::getHours() const
{
    return m_Hours;
}

void Merchant::setHours(const std::shared_ptr<OpenHours>& value)
{
    m_Hours = value;
    m_HoursIsSet = true;
}

bool Merchant::hoursIsSet() const
{
    return m_HoursIsSet;
}

void Merchant::unsetHours()
{
    m_HoursIsSet = false;
}

utility::string_t Merchant::getImage() const
{
    return m_Image;
}

void Merchant::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool Merchant::imageIsSet() const
{
    return m_ImageIsSet;
}

void Merchant::unsetImage()
{
    m_ImageIsSet = false;
}

utility::string_t Merchant::getBackgroundImage() const
{
    return m_BackgroundImage;
}

void Merchant::setBackgroundImage(const utility::string_t& value)
{
    m_BackgroundImage = value;
    m_BackgroundImageIsSet = true;
}

bool Merchant::backgroundImageIsSet() const
{
    return m_BackgroundImageIsSet;
}

void Merchant::unsetBackgroundImage()
{
    m_BackgroundImageIsSet = false;
}

std::shared_ptr<CleanCategory> Merchant::getCategory() const
{
    return m_Category;
}

void Merchant::setCategory(const std::shared_ptr<CleanCategory>& value)
{
    m_Category = value;
    
}

utility::string_t Merchant::getPhone() const
{
    return m_Phone;
}

void Merchant::setPhone(const utility::string_t& value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}

bool Merchant::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void Merchant::unsetPhone()
{
    m_PhoneIsSet = false;
}

utility::string_t Merchant::getUrl() const
{
    return m_Url;
}

void Merchant::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool Merchant::urlIsSet() const
{
    return m_UrlIsSet;
}

void Merchant::unsetUrl()
{
    m_UrlIsSet = false;
}

utility::string_t Merchant::getFacebook() const
{
    return m_Facebook;
}

void Merchant::setFacebook(const utility::string_t& value)
{
    m_Facebook = value;
    m_FacebookIsSet = true;
}

bool Merchant::facebookIsSet() const
{
    return m_FacebookIsSet;
}

void Merchant::unsetFacebook()
{
    m_FacebookIsSet = false;
}

utility::string_t Merchant::getTwitter() const
{
    return m_Twitter;
}

void Merchant::setTwitter(const utility::string_t& value)
{
    m_Twitter = value;
    m_TwitterIsSet = true;
}

bool Merchant::twitterIsSet() const
{
    return m_TwitterIsSet;
}

void Merchant::unsetTwitter()
{
    m_TwitterIsSet = false;
}

utility::string_t Merchant::getInstagram() const
{
    return m_Instagram;
}

void Merchant::setInstagram(const utility::string_t& value)
{
    m_Instagram = value;
    m_InstagramIsSet = true;
}

bool Merchant::instagramIsSet() const
{
    return m_InstagramIsSet;
}

void Merchant::unsetInstagram()
{
    m_InstagramIsSet = false;
}

utility::string_t Merchant::getYelp() const
{
    return m_Yelp;
}

void Merchant::setYelp(const utility::string_t& value)
{
    m_Yelp = value;
    m_YelpIsSet = true;
}

bool Merchant::yelpIsSet() const
{
    return m_YelpIsSet;
}

void Merchant::unsetYelp()
{
    m_YelpIsSet = false;
}

}
}
}
}


