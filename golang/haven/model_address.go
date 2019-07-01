/*
 * Haven Money API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package haven

type Address struct {
	Line1 string `json:"line1"`
	Line2 *string `json:"line2,omitempty"`
	City string `json:"city"`
	State string `json:"state"`
	Zip string `json:"zip"`
	Coordinates *LatLong `json:"coordinates,omitempty"`
}
