#!/bin/bash

find kotlin/src/ -type f -name \*.kt -exec sed -i s"/LocalDateTime/Instant/g" {} \;

old="return Instant.parse(value, DateTimeFormatter.ISO_LOCAL_DATE_TIME)"
good="return Instant.parse(value)"
sed -i s"/$old/$good/" kotlin/src/main/kotlin/dev/haven/client/infrastructure/LocalDateTimeAdapter.kt
