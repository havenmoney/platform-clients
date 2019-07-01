package haven

import "golang.org/x/oauth2"
import "context"

type TokenSource struct {
	response *TenantServiceAccountAgentLoginResponse
	Cfg      *Configuration
	Id       string
	Secret   string
}

func (tokenSource TokenSource) Token() (*oauth2.Token, error) {
	client := NewAPIClient(tokenSource.Cfg)

	response, _, err := client.DefaultApi.PostV1Tokens(context.Background(), TenantServiceAccountAgentLoginRequest{
		Id:     tokenSource.Id,
		Secret: tokenSource.Secret,
	})

	if err != nil {
		return nil, err
	}

	token := oauth2.Token{
		AccessToken: response.Token,
		Expiry:      response.Expiry,
	}
	return &token, nil
}
