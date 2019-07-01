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

type RawTransaction struct {
	Id string `json:"id"`
	Account string `json:"account"`
	User string `json:"user"`
	RawMemo string `json:"rawMemo"`
	Merchant *RawMerchant `json:"merchant,omitempty"`
	Store *RawMerchantStore `json:"store,omitempty"`
	Network *string `json:"network,omitempty"`
	UserTransactedAt *time.Time `json:"userTransactedAt,omitempty"`
	Amount string `json:"amount"`
	Categories []string `json:"categories"`
	Kind TransactionKind `json:"kind"`
	State TransactionState `json:"state"`
}
