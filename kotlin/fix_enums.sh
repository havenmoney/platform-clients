#!/bin/bash
find kotlin/src/main/kotlin/dev/haven/client/models/ -name \*.kt -type f -exec sed -i 's/\_Ampersand\_/\_And\_/g' {} \;
find kotlin/docs -name \*.md -type f -exec sed -i 's/\_Ampersand\_/\_And\_/g' {} \;
