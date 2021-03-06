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


class GetTransactionsResponse(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'transactions': 'list[CleanTransaction]',
        'high_water_mark': 'str'
    }

    attribute_map = {
        'transactions': 'transactions',
        'high_water_mark': 'highWaterMark'
    }

    def __init__(self, transactions=None, high_water_mark=None):  # noqa: E501
        """GetTransactionsResponse - a model defined in OpenAPI"""  # noqa: E501

        self._transactions = None
        self._high_water_mark = None
        self.discriminator = None

        self.transactions = transactions
        if high_water_mark is not None:
            self.high_water_mark = high_water_mark

    @property
    def transactions(self):
        """Gets the transactions of this GetTransactionsResponse.  # noqa: E501


        :return: The transactions of this GetTransactionsResponse.  # noqa: E501
        :rtype: list[CleanTransaction]
        """
        return self._transactions

    @transactions.setter
    def transactions(self, transactions):
        """Sets the transactions of this GetTransactionsResponse.


        :param transactions: The transactions of this GetTransactionsResponse.  # noqa: E501
        :type: list[CleanTransaction]
        """
        if transactions is None:
            raise ValueError("Invalid value for `transactions`, must not be `None`")  # noqa: E501

        self._transactions = transactions

    @property
    def high_water_mark(self):
        """Gets the high_water_mark of this GetTransactionsResponse.  # noqa: E501


        :return: The high_water_mark of this GetTransactionsResponse.  # noqa: E501
        :rtype: str
        """
        return self._high_water_mark

    @high_water_mark.setter
    def high_water_mark(self, high_water_mark):
        """Sets the high_water_mark of this GetTransactionsResponse.


        :param high_water_mark: The high_water_mark of this GetTransactionsResponse.  # noqa: E501
        :type: str
        """

        self._high_water_mark = high_water_mark

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
        if not isinstance(other, GetTransactionsResponse):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
