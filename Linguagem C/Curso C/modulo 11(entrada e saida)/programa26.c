#include <stdio.h>

int main(){
	FILE *arq;
	char nome[100], *resultado;

	arq = fopen("arquivo.txt", "r");

    //verifica arquivo
	if(arq){
		while(!feof(arq)){ //feof - File End Of File
			resultado = fgets(nome, 100, arq); //fgets significa file gets | pega os 100 primeiros chars do arquivo
			printf("Resultado: %d\n", resultado);
			if(resultado){
				printf("%s\n", nome);
			}
		}
	}else{
		printf("Não achei o arquivo");
	}
	fclose(arq);
	return 0;
}
