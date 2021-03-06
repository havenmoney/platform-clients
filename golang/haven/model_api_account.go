/*
 * Haven Money API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package haven
import (
	"time"
)

type ApiAccount struct {
	Id string `json:"id"`
	User string `json:"user"`
	DisplayName string `json:"displayName"`
	DisplayNameDetailed string `json:"displayNameDetailed"`
	Institution string `json:"institution"`
	InstitutionName string `json:"institutionName"`
	Logo *string `json:"logo,omitempty"`
	Colors *InstitutionColors `json:"colors,omitempty"`
	AccountType AccountType `json:"accountType"`
	AccountSubType AccountSubType `json:"accountSubType"`
	Balance Balance `json:"balance"`
	CreatedAt time.Time `json:"createdAt"`
	UpdatedAt time.Time `json:"updatedAt"`
}
