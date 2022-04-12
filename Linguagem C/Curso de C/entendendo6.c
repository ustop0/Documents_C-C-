#include<stdio.h> 
#include<stdlib.h> 

//switch case em C

int main(){
	
	//definindo variáveis
	int a = 2;
	char b = 'x';
	
	//Switch case
	switch(a){
		case 1:
			printf("\n Opcao escolhida:1");
			break;
		case 2:
			printf("\n Opcao escolhida:2");
			break;
		case 3:
			printf("\n Opcao escolhida:3");
			break;
		default:
			printf("\n Opcao invalida");
			break;			
	}
	
	//Switch case com char
	switch(b){
		case 'x':
			printf("\n A letra é x");
			break;
		default:
			printf("\n Opcao invalida");
			break;			
	}
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
