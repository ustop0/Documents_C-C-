#include<stdio.h> 
#include<stdlib.h> 

//Laçoes de repetição (do while) em C

int main(){
	
	//definindo variáveis
	int a = 1, b = 10;
	
	//do while
	do{
		
		printf("\n%d", a);
		a++; //incremento
	}while(a <= 10);
	
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
