/*
 * Haven Money API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package haven

type RawMerchantStore struct {
	Mid *string `json:"mid,omitempty"`
	Name *string `json:"name,omitempty"`
	Address *Address `json:"address,omitempty"`
}
