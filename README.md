# Haven API Clients

## Getting started with go

The golang API client has some upstream dependencies:
* go get github.com/stretchr/testify/assert
* go get golang.org/x/oauth2
* go get golang.org/x/net/context
* go get github.com/antihax/optional

Example code demonstrating the way to setup authentication and make API requests is in the file
`golang/hello-world.go`. Be sure to update the credentials in that file!

## Getting started with Kotlin

### Installing

The haven-api client is published on maven central as:

```
<dependency>
    <groupId>dev.haven</groupId>
    <artifactId>api-client</artifactId>
    <version>1.0.0</version>
</dependency>
```

### Building
The Kotlin API lives in the folder kotlin/ and can be built with gradle. From that directory,
* sudo apt-get install gradle OR  brew install gradle
* gradle wrapper
* ./gradlew run # run the example code in `dev.haven.client.example.HelloWorld`
* ./gradlew jar # build the jar at `build/libs/haven-client-1.0.0.jar`

## Getting started with Python

The Python API lives in a package called haven at `/python/haven`. There are some requirements
listed in requirements.txt which you can pip install into your virtualenv. An example of how to invoke the
API bindings is in hello_world.py (be sure to update the credentials!)
* cd python/
* virtualenv venv && . venv/bin/activate
* pip install -r requirements.txt
* python hello_world.py

## Getting started with Typescript/Node

The Typescript API (implemented for Node.js) lives in the folder typescript/ and has support for both Typescript and
Javascript. Build it using `yarn` in that folder. For an example, see "hello-world.ts"
* cd typescript/
* yarn install
* yarn build
* yarn hello # update the secrets in hello-world.ts!


## Using this repository

### How to build:

* `yarn install`
* `yarn build`

### How this works
* all of the code is generated from the OpenAPI YAML specification
* We'll update that document and re-run the build command to generate more clients
* Some OpenAPI implementations provide more features than others, and there is some slight
monkey-patching to ensure feature overlap.
