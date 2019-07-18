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
 * CleanCategory.h
 *
 * 
 */

#ifndef DEV_HAVEN_CLIENT_MODEL_CleanCategory_H_
#define DEV_HAVEN_CLIENT_MODEL_CleanCategory_H_


#include "../ModelBase.h"


namespace dev {
namespace haven {
namespace client {
namespace model {

class  CleanCategory
    : public ModelBase
{
public:
    CleanCategory();
    virtual ~CleanCategory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eCleanCategory 
    {
        CleanCategory_Arts,
        CleanCategory_Music,
        CleanCategory_Movies &amp; Television,
        CleanCategory_Newspaper &amp; Magazines,
        CleanCategory_Other Entertainment,
        CleanCategory_Deposit,
        CleanCategory_Withdrawal,
        CleanCategory_Dividends,
        CleanCategory_Buy,
        CleanCategory_Sell,
        CleanCategory_Other Investments,
        CleanCategory_Gas &amp; Fuel,
        CleanCategory_Parking,
        CleanCategory_Maintenance &amp; Repairs,
        CleanCategory_Auto Payment,
        CleanCategory_Auto Insurance,
        CleanCategory_Public Transportation,
        CleanCategory_Other Car,
        CleanCategory_Air Travel,
        CleanCategory_Lodging,
        CleanCategory_Ride Share &amp; Rental,
        CleanCategory_Other Travel,
        CleanCategory_Account Maintenance,
        CleanCategory_Overdraft Fee,
        CleanCategory_Insufficient Funds Fee,
        CleanCategory_ATM Fee,
        CleanCategory_Check Order Fee,
        CleanCategory_Interest Charged Fee,
        CleanCategory_Foreign Transaction Fee,
        CleanCategory_Wire Fee,
        CleanCategory_Excessive Transactions Fee,
        CleanCategory_Late Fee,
        CleanCategory_Card Membership Fee,
        CleanCategory_Other Fee,
        CleanCategory_Rent,
        CleanCategory_Mortgage,
        CleanCategory_Other Housing,
        CleanCategory_Rent Reimbursement,
        CleanCategory_Credit card payment,
        CleanCategory_ATM Withdrawals,
        CleanCategory_Internal Transfer,
        CleanCategory_External Transfer,
        CleanCategory_Other Transfer,
        CleanCategory_Loan Payment,
        CleanCategory_Services,
        CleanCategory_Internet,
        CleanCategory_Phone Bill,
        CleanCategory_Utilities,
        CleanCategory_TV,
        CleanCategory_Other Bills,
        CleanCategory_Paycheck,
        CleanCategory_Interest,
        CleanCategory_Reimbursement,
        CleanCategory_Other Income,
        CleanCategory_Tuition,
        CleanCategory_Student Loan,
        CleanCategory_Other Education,
        CleanCategory_Health Insurance,
        CleanCategory_Gym,
        CleanCategory_Dentist,
        CleanCategory_Doctor,
        CleanCategory_Pharmacy,
        CleanCategory_Other Health &amp; Fitness,
        CleanCategory_Groceries,
        CleanCategory_Coffee,
        CleanCategory_Restaurants,
        CleanCategory_Alcohol,
        CleanCategory_Other Food &amp; Dining,
        CleanCategory_Taxes,
        CleanCategory_Gifts &amp; Donations,
        CleanCategory_Shopping,
        CleanCategory_Other,
    };

    eCleanCategory getValue() const;
    void setValue(eCleanCategory const value);

    protected:
        eCleanCategory m_value;
};

}
}
}
}

#endif /* DEV_HAVEN_CLIENT_MODEL_CleanCategory_H_ */
