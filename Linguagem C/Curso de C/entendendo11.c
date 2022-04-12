#include<stdio.h> 
#include<stdlib.h> 

//Menus e seleções simples em C

int main(){
	
	//definindo variáveis
	int opcao;
	
	
	//confere e valida a opcao
	while(opcao < 1 || opcao > 3){
		
		printf("Escolha uma opção:");
		printf("\n1-Opcao 1");
		printf("\n2-Opcao 2");
		printf("\n3-Opcao 3):
		
		//lendo opcao
		scanf("%d", &opcao);
		
		//resultado de acordo com a opção escolhida
		switch(opcao){
			case 1:
				printf("\nOpcao 1 foi escolhida");
				break;
			case 2:
				printf("\nOpcao 2 foi escolhida");
				break;
			case 3
				printf("\nOpcao 3 foi escolhida");
				break;
			default:
				printf("Opcao inválida");
				break;
		}
	
	}
	
	
	//pausa o programa após executar, método do linux
	system("read -p 'Press Enter to continue...' var");
}
