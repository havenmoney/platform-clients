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


class AccountUpdate(object):
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
        'id': 'str',
        'user': 'str',
        'display_name': 'str',
        'display_name_detailed': 'str',
        'institution': 'str',
        'institution_name': 'str',
        'account_type': 'AccountType',
        'account_sub_type': 'AccountSubType',
        'balance': 'Balance',
        'created_at': 'datetime',
        'updated_at': 'datetime'
    }

    attribute_map = {
        'id': 'id',
        'user': 'user',
        'display_name': 'displayName',
        'display_name_detailed': 'displayNameDetailed',
        'institution': 'institution',
        'institution_name': 'institutionName',
        'account_type': 'accountType',
        'account_sub_type': 'accountSubType',
        'balance': 'balance',
        'created_at': 'createdAt',
        'updated_at': 'updatedAt'
    }

    def __init__(self, id=None, user=None, display_name=None, display_name_detailed=None, institution=None, institution_name=None, account_type=None, account_sub_type=None, balance=None, created_at=None, updated_at=None):  # noqa: E501
        """AccountUpdate - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._user = None
        self._display_name = None
        self._display_name_detailed = None
        self._institution = None
        self._institution_name = None
        self._account_type = None
        self._account_sub_type = None
        self._balance = None
        self._created_at = None
        self._updated_at = None
        self.discriminator = None

        self.id = id
        self.user = user
        self.display_name = display_name
        self.display_name_detailed = display_name_detailed
        self.institution = institution
        self.institution_name = institution_name
        self.account_type = account_type
        self.account_sub_type = account_sub_type
        self.balance = balance
        self.created_at = created_at
        self.updated_at = updated_at

    @property
    def id(self):
        """Gets the id of this AccountUpdate.  # noqa: E501


        :return: The id of this AccountUpdate.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this AccountUpdate.


        :param id: The id of this AccountUpdate.  # noqa: E501
        :type: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def user(self):
        """Gets the user of this AccountUpdate.  # noqa: E501


        :return: The user of this AccountUpdate.  # noqa: E501
        :rtype: str
        """
        return self._user

    @user.setter
    def user(self, user):
        """Sets the user of this AccountUpdate.


        :param user: The user of this AccountUpdate.  # noqa: E501
        :type: str
        """
        if user is None:
            raise ValueError("Invalid value for `user`, must not be `None`")  # noqa: E501

        self._user = user

    @property
    def display_name(self):
        """Gets the display_name of this AccountUpdate.  # noqa: E501


        :return: The display_name of this AccountUpdate.  # noqa: E501
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """Sets the display_name of this AccountUpdate.


        :param display_name: The display_name of this AccountUpdate.  # noqa: E501
        :type: str
        """
        if display_name is None:
            raise ValueError("Invalid value for `display_name`, must not be `None`")  # noqa: E501

        self._display_name = display_name

    @property
    def display_name_detailed(self):
        """Gets the display_name_detailed of this AccountUpdate.  # noqa: E501


        :return: The display_name_detailed of this AccountUpdate.  # noqa: E501
        :rtype: str
        """
        return self._display_name_detailed

    @display_name_detailed.setter
    def display_name_detailed(self, display_name_detailed):
        """Sets the display_name_detailed of this AccountUpdate.


        :param display_name_detailed: The display_name_detailed of this AccountUpdate.  # noqa: E501
        :type: str
        """
        if display_name_detailed is None:
            raise ValueError("Invalid value for `display_name_detailed`, must not be `None`")  # noqa: E501

        self._display_name_detailed = display_name_detailed

    @property
    def institution(self):
        """Gets the institution of this AccountUpdate.  # noqa: E501


        :return: The institution of this AccountUpdate.  # noqa: E501
        :rtype: str
        """
        return self._institution

    @institution.setter
    def institution(self, institution):
        """Sets the institution of this AccountUpdate.


        :param institution: The institution of this AccountUpdate.  # noqa: E501
        :type: str
        """
        if institution is None:
            raise ValueError("Invalid value for `institution`, must not be `None`")  # noqa: E501

        self._institution = institution

    @property
    def institution_name(self):
        """Gets the institution_name of this AccountUpdate.  # noqa: E501


        :return: The institution_name of this AccountUpdate.  # noqa: E501
        :rtype: str
        """
        return self._institution_name

    @institution_name.setter
    def institution_name(self, institution_name):
        """Sets the institution_name of this AccountUpdate.


        :param institution_name: The institution_name of this AccountUpdate.  # noqa: E501
        :type: str
        """
        if institution_name is None:
            raise ValueError("Invalid value for `institution_name`, must not be `None`")  # noqa: E501

        self._institution_name = institution_name

    @property
    def account_type(self):
        """Gets the account_type of this AccountUpdate.  # noqa: E501


        :return: The account_type of this AccountUpdate.  # noqa: E501
        :rtype: AccountType
        """
        return self._account_type

    @account_type.setter
    def account_type(self, account_type):
        """Sets the account_type of this AccountUpdate.


        :param account_type: The account_type of this AccountUpdate.  # noqa: E501
        :type: AccountType
        """
        if account_type is None:
            raise ValueError("Invalid value for `account_type`, must not be `None`")  # noqa: E501

        self._account_type = account_type

    @property
    def account_sub_type(self):
        """Gets the account_sub_type of this AccountUpdate.  # noqa: E501


        :return: The account_sub_type of this AccountUpdate.  # noqa: E501
        :rtype: AccountSubType
        """
        return self._account_sub_type

    @account_sub_type.setter
    def account_sub_type(self, account_sub_type):
        """Sets the account_sub_type of this AccountUpdate.


        :param account_sub_type: The account_sub_type of this AccountUpdate.  # noqa: E501
        :type: AccountSubType
        """
        if account_sub_type is None:
            raise ValueError("Invalid value for `account_sub_type`, must not be `None`")  # noqa: E501

        self._account_sub_type = account_sub_type

    @property
    def balance(self):
        """Gets the balance of this AccountUpdate.  # noqa: E501


        :return: The balance of this AccountUpdate.  # noqa: E501
        :rtype: Balance
        """
        return self._balance

    @balance.setter
    def balance(self, balance):
        """Sets the balance of this AccountUpdate.


        :param balance: The balance of this AccountUpdate.  # noqa: E501
        :type: Balance
        """
        if balance is None:
            raise ValueError("Invalid value for `balance`, must not be `None`")  # noqa: E501

        self._balance = balance

    @property
    def created_at(self):
        """Gets the created_at of this AccountUpdate.  # noqa: E501


        :return: The created_at of this AccountUpdate.  # noqa: E501
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """Sets the created_at of this AccountUpdate.


        :param created_at: The created_at of this AccountUpdate.  # noqa: E501
        :type: datetime
        """
        if created_at is None:
            raise ValueError("Invalid value for `created_at`, must not be `None`")  # noqa: E501

        self._created_at = created_at

    @property
    def updated_at(self):
        """Gets the updated_at of this AccountUpdate.  # noqa: E501


        :return: The updated_at of this AccountUpdate.  # noqa: E501
        :rtype: datetime
        """
        return self._updated_at

    @updated_at.setter
    def updated_at(self, updated_at):
        """Sets the updated_at of this AccountUpdate.


        :param updated_at: The updated_at of this AccountUpdate.  # noqa: E501
        :type: datetime
        """
        if updated_at is None:
            raise ValueError("Invalid value for `updated_at`, must not be `None`")  # noqa: E501

        self._updated_at = updated_at

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
        if not isinstance(other, AccountUpdate):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
