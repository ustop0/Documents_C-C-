#include <stdio.h>

//typedef --redefinir tipos

int main(){

    //serve para structs também
    //o tipo float foi definido para nota, podemos chamar um float através da nota
	typedef float nota; //4 bytes


	//declarando variáveis
	nota prova1 = 7.0;
	nota prova2 = 6.0;

	nota soma = prova1 + prova2;

	printf("A soma das notas é %.2f", soma);

	return 0;
}
