import haven
from haven.authed_api_client import AuthedApiClient

from datetime import datetime
from dateutil.tz import tzutc


def main():
    config = haven.Configuration(host="https://haven.dev/api")
    api = haven.DefaultApi(AuthedApiClient(
        id="YOUR_ID_HERE",
        secret="YOUR_SECRET_HERE",
        configuration=config))

    # upload a transaction
    api.upsert_one_transaction(haven.CleanSingleTransactionRequest(
        transaction=haven.RawTransaction(
            id="txn-1",
            account="account-a",
            user="user-0",
            raw_memo="Uber ***232**123",
            merchant=None,
            store=None,
            network="VISA",
            user_transacted_at=datetime.now().replace(tzinfo=tzutc()),
            amount="-12.34",
            categories=[],
            kind=haven.TransactionKind.CREDIT_CARD,
            state=haven.TransactionState.COMPLETED)))

    transactions = api.get_transactions("user-0", limit=10)
    print(transactions)


if __name__ == "__main__":
    main()
