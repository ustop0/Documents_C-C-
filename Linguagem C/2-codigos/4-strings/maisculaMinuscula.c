#include <stdio.h>

int main()
{
	void alfabetico( char variavel );

	char nome[20];
	printf("Digite uma palavra: ");
	scanf("%s", nome);
	
	//sim
	int i = 0;
	while( nome[i] != '\0' )
	{
		alfabetico( nome[i] );
		++i;
	}

	return 0;
}

//diz se um caractere é alfabético
void alfabetico( char variavel )
{
	//caracteres minusculos e maiusculos, verifica se é uma letra
	if( ( variavel >= 'a' && variavel <= 'z') )
	{
		printf("letra miniscula: %c \n", variavel);
	}
	else if( ( variavel >= 'A' & variavel <= 'Z') )
	{
		printf("letra  maiusculo: %c \n", variavel);
	}
}
