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


class CreateWebhookResponse(object):
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
        'webhook': 'Webhook'
    }

    attribute_map = {
        'webhook': 'webhook'
    }

    def __init__(self, webhook=None):  # noqa: E501
        """CreateWebhookResponse - a model defined in OpenAPI"""  # noqa: E501

        self._webhook = None
        self.discriminator = None

        self.webhook = webhook

    @property
    def webhook(self):
        """Gets the webhook of this CreateWebhookResponse.  # noqa: E501


        :return: The webhook of this CreateWebhookResponse.  # noqa: E501
        :rtype: Webhook
        """
        return self._webhook

    @webhook.setter
    def webhook(self, webhook):
        """Sets the webhook of this CreateWebhookResponse.


        :param webhook: The webhook of this CreateWebhookResponse.  # noqa: E501
        :type: Webhook
        """
        if webhook is None:
            raise ValueError("Invalid value for `webhook`, must not be `None`")  # noqa: E501

        self._webhook = webhook

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
        if not isinstance(other, CreateWebhookResponse):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
