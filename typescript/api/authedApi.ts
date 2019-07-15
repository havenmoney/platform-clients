import { DefaultApi } from "./defaultApi";
import { TenantServiceAccountAgentLoginResponse } from "../api";

export class AuthedApi extends DefaultApi {
    loginResponse: TenantServiceAccountAgentLoginResponse | null;

    constructor(
        private id: string,
        private secret: string,
        public basePath: string
    ) {
        super(basePath);
    }

    authenticated(): Promise<AuthedApi> {
        if (this.loginResponse && this.loginResponse.expiry < new Date()) {
            this.defaultHeaders = {
                Authorization: `Bearer ${this.loginResponse.token}`
            };

            return Promise.resolve(this);
        }

        return new DefaultApi(this.basePath)
            .createAccessToken({
                id: this.id,
                secret: this.secret
            })
            .then(loginResponse => {
                this.loginResponse = loginResponse.body;
                this.defaultHeaders = {
                    Authorization: `Bearer ${loginResponse.body.token}`
                };
                return this;
            });
    }
}
