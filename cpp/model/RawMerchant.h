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

/*
 * RawMerchant.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_RawMerchant_H_
#define DEV_HAVEN_CLIENT_MODEL_RawMerchant_H_


#include "../ModelBase.h"

#include "Address.h"
#include <cpprest/details/basic_types.h>

namespace dev {
namespace haven {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RawMerchant
    : public ModelBase
{
public:
    RawMerchant();
    virtual ~RawMerchant();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RawMerchant members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMid() const;
    bool midIsSet() const;
    void unsetMid();

    void setMid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMcc() const;
    bool mccIsSet() const;
    void unsetMcc();

    void setMcc(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Address> getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();

    void setAddress(const std::shared_ptr<Address>& value);


protected:
    utility::string_t m_Mid;
    bool m_MidIsSet;
    utility::string_t m_Mcc;
    bool m_MccIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<Address> m_Address;
    bool m_AddressIsSet;
};


}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_RawMerchant_H_ */
