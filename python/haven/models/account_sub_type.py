# coding: utf-8

"""
    Haven Money API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 1.0
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class AccountSubType(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    AUTO = "AUTO"
    BROKERAGE = "BROKERAGE"
    CASH_ISA = "CASH_ISA"
    CASH_MANAGEMENT = "CASH_MANAGEMENT"
    CD = "CD"
    CHECKING = "CHECKING"
    COMMERCIAL = "COMMERCIAL"
    CONSTRUCTION = "CONSTRUCTION"
    CONSUMER = "CONSUMER"
    CREDIT = "CREDIT"
    CREDIT_CARD = "CREDIT_CARD"
    DEPOSITORY = "DEPOSITORY"
    EDUCATION_SAVINGS_ACCOUNT = "EDUCATION_SAVINGS_ACCOUNT"
    GIC = "GIC"
    HEALTH_REIMBURSEMENT_ARRANGEMENT = "HEALTH_REIMBURSEMENT_ARRANGEMENT"
    HOME = "HOME"
    HOME_EQUITY = "HOME_EQUITY"
    HSA = "HSA"
    IRA = "IRA"
    ISA = "ISA"
    KEOGH = "KEOGH"
    LIF = "LIF"
    LINE_OF_CREDIT = "LINE_OF_CREDIT"
    LIRA = "LIRA"
    LOAN = "LOAN"
    LRIF = "LRIF"
    LRSP = "LRSP"
    MONEY_MARKET = "MONEY_MARKET"
    MORTGAGE = "MORTGAGE"
    MUTUAL_FUND = "MUTUAL_FUND"
    NON_TAXABLE_BROKERAGE_ACCOUNT = "NON_TAXABLE_BROKERAGE_ACCOUNT"
    OTHER = "OTHER"
    OVERDRAFT = "OVERDRAFT"
    PAYPAL = "PAYPAL"
    PENSION = "PENSION"
    PREPAID = "PREPAID"
    PRIF = "PRIF"
    PROFIT_SHARING_PLAN = "PROFIT_SHARING_PLAN"
    RDSP = "RDSP"
    RECURRING = "RECURRING"
    RESP = "RESP"
    RETIREMENT = "RETIREMENT"
    REWARDS = "REWARDS"
    RLIF = "RLIF"
    ROTH = "ROTH"
    ROTH_401K = "ROTH_401K"
    RRIF = "RRIF"
    RRSP = "RRSP"
    SAFE_DEPOSIT = "SAFE_DEPOSIT"
    SARSEP = "SARSEP"
    SAVINGS = "SAVINGS"
    SEP_IRA = "SEP_IRA"
    SIMPLE_IRA = "SIMPLE_IRA"
    SIPP = "SIPP"
    STOCK_PLAN = "STOCK_PLAN"
    STUDENT = "STUDENT"
    TFSA = "TFSA"
    THRIFT_SAVINGS_PLAN = "THRIFT_SAVINGS_PLAN"
    T_401A = "T_401A"
    T_401K = "T_401K"
    T_403B = "T_403B"
    T_457B = "T_457B"
    T_529 = "T_529"
    UGMA = "UGMA"
    UTMA = "UTMA"
    VARIABLE_ANNUITY = "VARIABLE_ANNUITY"

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
    }

    attribute_map = {
    }

    def __init__(self):  # noqa: E501
        """AccountSubType - a model defined in OpenAPI"""  # noqa: E501
        self.discriminator = None

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, AccountSubType):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
