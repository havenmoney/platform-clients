import { AuthedApi } from "./api/authedApi";

async function main() {
    try {
        const client = await new AuthedApi(
            "YOUR_ID_HERE",
            "YOUR_SECRET_HERE",
            "https://haven.dev/api"
        ).authenticated();

        const txns = await client.getTransactions("user-1");
        console.log(txns.body);
    } catch (e) {
        console.log(e);
    }
}

main();
