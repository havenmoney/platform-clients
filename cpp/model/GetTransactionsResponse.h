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
 * GetTransactionsResponse.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_GetTransactionsResponse_H_
#define DEV_HAVEN_CLIENT_MODEL_GetTransactionsResponse_H_


#include "../ModelBase.h"

#include "CleanTransaction.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace dev {
namespace haven {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  GetTransactionsResponse
    : public ModelBase
{
public:
    GetTransactionsResponse();
    virtual ~GetTransactionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetTransactionsResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CleanTransaction>>& getTransactions();
    
    void setTransactions(const std::vector<std::shared_ptr<CleanTransaction>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHighWaterMark() const;
    bool highWaterMarkIsSet() const;
    void unsetHighWaterMark();

    void setHighWaterMark(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<CleanTransaction>> m_Transactions;
        utility::string_t m_HighWaterMark;
    bool m_HighWaterMarkIsSet;
};


}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_GetTransactionsResponse_H_ */
