# Haven API Clients

Haven provides several API clients for consumption of the API. Official documentation lives at
https://haven.readme.io/reference

## Python

### Installing

The client is published on pypi, available here: https://pypi.org/project/haven-client/

```
> pip install haven-client
```

### Usage
Example usage provided [here](https://github.com/havenmoney/platform-clients/blob/master/python/README.md).

## Kotlin
### Installing

The API client is published on Maven Central here: https://mvnrepository.com/artifact/dev.haven/api-client

```
<dependency>
    <groupId>dev.haven</groupId>
    <artifactId>api-client</artifactId>
    <version>1.0.0</version>
</dependency>
```

### Usage 
Example usage provided 
[here](https://github.com/havenmoney/platform-clients/blob/master/kotlin/src/main/kotlin/dev/haven/client/example/HelloWorld.kt).

### Building from source
The Kotlin API lives in the folder kotlin/ and can be built with gradle. From that directory,
* sudo apt-get install gradle OR  brew install gradle
* gradle wrapper
* ./gradlew run # run the example code in `dev.haven.client.example.HelloWorld`
* ./gradlew jar # build the jar at `build/libs/haven-client-1.0.0.jar`

## Typescript/Node

### Installing

The typescript client is published on NPM here [`https://www.npmjs.com/package/@havenmoney/js-client`](https://www.npmjs.com/package/@havenmoney/js-client).
```bash
> npm i @havenmoney/js-client
```

### Example
Example usage provided [here](https://www.npmjs.com/package/@havenmoney/js-client).

### Building from source
The Typescript API (implemented for Node.js) lives in the folder typescript/ and has support for both Typescript and
Javascript. Build it using `yarn` in that folder. For an example, see "hello-world.ts"
* cd typescript/
* yarn install
* yarn build
* yarn hello # update the secrets in hello-world.ts!

## GO

The golang API client has some upstream dependencies:
* go get github.com/stretchr/testify/assert
* go get golang.org/x/oauth2
* go get golang.org/x/net/context
* go get github.com/antihax/optional

Example code demonstrating the way to setup authentication and make API requests is in the file
`golang/hello-world.go`. Be sure to update the credentials in that file!

## REST

Haven's official documentation lives at https://haven.readme.io/reference

## Using this repository

### How to build:

* `yarn install`
* `yarn build`

### How this works
Code is largely generated from the OpenAPI YAML specification.
Some OpenAPI implementations provide more features than others and are manually supplemented.
Packaging is handled manually.
