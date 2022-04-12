#include<stdio.h> 
#include<stdlib.h> 

//condicionais multiplas e conectivos em C

int main(){
	
	//definindo variáveis
	int a = 18;
	
	//Conectivo logico E (AND) --> &&, Se uma comparação for falsa, Não entra no bloco
	if(a > 5 && a > 15){
		printf("\n A variável 'a' esta entre 5 e 15");
	}
	
	//Conectivo logico OU (OR) --> ||, Se uma comparação for verdadeira, já entra no bloco
	if(a > 5 || a > 15){
		printf("\n A variável 'a' é maior que 5 e 15");
	}
	
	//Misturando conectivos
	if( (a > 5 && a < 15) || a == 20 ){
		printf("\n A variável 'a' está entre 5 e 15 ou ela vale 20");
	}
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
