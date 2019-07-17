# haven.DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_access_token**](DefaultApi.md#create_access_token) | **POST** /v1/tokens | 
[**create_webhook**](DefaultApi.md#create_webhook) | **POST** /v1/webhooks | 
[**delete_account**](DefaultApi.md#delete_account) | **DELETE** /v1/accounts/{AccountId} | 
[**delete_for_user**](DefaultApi.md#delete_for_user) | **DELETE** /v1/users/{EndUserId} | 
[**delete_transaction**](DefaultApi.md#delete_transaction) | **DELETE** /v1/transactions/{TransactionId} | 
[**delete_webhook**](DefaultApi.md#delete_webhook) | **DELETE** /v1/webhooks/{WebhookId} | 
[**get_accounts_for_user**](DefaultApi.md#get_accounts_for_user) | **GET** /v1/accounts/user/{EndUserId} | 
[**get_merchant**](DefaultApi.md#get_merchant) | **GET** /v1/merchants/{MerchantId} | 
[**get_transactions**](DefaultApi.md#get_transactions) | **GET** /v1/transactions/{EndUserId} | 
[**get_webhooks**](DefaultApi.md#get_webhooks) | **GET** /v1/webhooks | 
[**upsert_account**](DefaultApi.md#upsert_account) | **PUT** /v1/accounts | 
[**upsert_batch_transactions**](DefaultApi.md#upsert_batch_transactions) | **POST** /v1/transactions/batch | 
[**upsert_one_transaction**](DefaultApi.md#upsert_one_transaction) | **POST** /v1/transactions/online | 
[**upsert_user_annotation**](DefaultApi.md#upsert_user_annotation) | **POST** /v1/annotations/{TransactionId} | 


# **create_access_token**
> TenantServiceAccountAgentLoginResponse create_access_token(tenant_service_account_agent_login_request)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
tenant_service_account_agent_login_request = haven.TenantServiceAccountAgentLoginRequest() # TenantServiceAccountAgentLoginRequest | 

try:
    api_response = api_instance.create_access_token(tenant_service_account_agent_login_request)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->create_access_token: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tenant_service_account_agent_login_request** | [**TenantServiceAccountAgentLoginRequest**](TenantServiceAccountAgentLoginRequest.md)|  | 

### Return type

[**TenantServiceAccountAgentLoginResponse**](TenantServiceAccountAgentLoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_webhook**
> CreateWebhookResponse create_webhook(create_webhook_request)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
create_webhook_request = haven.CreateWebhookRequest() # CreateWebhookRequest | 

try:
    api_response = api_instance.create_webhook(create_webhook_request)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->create_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **create_webhook_request** | [**CreateWebhookRequest**](CreateWebhookRequest.md)|  | 

### Return type

[**CreateWebhookResponse**](CreateWebhookResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_account**
> EmptyResponse delete_account(account_id)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
account_id = 'account_id_example' # str | 

try:
    api_response = api_instance.delete_account(account_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->delete_account: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account_id** | **str**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_for_user**
> EmptyResponse delete_for_user(end_user_id)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
end_user_id = 'end_user_id_example' # str | 

try:
    api_response = api_instance.delete_for_user(end_user_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->delete_for_user: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **end_user_id** | **str**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_transaction**
> EmptyResponse delete_transaction(transaction_id)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
transaction_id = 'transaction_id_example' # str | 

try:
    api_response = api_instance.delete_transaction(transaction_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->delete_transaction: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **transaction_id** | **str**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_webhook**
> EmptyResponse delete_webhook(webhook_id)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
webhook_id = 'webhook_id_example' # str | 

try:
    api_response = api_instance.delete_webhook(webhook_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->delete_webhook: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhook_id** | **str**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_accounts_for_user**
> GetAccountsResponse get_accounts_for_user(end_user_id)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
end_user_id = 'end_user_id_example' # str | 

try:
    api_response = api_instance.get_accounts_for_user(end_user_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->get_accounts_for_user: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **end_user_id** | **str**|  | 

### Return type

[**GetAccountsResponse**](GetAccountsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_merchant**
> GetMerchantResponse get_merchant(merchant_id)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
merchant_id = 'merchant_id_example' # str | 

try:
    api_response = api_instance.get_merchant(merchant_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->get_merchant: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **merchant_id** | **str**|  | 

### Return type

[**GetMerchantResponse**](GetMerchantResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_transactions**
> GetTransactionsResponse get_transactions(end_user_id, high_water_mark=high_water_mark, limit=limit)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
end_user_id = 'end_user_id_example' # str | 
high_water_mark = 'high_water_mark_example' # str |  (optional)
limit = 56 # int |  (optional)

try:
    api_response = api_instance.get_transactions(end_user_id, high_water_mark=high_water_mark, limit=limit)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->get_transactions: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **end_user_id** | **str**|  | 
 **high_water_mark** | **str**|  | [optional] 
 **limit** | **int**|  | [optional] 

### Return type

[**GetTransactionsResponse**](GetTransactionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_webhooks**
> GetWebhooksResponse get_webhooks()



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()

try:
    api_response = api_instance.get_webhooks()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->get_webhooks: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetWebhooksResponse**](GetWebhooksResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upsert_account**
> EmptyResponse upsert_account(account_request_wrapper)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
account_request_wrapper = haven.AccountRequestWrapper() # AccountRequestWrapper | 

try:
    api_response = api_instance.upsert_account(account_request_wrapper)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->upsert_account: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account_request_wrapper** | [**AccountRequestWrapper**](AccountRequestWrapper.md)|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upsert_batch_transactions**
> EmptyResponse upsert_batch_transactions(upload_batch_transactions_request)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
upload_batch_transactions_request = haven.UploadBatchTransactionsRequest() # UploadBatchTransactionsRequest | 

try:
    api_response = api_instance.upsert_batch_transactions(upload_batch_transactions_request)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->upsert_batch_transactions: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **upload_batch_transactions_request** | [**UploadBatchTransactionsRequest**](UploadBatchTransactionsRequest.md)|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upsert_one_transaction**
> CleanSingleTransactionResponse upsert_one_transaction(clean_single_transaction_request)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
clean_single_transaction_request = haven.CleanSingleTransactionRequest() # CleanSingleTransactionRequest | 

try:
    api_response = api_instance.upsert_one_transaction(clean_single_transaction_request)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->upsert_one_transaction: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clean_single_transaction_request** | [**CleanSingleTransactionRequest**](CleanSingleTransactionRequest.md)|  | 

### Return type

[**CleanSingleTransactionResponse**](CleanSingleTransactionResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upsert_user_annotation**
> AddAnnotationResponse upsert_user_annotation(transaction_id, add_annotation_request)



### Example

```python
from __future__ import print_function
import time
import haven
from haven.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = haven.DefaultApi()
transaction_id = 'transaction_id_example' # str | 
add_annotation_request = haven.AddAnnotationRequest() # AddAnnotationRequest | 

try:
    api_response = api_instance.upsert_user_annotation(transaction_id, add_annotation_request)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling DefaultApi->upsert_user_annotation: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **transaction_id** | **str**|  | 
 **add_annotation_request** | [**AddAnnotationRequest**](AddAnnotationRequest.md)|  | 

### Return type

[**AddAnnotationResponse**](AddAnnotationResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** |  |  -  |
**409** | Conflict |  -  |
**404** | Not found |  -  |
**401** | Unauthorized |  -  |
**400** | Bad request |  -  |
**500** | Server error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

