# DefaultApi

All URIs are relative to *https://haven.dev/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAccessToken**](DefaultApi.md#createAccessToken) | **POST** v1/tokens | 
[**createWebhook**](DefaultApi.md#createWebhook) | **POST** v1/webhooks | 
[**deleteAccount**](DefaultApi.md#deleteAccount) | **DELETE** v1/accounts/{AccountId} | 
[**deleteForUser**](DefaultApi.md#deleteForUser) | **DELETE** v1/users/{EndUserId} | 
[**deleteTransaction**](DefaultApi.md#deleteTransaction) | **DELETE** v1/transactions/{TransactionId} | 
[**deleteWebhook**](DefaultApi.md#deleteWebhook) | **DELETE** v1/webhooks/{WebhookId} | 
[**getAccountsForUser**](DefaultApi.md#getAccountsForUser) | **GET** v1/accounts/user/{EndUserId} | 
[**getMerchant**](DefaultApi.md#getMerchant) | **GET** v1/merchants/{MerchantId} | 
[**getTransactions**](DefaultApi.md#getTransactions) | **GET** v1/transactions/{EndUserId} | 
[**getWebhooks**](DefaultApi.md#getWebhooks) | **GET** v1/webhooks | 
[**upsertAccount**](DefaultApi.md#upsertAccount) | **PUT** v1/accounts | 
[**upsertBatchTransactions**](DefaultApi.md#upsertBatchTransactions) | **POST** v1/transactions/batch | 
[**upsertOneTransaction**](DefaultApi.md#upsertOneTransaction) | **POST** v1/transactions/online | 
[**upsertUserAnnotation**](DefaultApi.md#upsertUserAnnotation) | **POST** v1/annotations/{TransactionId} | 



## createAccessToken

> TenantServiceAccountAgentLoginResponse createAccessToken(tenantServiceAccountAgentLoginRequest)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        TenantServiceAccountAgentLoginRequest tenantServiceAccountAgentLoginRequest = new TenantServiceAccountAgentLoginRequest(); // TenantServiceAccountAgentLoginRequest | 
        try {
            TenantServiceAccountAgentLoginResponse result = apiInstance.createAccessToken(tenantServiceAccountAgentLoginRequest);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#createAccessToken");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tenantServiceAccountAgentLoginRequest** | [**TenantServiceAccountAgentLoginRequest**](TenantServiceAccountAgentLoginRequest.md)|  |

### Return type

[**TenantServiceAccountAgentLoginResponse**](TenantServiceAccountAgentLoginResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## createWebhook

> CreateWebhookResponse createWebhook(createWebhookRequest)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        CreateWebhookRequest createWebhookRequest = new CreateWebhookRequest(); // CreateWebhookRequest | 
        try {
            CreateWebhookResponse result = apiInstance.createWebhook(createWebhookRequest);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#createWebhook");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createWebhookRequest** | [**CreateWebhookRequest**](CreateWebhookRequest.md)|  |

### Return type

[**CreateWebhookResponse**](CreateWebhookResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## deleteAccount

> EmptyResponse deleteAccount(accountId)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String accountId = "accountId_example"; // String | 
        try {
            EmptyResponse result = apiInstance.deleteAccount(accountId);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#deleteAccount");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## deleteForUser

> EmptyResponse deleteForUser(endUserId)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String endUserId = "endUserId_example"; // String | 
        try {
            EmptyResponse result = apiInstance.deleteForUser(endUserId);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#deleteForUser");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endUserId** | **String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## deleteTransaction

> EmptyResponse deleteTransaction(transactionId)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String transactionId = "transactionId_example"; // String | 
        try {
            EmptyResponse result = apiInstance.deleteTransaction(transactionId);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#deleteTransaction");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **transactionId** | **String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## deleteWebhook

> EmptyResponse deleteWebhook(webhookId)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String webhookId = "webhookId_example"; // String | 
        try {
            EmptyResponse result = apiInstance.deleteWebhook(webhookId);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#deleteWebhook");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookId** | **String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## getAccountsForUser

> GetAccountsResponse getAccountsForUser(endUserId)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String endUserId = "endUserId_example"; // String | 
        try {
            GetAccountsResponse result = apiInstance.getAccountsForUser(endUserId);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#getAccountsForUser");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endUserId** | **String**|  |

### Return type

[**GetAccountsResponse**](GetAccountsResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## getMerchant

> GetMerchantResponse getMerchant(merchantId)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String merchantId = "merchantId_example"; // String | 
        try {
            GetMerchantResponse result = apiInstance.getMerchant(merchantId);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#getMerchant");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **merchantId** | **String**|  |

### Return type

[**GetMerchantResponse**](GetMerchantResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## getTransactions

> GetTransactionsResponse getTransactions(endUserId, highWaterMark, limit)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String endUserId = "endUserId_example"; // String | 
        String highWaterMark = "highWaterMark_example"; // String | 
        Integer limit = 56; // Integer | 
        try {
            GetTransactionsResponse result = apiInstance.getTransactions(endUserId, highWaterMark, limit);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#getTransactions");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endUserId** | **String**|  |
 **highWaterMark** | **String**|  | [optional]
 **limit** | **Integer**|  | [optional]

### Return type

[**GetTransactionsResponse**](GetTransactionsResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## getWebhooks

> GetWebhooksResponse getWebhooks()



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        try {
            GetWebhooksResponse result = apiInstance.getWebhooks();
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#getWebhooks");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**GetWebhooksResponse**](GetWebhooksResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## upsertAccount

> EmptyResponse upsertAccount(accountRequestWrapper)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        AccountRequestWrapper accountRequestWrapper = new AccountRequestWrapper(); // AccountRequestWrapper | 
        try {
            EmptyResponse result = apiInstance.upsertAccount(accountRequestWrapper);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#upsertAccount");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountRequestWrapper** | [**AccountRequestWrapper**](AccountRequestWrapper.md)|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## upsertBatchTransactions

> EmptyResponse upsertBatchTransactions(uploadBatchTransactionsRequest)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        UploadBatchTransactionsRequest uploadBatchTransactionsRequest = new UploadBatchTransactionsRequest(); // UploadBatchTransactionsRequest | 
        try {
            EmptyResponse result = apiInstance.upsertBatchTransactions(uploadBatchTransactionsRequest);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#upsertBatchTransactions");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uploadBatchTransactionsRequest** | [**UploadBatchTransactionsRequest**](UploadBatchTransactionsRequest.md)|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## upsertOneTransaction

> CleanSingleTransactionResponse upsertOneTransaction(cleanSingleTransactionRequest)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        CleanSingleTransactionRequest cleanSingleTransactionRequest = new CleanSingleTransactionRequest(); // CleanSingleTransactionRequest | 
        try {
            CleanSingleTransactionResponse result = apiInstance.upsertOneTransaction(cleanSingleTransactionRequest);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#upsertOneTransaction");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cleanSingleTransactionRequest** | [**CleanSingleTransactionRequest**](CleanSingleTransactionRequest.md)|  |

### Return type

[**CleanSingleTransactionResponse**](CleanSingleTransactionResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |


## upsertUserAnnotation

> AddAnnotationResponse upsertUserAnnotation(transactionId, addAnnotationRequest)



### Example

```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.DefaultApi;

public class Example {
    public static void main(String[] args) {
        ApiClient defaultClient = Configuration.getDefaultApiClient();
        defaultClient.setBasePath("https://haven.dev/api");
        
        // Configure HTTP basic authorization: bearerAuth
        HttpBasicAuth bearerAuth = (HttpBasicAuth) defaultClient.getAuthentication("bearerAuth");
        bearerAuth.setUsername("YOUR USERNAME");
        bearerAuth.setPassword("YOUR PASSWORD");

        DefaultApi apiInstance = new DefaultApi(defaultClient);
        String transactionId = "transactionId_example"; // String | 
        AddAnnotationRequest addAnnotationRequest = new AddAnnotationRequest(); // AddAnnotationRequest | 
        try {
            AddAnnotationResponse result = apiInstance.upsertUserAnnotation(transactionId, addAnnotationRequest);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#upsertUserAnnotation");
            System.err.println("Status code: " + e.getCode());
            System.err.println("Reason: " + e.getResponseBody());
            System.err.println("Response headers: " + e.getResponseHeaders());
            e.printStackTrace();
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **transactionId** | **String**|  |
 **addAnnotationRequest** | [**AddAnnotationRequest**](AddAnnotationRequest.md)|  |

### Return type

[**AddAnnotationResponse**](AddAnnotationResponse.md)

### Authorization

[bearerAuth](../README.md#bearerAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** |  |  -  |
| **409** | Conflict |  -  |
| **404** | Not found |  -  |
| **401** | Unauthorized |  -  |
| **400** | Bad request |  -  |
| **500** | Server error |  -  |
| **429** | Rate limited |  -  |

