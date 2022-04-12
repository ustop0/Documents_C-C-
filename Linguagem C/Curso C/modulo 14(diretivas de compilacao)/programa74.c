#include <stdio.h>

//diretivas que impedem que o arquivo de cabeçalho seja incluido multiplas vezes durante a compilação também
//São considerados #include guards
#ifndef PI //Verifica se a constante PI não foi definida,  e defina ela
	#define PI 3.14567
#endif
//ifndef - Diretiva de compilação



int main(){

	int valor = 5; //variável

	valor = 467;

	printf("O valor é %d\n", valor);

	printf("PI vale %f\n", (2 * PI));

	return 0;
}
