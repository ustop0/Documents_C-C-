#include <stdio.h>

int main()
{
	//tipo booleano padrão do C99
	_Bool stringsIguais( char s1[], char s2[] );

	if( stringsIguais( "casa", "casa" ) )
	{
		printf("São iguais\n");
	}
	else
	{
		printf("Não são iguais");
	}

	return 0;
}

//verifica se as strings são iguais
_Bool stringsIguais( char s1[], char s2[] )
{
	int i = 0;

	//compara as duas strings do inicio ao fim e verifica os caracteres diferentes
	while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
	{
		i++;
	}

	//testa os valores para o retorno da função
	if( s1[i] == '\0' && s2[i] = '\0' )
	{
		return 1; //true, se as strings forem iguais
	}
	else
	{
		return 0; //false, se as strings forem diferentes
	}
}
