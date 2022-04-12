#include <stdio.h>

int main()
{
	int tamanhoString( char string[] );
	char stringUsuario[20];

	printf("\nDigite uma palavra(string): ");
	scanf("%s", stringUsuario);

	int num = tamanhoString( stringUsuario );
	printf("A string %s possui %i caracteres. \n", stringUsuario, num);

	return 0;
}

int tamanhoString( char string[] )
{
	int numCaracteres = 0;

	while( string[numCaracteres] != '\0' )
	{
		++numCaracteres;
	}
	++numCaracteres; //remover serve para contar o numero de letras
	
	return numCaracteres;
}
