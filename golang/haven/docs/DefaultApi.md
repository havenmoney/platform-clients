# \DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateAccessToken**](DefaultApi.md#CreateAccessToken) | **Post** /v1/tokens | 
[**CreateWebhook**](DefaultApi.md#CreateWebhook) | **Post** /v1/webhooks | 
[**DeleteAccount**](DefaultApi.md#DeleteAccount) | **Delete** /v1/accounts/{AccountId} | 
[**DeleteForUser**](DefaultApi.md#DeleteForUser) | **Delete** /v1/users/{EndUserId} | 
[**DeleteTransaction**](DefaultApi.md#DeleteTransaction) | **Delete** /v1/transactions/{TransactionId} | 
[**DeleteWebhook**](DefaultApi.md#DeleteWebhook) | **Delete** /v1/webhooks/{WebhookId} | 
[**GetAccountsForUser**](DefaultApi.md#GetAccountsForUser) | **Get** /v1/accounts/user/{EndUserId} | 
[**GetMerchant**](DefaultApi.md#GetMerchant) | **Get** /v1/merchants/{MerchantId} | 
[**GetTransactions**](DefaultApi.md#GetTransactions) | **Get** /v1/transactions/{EndUserId} | 
[**GetWebhooks**](DefaultApi.md#GetWebhooks) | **Get** /v1/webhooks | 
[**UpsertAccount**](DefaultApi.md#UpsertAccount) | **Put** /v1/accounts | 
[**UpsertBatchTransactions**](DefaultApi.md#UpsertBatchTransactions) | **Post** /v1/transactions/batch | 
[**UpsertOneTransaction**](DefaultApi.md#UpsertOneTransaction) | **Post** /v1/transactions/online | 
[**UpsertUserAnnotation**](DefaultApi.md#UpsertUserAnnotation) | **Post** /v1/annotations/{TransactionId} | 



## CreateAccessToken

> TenantServiceAccountAgentLoginResponse CreateAccessToken(ctx, tenantServiceAccountAgentLoginRequest)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**tenantServiceAccountAgentLoginRequest** | [**TenantServiceAccountAgentLoginRequest**](TenantServiceAccountAgentLoginRequest.md)|  | 

### Return type

[**TenantServiceAccountAgentLoginResponse**](TenantServiceAccountAgentLoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CreateWebhook

> CreateWebhookResponse CreateWebhook(ctx, createWebhookRequest)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**createWebhookRequest** | [**CreateWebhookRequest**](CreateWebhookRequest.md)|  | 

### Return type

[**CreateWebhookResponse**](CreateWebhookResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteAccount

> EmptyResponse DeleteAccount(ctx, accountId)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**accountId** | **string**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteForUser

> EmptyResponse DeleteForUser(ctx, endUserId)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**endUserId** | **string**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteTransaction

> EmptyResponse DeleteTransaction(ctx, transactionId)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**transactionId** | **string**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteWebhook

> EmptyResponse DeleteWebhook(ctx, webhookId)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**webhookId** | **string**|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAccountsForUser

> GetAccountsResponse GetAccountsForUser(ctx, endUserId)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**endUserId** | **string**|  | 

### Return type

[**GetAccountsResponse**](GetAccountsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetMerchant

> GetMerchantResponse GetMerchant(ctx, merchantId)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**merchantId** | **string**|  | 

### Return type

[**GetMerchantResponse**](GetMerchantResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTransactions

> GetTransactionsResponse GetTransactions(ctx, endUserId, optional)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**endUserId** | **string**|  | 
 **optional** | ***GetTransactionsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetTransactionsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **highWaterMark** | **optional.String**|  | 
 **limit** | **optional.Int32**|  | 

### Return type

[**GetTransactionsResponse**](GetTransactionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWebhooks

> GetWebhooksResponse GetWebhooks(ctx, )


### Required Parameters

This endpoint does not need any parameter.

### Return type

[**GetWebhooksResponse**](GetWebhooksResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpsertAccount

> EmptyResponse UpsertAccount(ctx, accountRequestWrapper)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**accountRequestWrapper** | [**AccountRequestWrapper**](AccountRequestWrapper.md)|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpsertBatchTransactions

> EmptyResponse UpsertBatchTransactions(ctx, uploadBatchTransactionsRequest)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uploadBatchTransactionsRequest** | [**UploadBatchTransactionsRequest**](UploadBatchTransactionsRequest.md)|  | 

### Return type

[**EmptyResponse**](EmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpsertOneTransaction

> CleanSingleTransactionResponse UpsertOneTransaction(ctx, cleanSingleTransactionRequest)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**cleanSingleTransactionRequest** | [**CleanSingleTransactionRequest**](CleanSingleTransactionRequest.md)|  | 

### Return type

[**CleanSingleTransactionResponse**](CleanSingleTransactionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## UpsertUserAnnotation

> AddAnnotationResponse UpsertUserAnnotation(ctx, transactionId, addAnnotationRequest)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**transactionId** | **string**|  | 
**addAnnotationRequest** | [**AddAnnotationRequest**](AddAnnotationRequest.md)|  | 

### Return type

[**AddAnnotationResponse**](AddAnnotationResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

