#include<stdio.h> 
#include<stdlib.h>
#include<time.h> //biblioteca que pega o tempo do computador 

//Gerar números aleatórios em C

int main(){
	
	//Alimenta a função "rand" de forma diferente
	srand((unsigned)time(NULL));
	
	//Variável que recebe o resto da divisão do numero por 3 (aleatorio entre 0 e 2)
	int aleatorio = rand() % 3;
	
	//Variável que recebe o resto da divisão do numero por 5 (aleatorio entre 1 e 5)
	int aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf("%d", aleatorioSegundo);
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
