# Haven API Clients

## Getting started with go

The golang API client has some upstream dependencies:
* go get github.com/stretchr/testify/assert
* go get golang.org/x/oauth2
* go get golang.org/x/net/context
* go get github.com/antihax/optional

Example code demonstrating the way to setup authentication and make API requests is in the file
`golang/hello-world.go`

## Getting started with Kotlin

The Kotlin API lives in the folder kotlin/ and can be built with gradle. From that directory,
* sudo apt-get install gradle OR  brew install gradle
* gradle wrapper
* ./gradlew run # run the example code in `dev.haven.client.example.HelloWorld`
* ./gradlew jar # build the jar at `build/libs/haven-client-1.0.0.jar`


## Using this repository

### How to build:

* `yarn install`
* `yarn build`

### How this works
* all of the code is generated from the OpenAPI YAML specification
* We'll update that document and re-run the build command to generate more clients
