# \DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteV1TransactionsTransactionid**](DefaultApi.md#DeleteV1TransactionsTransactionid) | **Delete** /v1/transactions/{TransactionId} | 
[**DeleteV1UsersEnduserid**](DefaultApi.md#DeleteV1UsersEnduserid) | **Delete** /v1/users/{EndUserId} | 
[**DeleteV1WebhooksWebhookid**](DefaultApi.md#DeleteV1WebhooksWebhookid) | **Delete** /v1/webhooks/{WebhookId} | 
[**GetV1MerchantsMerchantid**](DefaultApi.md#GetV1MerchantsMerchantid) | **Get** /v1/merchants/{MerchantId} | 
[**GetV1TransactionsEnduserid**](DefaultApi.md#GetV1TransactionsEnduserid) | **Get** /v1/transactions/{EndUserId} | 
[**GetV1Webhooks**](DefaultApi.md#GetV1Webhooks) | **Get** /v1/webhooks | 
[**PostV1AnnotationsTransactionid**](DefaultApi.md#PostV1AnnotationsTransactionid) | **Post** /v1/annotations/{TransactionId} | 
[**PostV1Tokens**](DefaultApi.md#PostV1Tokens) | **Post** /v1/tokens | 
[**PostV1TransactionsBatch**](DefaultApi.md#PostV1TransactionsBatch) | **Post** /v1/transactions/batch | 
[**PostV1TransactionsOnline**](DefaultApi.md#PostV1TransactionsOnline) | **Post** /v1/transactions/online | 
[**PostV1Webhooks**](DefaultApi.md#PostV1Webhooks) | **Post** /v1/webhooks | 



## DeleteV1TransactionsTransactionid

> EmptyResponse DeleteV1TransactionsTransactionid(ctx, transactionId)


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


## DeleteV1UsersEnduserid

> EmptyResponse DeleteV1UsersEnduserid(ctx, endUserId)


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


## DeleteV1WebhooksWebhookid

> EmptyResponse DeleteV1WebhooksWebhookid(ctx, webhookId)


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


## GetV1MerchantsMerchantid

> GetMerchantResponse GetV1MerchantsMerchantid(ctx, merchantId)


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


## GetV1TransactionsEnduserid

> GetTransactionsResponse GetV1TransactionsEnduserid(ctx, endUserId)


### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**endUserId** | **string**|  | 

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


## GetV1Webhooks

> GetWebhooksResponse GetV1Webhooks(ctx, )


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


## PostV1AnnotationsTransactionid

> AddAnnotationResponse PostV1AnnotationsTransactionid(ctx, transactionId, addAnnotationRequest)


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


## PostV1Tokens

> TenantServiceAccountAgentLoginResponse PostV1Tokens(ctx, tenantServiceAccountAgentLoginRequest)


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


## PostV1TransactionsBatch

> EmptyResponse PostV1TransactionsBatch(ctx, uploadBatchTransactionsRequest)


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


## PostV1TransactionsOnline

> CleanSingleTransactionResponse PostV1TransactionsOnline(ctx, cleanSingleTransactionRequest)


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


## PostV1Webhooks

> CreateWebhookResponse PostV1Webhooks(ctx, createWebhookRequest)


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

