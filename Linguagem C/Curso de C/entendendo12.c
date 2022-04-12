#include<stdio.h> 
#include<stdlib.h>
#define TAM 10 //define uma constante, constantes são espaços de memória fixos 

//Constantes com DEFINE em C

int main(){
	
	//imprime na tela
	printf("%d", TAM);
	
	int 1;
	
	//contagem até 10
	for(i = 1;i < TAM;i++){
		printf("\n%d", i);
	}
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
