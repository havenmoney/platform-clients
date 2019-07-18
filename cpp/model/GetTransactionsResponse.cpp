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



#include "GetTransactionsResponse.h"

namespace dev {
namespace haven {
namespace client {
namespace model {




GetTransactionsResponse::GetTransactionsResponse()
{
    m_HighWaterMark = utility::conversions::to_string_t("");
    m_HighWaterMarkIsSet = false;
}

GetTransactionsResponse::~GetTransactionsResponse()
{
}

void GetTransactionsResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetTransactionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Transactions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("transactions")] = web::json::value::array(jsonArray);
    }
    if(m_HighWaterMarkIsSet)
    {
        val[utility::conversions::to_string_t("highWaterMark")] = ModelBase::toJson(m_HighWaterMark);
    }

    return val;
}

void GetTransactionsResponse::fromJson(const web::json::value& val)
{
    {
        m_Transactions.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("transactions")).as_array() )
        {
            if(item.is_null())
            {
                m_Transactions.push_back( std::shared_ptr<CleanTransaction>(nullptr) );
            }
            else
            {
                std::shared_ptr<CleanTransaction> newItem(new CleanTransaction());
                newItem->fromJson(item);
                m_Transactions.push_back( newItem );
            }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("highWaterMark")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("highWaterMark"));
        if(!fieldValue.is_null())
        {
            setHighWaterMark(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void GetTransactionsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Transactions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transactions"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    if(m_HighWaterMarkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("highWaterMark"), m_HighWaterMark));
    }
}

void GetTransactionsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Transactions.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("transactions"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Transactions.push_back( std::shared_ptr<CleanTransaction>(nullptr) );
            }
            else
            {
                std::shared_ptr<CleanTransaction> newItem(new CleanTransaction());
                newItem->fromJson(item);
                m_Transactions.push_back( newItem );
            }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("highWaterMark")))
    {
        setHighWaterMark(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("highWaterMark"))));
    }
}

std::vector<std::shared_ptr<CleanTransaction>>& GetTransactionsResponse::getTransactions()
{
    return m_Transactions;
}

void GetTransactionsResponse::setTransactions(const std::vector<std::shared_ptr<CleanTransaction>>& value)
{
    m_Transactions = value;
    
}

utility::string_t GetTransactionsResponse::getHighWaterMark() const
{
    return m_HighWaterMark;
}

void GetTransactionsResponse::setHighWaterMark(const utility::string_t& value)
{
    m_HighWaterMark = value;
    m_HighWaterMarkIsSet = true;
}

bool GetTransactionsResponse::highWaterMarkIsSet() const
{
    return m_HighWaterMarkIsSet;
}

void GetTransactionsResponse::unsetHighWaterMark()
{
    m_HighWaterMarkIsSet = false;
}

}
}
}
}


