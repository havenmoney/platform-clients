package dev.haven.client.example

import dev.haven.client.apis.DefaultApi
import dev.haven.client.models.*
import java.time.Instant

const val base = "https://haven.dev/api"

private fun makeAuthedClient(id: String, secret: String): Pair<DefaultApi, Instant> {
    val unauthed = DefaultApi(base, null)
    val resp = unauthed.createAccessToken(TenantServiceAccountAgentLoginRequest(id, secret))

    // this client will be good until resp.expiry
    return Pair(DefaultApi(base, resp.token), resp.expiry)
}

fun main(args: Array<String>) {
    val id = "CHANGE_THIS_ID"
    val secret = "CHANGE_THIS_SECRET"

    val client: DefaultApi = makeAuthedClient(id, secret).first
    println(client.getWebhooks())

    println(client.upsertBatchTransactions(
        UploadBatchTransactionsRequest(
            transactions = arrayOf(
                RawTransaction(
                    id = "txn-0004",
                    account = "account-1",
                    user = "user-1",
                    rawMemo = "uber ride",
                    amount = "100",
                    categories = arrayOf(),
                    kind = TransactionKind.DEBIT_CARD,
                    state = TransactionState.COMPLETED,
                    merchant = null,
                    store = null,
                    network = "VISA",
                    tags = arrayOf(),
                    userTransactedAt = Instant.now()
                )
            )
        )
    ))

    kotlin.system.exitProcess(0)
}