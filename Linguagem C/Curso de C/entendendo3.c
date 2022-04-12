#include<stdio.h> 
#include<stdlib.h> 

//condicionais simples e compostas em C

int main(){
	
	//definindo variáveis
	int a = 6, opcao = 3;
	float b = 2.5;
	char c = 'x';
	
	//condicional simples
	if(a == 5){
		printf("\n A variável a = 5");
	}
	if(b == 2.5){
		printf("\n A variável b = 2.5");
	}
	if(c == 'x'){
		printf("\n A variável c = letra x");
	}
	
	//par ou impar
	if(a % 2){
		printf("\n A variável a é impar");
	} else{
		printf("\n Á variável a é par");
	}
	
	//condicionais compostas
	if(opcao == 1){
		printf("\n A opcao = 1");
	} else if(opcao == 2){
		printf("\n A opcao = 2");
	} else{
		printf("A opcao não é igual a 1 nem 2");
	}
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
