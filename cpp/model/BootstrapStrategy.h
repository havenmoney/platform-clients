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
 * BootstrapStrategy.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_BootstrapStrategy_H_
#define DEV_HAVEN_CLIENT_MODEL_BootstrapStrategy_H_


#include "../ModelBase.h"


namespace dev {
namespace haven {
namespace client {
namespace model {

class  BootstrapStrategy
    : public ModelBase
{
public:
    BootstrapStrategy();
    virtual ~BootstrapStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eBootstrapStrategy 
    {
        BootstrapStrategy_user-exact,
        BootstrapStrategy_user-fuzzy,
        BootstrapStrategy_account-exact,
        BootstrapStrategy_account-fuzzy,
        BootstrapStrategy_none,
    };

    eBootstrapStrategy getValue() const;
    void setValue(eBootstrapStrategy const value);

    protected:
        eBootstrapStrategy m_value;
};

}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_BootstrapStrategy_H_ */
