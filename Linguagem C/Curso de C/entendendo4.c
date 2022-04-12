#include<stdio.h> 
#include<stdlib.h> 

//condicionais matemáticas e diferente em C

int main(){
	
	//definindo variáveis
	int a = 5, b = 10, c = 15
	char d = 'x';
	
	//maior
	if(a > 2){
		printf("\n %d é maior que 2", a);
	}
	
	//menor
	if(a < 10){
		printf("\n %d é menor que 10", a);
	}
	
	//maior ou igual
	if(c >= b){
		printf("\n %d é maior ou igual que %d", c, b);
	}
	
	//menor ou igual
	if(a <= 10){
		printf("\n %d é menor ou igual a 10", a);
	}
	
	//diferente
	if(c != 10){
		printf("\n %d não é 10", c);
	}
	if(d != 'a'){
		printf("\n %c não é a", d);
	}
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
