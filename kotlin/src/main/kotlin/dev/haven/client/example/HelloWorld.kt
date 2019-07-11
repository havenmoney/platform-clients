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

    client.upsertOneTransaction(CleanSingleTransactionRequest(
            transaction = RawTransaction(
                    id = "txn-0001",
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
                    userTransactedAt = Instant.now())))

    println(client.getTransactions("user-1", null, 100))
    kotlin.system.exitProcess(0)
}