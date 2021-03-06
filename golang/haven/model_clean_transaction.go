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

type CleanTransaction struct {
	Id string `json:"id"`
	Account string `json:"account"`
	User string `json:"user"`
	Memo string `json:"memo"`
	RawMemo string `json:"rawMemo"`
	Network *string `json:"network,omitempty"`
	UserTransactedAt *time.Time `json:"userTransactedAt,omitempty"`
	Amount string `json:"amount"`
	Categories []string `json:"categories"`
	CleanCategory CleanCategory `json:"cleanCategory"`
	Url *string `json:"url,omitempty"`
	Image *string `json:"image,omitempty"`
	BackgroundImage *string `json:"backgroundImage,omitempty"`
	ExcludeFromBreakdowns bool `json:"excludeFromBreakdowns"`
	Merchant *string `json:"merchant,omitempty"`
	MerchantData *Merchant `json:"merchantData,omitempty"`
	MerchantAddress *Address `json:"merchantAddress,omitempty"`
	Historical []string `json:"historical"`
	Tags []string `json:"tags"`
}
