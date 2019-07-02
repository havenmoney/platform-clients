# Haven API Clients

## Getting started with go

The golang API client has some upstream dependencies:
* go get github.com/stretchr/testify/assert
* go get golang.org/x/oauth2
* go get golang.org/x/net/context
* go get github.com/antihax/optional

Example code demonstrating the way to setup authentication and make API requests is in the file
`golang/hello-world.go`


## Using this repository

### How to build:

* `yarn install`
* `yarn build`

### How this works
* all of the code is generated from the OpenAPI YAML specification
* We'll update that document and re-run the build command to generate more clients
