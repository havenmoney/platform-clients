# Haven API Javascript client

### Install

npm install @havenmoney/js-client
yarn add @havenmoney/js-client

### Example

```
const AuthedApi = require("@havenmoney/js-client").AuthedApi;

async function main() {
    try {
        const client = await new AuthedApi(
            "YOUR_ID_HERE",
            "YOUR_SECRET_HERE",
            "https://haven.dev/api"
        ).authenticated();
        const txns = await client.getTransactions("user-1");
        console.log(txns.bodyi);
    } catch (e) {
        console.log(e);
    }
}

main();

```
