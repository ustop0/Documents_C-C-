#include<stdio.h> //biblioteca para ler valores (input) e exibir valores (output)
#include<stdlib.h> //biblioteca para alocar memória

//Linguagem C --> básico

//printf("%d", a); -> imprime o valor de uma variável na tela || o %d indica um inteiro, %c um character, %f um float(real) e %s uma string
//scanf("%d", &a); -> lê o valor para uma variável || o & significa o endereço da variável na memória (ram)

// --Funções--
//int main() retorna um número inteiro
//void main() não retorna nada

int main(){
	printf("olá mundo!\n");
	
	int a = 50;
	printf("O valor do a é: %d\n", a);
	scanf("%d", &a);
	printf("O valor de a mudou para %d", a);
	
	float b = 80;
	printf("O valor do a é: %f\n", b);
	scanf("%f", &b);
	printf("O valor de a mudou para %f", b);
	
	char c = 'T';
	printf("O valor do a é: %c\n", c);
	fflush(stdin); //limpa o buffer da entrada principal, necessário para variáveis do tipo char
	scanf("%c", &c);
	printf("O valor de a mudou para %c", c);
	
	//pausa o programa após executar
	system("pause");
}


