#include<stdio.h> 
#include<stdlib.h> 

//operações matemáticas em C

int main(){
	
	//definindo variáveis
	int a = 6, b = 3;
	
	//soma
	printf("\n A soma de %d e %d = %d", a, b, a + b);
	
	//subtração
	printf("\n A subtração de %d e %d = %d", a, b, a - b);
	
	//divisão
	printf("\n A divisão de %d e %d = %d", a, b, a / b);
	
	//multiplicação
	printf("\n A multiplicação de %d e %d = %d", a, b, a * b);
	
	//resto da divisão
	printf("\n O resto da divisão de %d e %d = %d", a, b, a % b);
	
	//valor absoluto
	printf("\n O valor absoluto de -3 = %d", abs(-3));
	
	//pausa o programa após executar, método do linux
	//system("read -p 'Press Enter to continue...' var");
}
