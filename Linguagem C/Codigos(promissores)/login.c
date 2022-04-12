#include<stdio.h> //biblioteca para ler valores (input) e exibir valores (output)
#include<stdlib.h> //biblioteca para alocar memória
#include<string.h>

typedef struct{
	char login[30];
	char senha[30];
} pessoa; pessoa p[1];

int main(){
	char login[30];
	char senha[30];
	
	//strcpy serve para armazenar o login e a senha, o p[0] é um vetor de 2 posições e cada uma armazena os dados de login e senha
	printf("\n---Tela Inicial--- \n\n");
	strcpy(p[0].login, "amincar");
	strcpy(p[0].senha, "12meurex");
	
	printf("\nLogin:");
	scanf("%s", login);
	printf("\nSenha:");
	scanf("%s", senha);
	
	
	//strcmp é a estrutura responsável por comparar strings testa se a senha atribuida pelo usuário é igual a senha que está dentro da estrutura do strcpy
	if((strcmp(login,p[0].login)==0) || (strcmp(senha,p[0].senha)==0)) {
		printf("Usuário Logado! \n");
	} else{
		printf("Login e/ou senha incorretos!");
	}
	
	return 0;
}
