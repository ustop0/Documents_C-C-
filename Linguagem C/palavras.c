#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void menu();
void numero();
void consulta();
void vogais();
void maior();

char palavras[15][20];


int main( int argc, char **argv ) 
{
	int i=0;
	char a;

	for( i=0; i<5; i++ )
	{
		printf("Informe a palavra %i: ", i+1);
		gets( palavras[i] );
	}

	menu();

	//printf("%s\n", palavras[0]);
	return 0;
}

void menu() 
{
	int op=0;

	printf("\n****Menu****\n");
	printf("1 - numero\n");
	printf("2 - consulta\n");
	printf("3 - vogais\n");
	printf("4 - maior\n");
	printf("5 - sair\n\n");
	printf("Informe a opcao: ");
	scanf("%d", &op);

	switch( op ) 
	{
		case 1:
			numero();
			break;
		case 2:
			consulta();
			break;
		case 3:
			vogais();
			break;
		case 4:
			maior();
			break;
		case 5:
			exit(0); //sai do programa
			break;
	}
}

void numero() //conta numero de caracteres por palavras
{
	int i, j;

	for( i=0; i<5; i++ ) 
	{
		printf("%s : %lu caracteres\n", palavras[i], strlen( palavras[i] ));
	} 

	menu();
}

void consulta() //consulta uma palavra no vetor
{
	char word[20]="";
	int i, cont=0;

	getchar();
	printf("\nQual a palavra a ser consultada? ");
	gets(word);
	 
	for( i=0; i < 5; i++ ) 
	{
		if( strcmp( palavras[i],word ) == 0 ) 
	 	{
	 		cont++;
	 	}
	}
	 
	if( cont == 0 ) 
	{
		printf("\nPalavra nao encontrada!");
	}
	else 
	{
		printf("A palavra %s foi encontrada %d vezes", word, cont);
	}
	 
	 menu();
}

void vogais() 
{
	int pos=0, i=0, cont=0;

	printf("informe a posicao da palavra: ");
	scanf("%i", &pos);

	for( i=0; i < 20; i++ ) 
	{
		if ( (palavras[pos-1][i] == 'a') || (palavras[pos-1][i] == 'e') || 
			(palavras[pos-1][i] == 'i') || (palavras[pos-1][i] == 'o') || 
			(palavras[pos-1][i] == 'u') ) 
		{
			cont++;
		}
	}

	printf("\n\nA palavra %s tem %d vogais\n", palavras[pos-1], cont);

	 menu();
}

void maior() 
{
	int maior=0, pos=0, i;

	for( i=0; i<5; i++ ) 
	{
		if( strlen( palavras[i] ) > maior ) 
		{
			pos = i;
			maior = strlen( palavras[i] );
		}
	}

	printf("\nA maior palavra eh %s com %d caracteres", palavras[pos], maior);

	menu();
}	
