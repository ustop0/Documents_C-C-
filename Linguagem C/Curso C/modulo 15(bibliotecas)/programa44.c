#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atof()

int main(){
	char valor_s[5];
	double valor_d;

	strcpy(valor_s, "4.5"); //"4.a", copia o valor 4.5 para a string valor_S

	valor_d = atof(valor_s); //atof converte string para double

	printf("O valor é %.2f", valor_d);

	return 0;
}
