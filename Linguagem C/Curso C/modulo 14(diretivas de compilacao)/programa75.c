#include <stdio.h>

//São considerados #include guards
#ifndef PI
    #define PI 3.14567
#endif
//ifdef - Diretiva de compilação



int main(){

	int valor = 5; //variável

	valor = 467;

	printf("O valor é %d\n", valor);

	//printf("PI vale %f\n", (2 * PI));

	#ifdef PI //Executa uma ação caso a constante (PI) esteja definida
		printf("O valor de PI é %f\n", PI);
	#endif

	return 0;
}
