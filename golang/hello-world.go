package main

import (
	"./haven"
	"context"
	"fmt"
	"github.com/antihax/optional"
	"golang.org/x/oauth2"
	"time"
)

func setupConfiguration(ctx context.Context) (context.Context, *haven.Configuration) {
	cfg := haven.NewConfiguration()
	cfg.BasePath = "https://haven.dev/api"
	var newContext = context.WithValue(
		ctx,
		haven.ContextOAuth2,
		oauth2.ReuseTokenSource(nil, haven.TokenSource{Cfg: cfg, Id: "s--your-id", Secret: "your-secret"}))
	return newContext, cfg
}

func main() {
	ctx, cfg := setupConfiguration(context.Background())
	client := haven.NewAPIClient(cfg)

	// Upload a transaction
	now := time.Now().UTC()
	network := "VISA"
	_, _, err := client.DefaultApi.UpsertOneTransaction(ctx, haven.CleanSingleTransactionRequest{
		Transaction: haven.RawTransaction{
			Id:               "123",
			Account:          "a1",
			User:             "u1",
			RawMemo:          "ACH TRANSACTION",
			Merchant:         nil,
			Store:            nil,
			Network:          &network,
			UserTransactedAt: &now,
			Amount:           "100.0",
			Categories:       []string{},
			Kind:             haven.ACH,
			State:            haven.COMPLETED,
		},
	})

	if err != nil {
		fmt.Println("Failed to upload", err)
		return
	}

	// Read back the transaction we wrote.
	opts := haven.GetTransactionsOpts {
		HighWaterMark: optional.EmptyString(),
		Limit: optional.NewInt32(10),
	}
	transactions, _, err := client.DefaultApi.GetTransactions(ctx, "u1", &opts)
	if err != nil {
		fmt.Println("failed to fetch transactions", err)
		return
	}
	fmt.Printf("Downloaded %d transactions for user u1\n", len(transactions.Transactions))

	_, _, err = client.DefaultApi.DeleteForUser(ctx, "u1")

	if err != nil {
		fmt.Println("Could not delete for user", err)
		return
	}

	// Example of a 400 Bad Request
	_, _, err = client.DefaultApi.UpsertOneTransaction(ctx, haven.CleanSingleTransactionRequest{
		Transaction: haven.RawTransaction{
			Id:               "123",
			Account:          "a1",
			User:             "u1",
			RawMemo:          "ACH TRANSACTION",
			Merchant:         &haven.RawMerchant{},
			Store:            &haven.RawMerchantStore{},
			Network:          &network,
			UserTransactedAt: &now,
			Amount:           "ASDFASDF", // <- this should be a number, causes the 400.
			Categories:       []string{},
			Kind:             haven.ACH,
			State:            haven.COMPLETED,
		},
	})
	if err != nil {
		fmt.Println("failed to upload (expected)", err)
		return
	}
}
