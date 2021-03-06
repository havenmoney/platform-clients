package dev.haven.client.infrastructure

import com.squareup.moshi.FromJson
import com.squareup.moshi.ToJson
import java.time.Instant
import java.time.format.DateTimeFormatter

class InstantAdapter {
    @ToJson
    fun toJson(value: Instant): String {
        return DateTimeFormatter.ISO_INSTANT.format(value.atOffset(java.time.ZoneOffset.UTC))
    }

    @FromJson
    fun fromJson(value: String): Instant {
        return Instant.parse(value)
    }

}
