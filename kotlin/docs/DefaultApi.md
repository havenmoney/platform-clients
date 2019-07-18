# DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAccessToken**](DefaultApi.md#createAccessToken) | **POST** /v1/tokens | 
[**createWebhook**](DefaultApi.md#createWebhook) | **POST** /v1/webhooks | 
[**deleteAccount**](DefaultApi.md#deleteAccount) | **DELETE** /v1/accounts/{AccountId} | 
[**deleteForUser**](DefaultApi.md#deleteForUser) | **DELETE** /v1/users/{EndUserId} | 
[**deleteTransaction**](DefaultApi.md#deleteTransaction) | **DELETE** /v1/transactions/{TransactionId} | 
[**deleteWebhook**](DefaultApi.md#deleteWebhook) | **DELETE** /v1/webhooks/{WebhookId} | 
[**getAccountsForUser**](DefaultApi.md#getAccountsForUser) | **GET** /v1/accounts/user/{EndUserId} | 
[**getMerchant**](DefaultApi.md#getMerchant) | **GET** /v1/merchants/{MerchantId} | 
[**getTransactions**](DefaultApi.md#getTransactions) | **GET** /v1/transactions/{EndUserId} | 
[**getWebhooks**](DefaultApi.md#getWebhooks) | **GET** /v1/webhooks | 
[**upsertAccount**](DefaultApi.md#upsertAccount) | **PUT** /v1/accounts | 
[**upsertBatchTransactions**](DefaultApi.md#upsertBatchTransactions) | **POST** /v1/transactions/batch | 
[**upsertOneTransaction**](DefaultApi.md#upsertOneTransaction) | **POST** /v1/transactions/online | 
[**upsertUserAnnotation**](DefaultApi.md#upsertUserAnnotation) | **POST** /v1/annotations/{TransactionId} | 


<a name="createAccessToken"></a>
# **createAccessToken**
> TenantServiceAccountAgentLoginResponse createAccessToken(tenantServiceAccountAgentLoginRequest)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val tenantServiceAccountAgentLoginRequest : TenantServiceAccountAgentLoginRequest =  // TenantServiceAccountAgentLoginRequest | 
try {
    val result : TenantServiceAccountAgentLoginResponse = apiInstance.createAccessToken(tenantServiceAccountAgentLoginRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#createAccessToken")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#createAccessToken")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tenantServiceAccountAgentLoginRequest** | [**TenantServiceAccountAgentLoginRequest**](TenantServiceAccountAgentLoginRequest.md)|  |

### Return type

[**TenantServiceAccountAgentLoginResponse**](TenantServiceAccountAgentLoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="createWebhook"></a>
# **createWebhook**
> CreateWebhookResponse createWebhook(createWebhookRequest)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val createWebhookRequest : CreateWebhookRequest =  // CreateWebhookRequest | 
try {
    val result : CreateWebhookResponse = apiInstance.createWebhook(createWebhookRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#createWebhook")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#createWebhook")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createWebhookRequest** | [**CreateWebhookRequest**](CreateWebhookRequest.md)|  |

### Return type

[**CreateWebhookResponse**](CreateWebhookResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="deleteAccount"></a>
# **deleteAccount**
> EmptyResponse deleteAccount(accountId)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val accountId : kotlin.String = accountId_example // kotlin.String | 
try {
    val result : EmptyResponse = apiInstance.deleteAccount(accountId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#deleteAccount")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#deleteAccount")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **kotlin.String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteForUser"></a>
# **deleteForUser**
> EmptyResponse deleteForUser(endUserId)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val endUserId : kotlin.String = endUserId_example // kotlin.String | 
try {
    val result : EmptyResponse = apiInstance.deleteForUser(endUserId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#deleteForUser")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#deleteForUser")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endUserId** | **kotlin.String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteTransaction"></a>
# **deleteTransaction**
> EmptyResponse deleteTransaction(transactionId)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val transactionId : kotlin.String = transactionId_example // kotlin.String | 
try {
    val result : EmptyResponse = apiInstance.deleteTransaction(transactionId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#deleteTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#deleteTransaction")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **transactionId** | **kotlin.String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteWebhook"></a>
# **deleteWebhook**
> EmptyResponse deleteWebhook(webhookId)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val webhookId : kotlin.String = webhookId_example // kotlin.String | 
try {
    val result : EmptyResponse = apiInstance.deleteWebhook(webhookId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#deleteWebhook")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#deleteWebhook")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **webhookId** | **kotlin.String**|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getAccountsForUser"></a>
# **getAccountsForUser**
> GetAccountsResponse getAccountsForUser(endUserId)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val endUserId : kotlin.String = endUserId_example // kotlin.String | 
try {
    val result : GetAccountsResponse = apiInstance.getAccountsForUser(endUserId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#getAccountsForUser")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#getAccountsForUser")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endUserId** | **kotlin.String**|  |

### Return type

[**GetAccountsResponse**](GetAccountsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMerchant"></a>
# **getMerchant**
> GetMerchantResponse getMerchant(merchantId)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val merchantId : kotlin.String = merchantId_example // kotlin.String | 
try {
    val result : GetMerchantResponse = apiInstance.getMerchant(merchantId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#getMerchant")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#getMerchant")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **merchantId** | **kotlin.String**|  |

### Return type

[**GetMerchantResponse**](GetMerchantResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTransactions"></a>
# **getTransactions**
> GetTransactionsResponse getTransactions(endUserId, highWaterMark, limit)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val endUserId : kotlin.String = endUserId_example // kotlin.String | 
val highWaterMark : kotlin.String = highWaterMark_example // kotlin.String | 
val limit : kotlin.Int = 56 // kotlin.Int | 
try {
    val result : GetTransactionsResponse = apiInstance.getTransactions(endUserId, highWaterMark, limit)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#getTransactions")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#getTransactions")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **endUserId** | **kotlin.String**|  |
 **highWaterMark** | **kotlin.String**|  | [optional]
 **limit** | **kotlin.Int**|  | [optional]

### Return type

[**GetTransactionsResponse**](GetTransactionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWebhooks"></a>
# **getWebhooks**
> GetWebhooksResponse getWebhooks()



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
try {
    val result : GetWebhooksResponse = apiInstance.getWebhooks()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#getWebhooks")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#getWebhooks")
    e.printStackTrace()
}
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

<a name="upsertAccount"></a>
# **upsertAccount**
> EmptyResponse upsertAccount(accountRequestWrapper)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val accountRequestWrapper : AccountRequestWrapper =  // AccountRequestWrapper | 
try {
    val result : EmptyResponse = apiInstance.upsertAccount(accountRequestWrapper)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#upsertAccount")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#upsertAccount")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountRequestWrapper** | [**AccountRequestWrapper**](AccountRequestWrapper.md)|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="upsertBatchTransactions"></a>
# **upsertBatchTransactions**
> EmptyResponse upsertBatchTransactions(uploadBatchTransactionsRequest)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val uploadBatchTransactionsRequest : UploadBatchTransactionsRequest =  // UploadBatchTransactionsRequest | 
try {
    val result : EmptyResponse = apiInstance.upsertBatchTransactions(uploadBatchTransactionsRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#upsertBatchTransactions")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#upsertBatchTransactions")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uploadBatchTransactionsRequest** | [**UploadBatchTransactionsRequest**](UploadBatchTransactionsRequest.md)|  |

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="upsertOneTransaction"></a>
# **upsertOneTransaction**
> CleanSingleTransactionResponse upsertOneTransaction(cleanSingleTransactionRequest)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val cleanSingleTransactionRequest : CleanSingleTransactionRequest =  // CleanSingleTransactionRequest | 
try {
    val result : CleanSingleTransactionResponse = apiInstance.upsertOneTransaction(cleanSingleTransactionRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#upsertOneTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#upsertOneTransaction")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cleanSingleTransactionRequest** | [**CleanSingleTransactionRequest**](CleanSingleTransactionRequest.md)|  |

### Return type

[**CleanSingleTransactionResponse**](CleanSingleTransactionResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="upsertUserAnnotation"></a>
# **upsertUserAnnotation**
> AddAnnotationResponse upsertUserAnnotation(transactionId, addAnnotationRequest)



### Example
```kotlin
// Import classes:
//import dev.haven.client.infrastructure.*
//import dev.haven.client.models.*

val apiInstance = DefaultApi()
val transactionId : kotlin.String = transactionId_example // kotlin.String | 
val addAnnotationRequest : AddAnnotationRequest =  // AddAnnotationRequest | 
try {
    val result : AddAnnotationResponse = apiInstance.upsertUserAnnotation(transactionId, addAnnotationRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#upsertUserAnnotation")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#upsertUserAnnotation")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **transactionId** | **kotlin.String**|  |
 **addAnnotationRequest** | [**AddAnnotationRequest**](AddAnnotationRequest.md)|  |

### Return type

[**AddAnnotationResponse**](AddAnnotationResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

