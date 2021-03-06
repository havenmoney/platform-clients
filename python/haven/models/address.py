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


class Address(object):
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
        'line1': 'str',
        'line2': 'str',
        'city': 'str',
        'state': 'str',
        'zip': 'str',
        'coordinates': 'LatLong'
    }

    attribute_map = {
        'line1': 'line1',
        'line2': 'line2',
        'city': 'city',
        'state': 'state',
        'zip': 'zip',
        'coordinates': 'coordinates'
    }

    def __init__(self, line1=None, line2=None, city=None, state=None, zip=None, coordinates=None):  # noqa: E501
        """Address - a model defined in OpenAPI"""  # noqa: E501

        self._line1 = None
        self._line2 = None
        self._city = None
        self._state = None
        self._zip = None
        self._coordinates = None
        self.discriminator = None

        self.line1 = line1
        if line2 is not None:
            self.line2 = line2
        self.city = city
        self.state = state
        self.zip = zip
        if coordinates is not None:
            self.coordinates = coordinates

    @property
    def line1(self):
        """Gets the line1 of this Address.  # noqa: E501


        :return: The line1 of this Address.  # noqa: E501
        :rtype: str
        """
        return self._line1

    @line1.setter
    def line1(self, line1):
        """Sets the line1 of this Address.


        :param line1: The line1 of this Address.  # noqa: E501
        :type: str
        """
        if line1 is None:
            raise ValueError("Invalid value for `line1`, must not be `None`")  # noqa: E501

        self._line1 = line1

    @property
    def line2(self):
        """Gets the line2 of this Address.  # noqa: E501


        :return: The line2 of this Address.  # noqa: E501
        :rtype: str
        """
        return self._line2

    @line2.setter
    def line2(self, line2):
        """Sets the line2 of this Address.


        :param line2: The line2 of this Address.  # noqa: E501
        :type: str
        """

        self._line2 = line2

    @property
    def city(self):
        """Gets the city of this Address.  # noqa: E501


        :return: The city of this Address.  # noqa: E501
        :rtype: str
        """
        return self._city

    @city.setter
    def city(self, city):
        """Sets the city of this Address.


        :param city: The city of this Address.  # noqa: E501
        :type: str
        """
        if city is None:
            raise ValueError("Invalid value for `city`, must not be `None`")  # noqa: E501

        self._city = city

    @property
    def state(self):
        """Gets the state of this Address.  # noqa: E501


        :return: The state of this Address.  # noqa: E501
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this Address.


        :param state: The state of this Address.  # noqa: E501
        :type: str
        """
        if state is None:
            raise ValueError("Invalid value for `state`, must not be `None`")  # noqa: E501

        self._state = state

    @property
    def zip(self):
        """Gets the zip of this Address.  # noqa: E501


        :return: The zip of this Address.  # noqa: E501
        :rtype: str
        """
        return self._zip

    @zip.setter
    def zip(self, zip):
        """Sets the zip of this Address.


        :param zip: The zip of this Address.  # noqa: E501
        :type: str
        """
        if zip is None:
            raise ValueError("Invalid value for `zip`, must not be `None`")  # noqa: E501

        self._zip = zip

    @property
    def coordinates(self):
        """Gets the coordinates of this Address.  # noqa: E501


        :return: The coordinates of this Address.  # noqa: E501
        :rtype: LatLong
        """
        return self._coordinates

    @coordinates.setter
    def coordinates(self, coordinates):
        """Sets the coordinates of this Address.


        :param coordinates: The coordinates of this Address.  # noqa: E501
        :type: LatLong
        """

        self._coordinates = coordinates

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
        if not isinstance(other, Address):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
