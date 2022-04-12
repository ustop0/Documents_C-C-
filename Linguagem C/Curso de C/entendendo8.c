#include<stdio.h> 
#include<stdlib.h> 

//Laçoes de repetição (while) em C

int main(){
	
	//definindo variáveis
	int a = 1, b = 10;
	
	
	//While
	while(a <= 10){
		
		printf("\n%d", a);
		a++; //incremento
	} 
	
	//Contagem regressiva
	while(b >= 1){
		
		printf("\n%d", b);
		b--; //decremento
	} 
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
