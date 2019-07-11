#!/bin/bash

find kotlin/src/ -type f -name \*.kt -exec sed -i s"/LocalDateTime/Instant/g" {} \;

old_parse="return Instant.parse(value, DateTimeFormatter.ISO_LOCAL_DATE_TIME)"
good_parse="return Instant.parse(value)"
sed -i s"/$old_parse/$good_parse/" kotlin/src/main/kotlin/dev/haven/client/infrastructure/LocalDateTimeAdapter.kt

old_format="return DateTimeFormatter.ISO_LOCAL_DATE_TIME.format(value)"
good_format="return DateTimeFormatter.ISO_INSTANT.format(value.atOffset(java.time.ZoneOffset.UTC))"
sed -i s"/$old_format/$good_format/" kotlin/src/main/kotlin/dev/haven/client/infrastructure/LocalDateTimeAdapter.kt
