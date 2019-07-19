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
 * CleanSingleTransactionResponse.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_CleanSingleTransactionResponse_H_
#define DEV_HAVEN_CLIENT_MODEL_CleanSingleTransactionResponse_H_


#include "../ModelBase.h"

#include "CleanTransaction.h"

namespace dev {
namespace haven {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CleanSingleTransactionResponse
    : public ModelBase
{
public:
    CleanSingleTransactionResponse();
    virtual ~CleanSingleTransactionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CleanSingleTransactionResponse members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CleanTransaction> getTransaction() const;
    
    void setTransaction(const std::shared_ptr<CleanTransaction>& value);


protected:
    std::shared_ptr<CleanTransaction> m_Transaction;
    };


}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_CleanSingleTransactionResponse_H_ */