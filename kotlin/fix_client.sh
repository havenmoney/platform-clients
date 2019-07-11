#!/bin/bash

# Default API
# kotlin/src/main/kotlin/dev/haven/client/apis/DefaultApi.kt
old_default='class DefaultApi(basePath: kotlin.String = \"http://localhost\") : ApiClient(basePath) {'
new_default='class DefaultApi(basePath: kotlin.String, token: kotlin.String? = null) : ApiClient(basePath, token) {'
sed -i "s^$old_default^$new_default^" kotlin/src/main/kotlin/dev/haven/client/apis/DefaultApi.kt

# Base API
# kotlin/src/main/kotlin/dev/haven/client/infrastructure/ApiClient.kt
old_base="open class ApiClient(val baseUrl: String) {"
new_base="open class ApiClient(val baseUrl: String, val token: String?) {"

sed -i "s/$old_base/$new_base/" kotlin/src/main/kotlin/dev/haven/client/infrastructure/ApiClient.kt

insertion='\        if(requestConfig.headers[Authorization].isNullOrEmpty() && token != null) \{\n           requestConfig.headers[Authorization] = "Bearer $token"\n        \}'
insertion2='\        protected const val Authorization = "Authorization"'

sed -i "85i $insertion" kotlin/src/main/kotlin/dev/haven/client/infrastructure/ApiClient.kt
sed -i "20i $insertion2" kotlin/src/main/kotlin/dev/haven/client/infrastructure/ApiClient.kt

