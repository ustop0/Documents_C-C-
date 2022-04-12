#include <stdio.h>

int main()
{
	char linha[100];
	char caractere;
	int i = 0;

	do
	{
		//função para capturar um caractere por linha de comandoo
		caractere = getchar();
		linha[i] = caractere;
		++i;
	} while( caractere != '\n' ); //ciclo é executado até o usuário apertar enter

	linha[i - 1] = '\0';

	printf("%s\n", linha);

	return 0;
}
