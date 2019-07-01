#! /bin/bash

# There is an open issue in openapi-generator that points out the problem we ran across here: The Go generator
# is not very good at handling optional values in its default state. The optional fields are rendered out as
# "zero values" like empty-string, int64(0), and empty array. To get around that and reduce the confusion between
# (e.g.) passing an empty list and passing no list at all, we use pointers for all the optional fields.

find golang/haven/ -type f -name model_\*.go -exec sed -E -i 's/([^ ]+) ([^ ]+) `json:"(.+),omitempty"`/\1 *\2 `json:"\3,omitempty"`/g' {} \;

