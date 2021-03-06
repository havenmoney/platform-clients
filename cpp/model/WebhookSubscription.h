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
 * WebhookSubscription.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_WebhookSubscription_H_
#define DEV_HAVEN_CLIENT_MODEL_WebhookSubscription_H_


#include "../ModelBase.h"


namespace dev {
namespace haven {
namespace client {
namespace model {

class  WebhookSubscription
    : public ModelBase
{
public:
    WebhookSubscription();
    virtual ~WebhookSubscription();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eWebhookSubscription 
    {
        WebhookSubscription_TRANSACTIONS,
        WebhookSubscription_INSTITUTIONS,
    };

    eWebhookSubscription getValue() const;
    void setValue(eWebhookSubscription const value);

    protected:
        eWebhookSubscription m_value;
};

}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_WebhookSubscription_H_ */
