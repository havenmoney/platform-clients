package dev.haven.client.example

import dev.haven.client.apis.DefaultApi
import dev.haven.client.models.TenantServiceAccountAgentLoginRequest
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

    val client = makeAuthedClient(id, secret).first
    println(client.getWebhooks())
    kotlin.system.exitProcess(0)
}