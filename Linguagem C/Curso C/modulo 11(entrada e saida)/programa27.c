#include <stdio.h>

int main(){
	FILE *arq;
	int num, resultado, soma = 0;

	arq = fopen("arquivo.txt", "r"); //fopen abre um arquivo

	if(arq){
		while(!feof(arq)){
			resultado = fscanf(arq, "%d", &num); //fscanf faz uma leitura do arquivo
			//printf("Resultado: %d\n", resultado);
			if(resultado == 1){ //verifica se a algum valor na linha (percorre todas as linhas), -1 não encontrou
				soma = soma + num;
			}
		}
	}else{
		printf("Não achei o arquivo");
	}
	printf("A soma dos números encontrados é %d\n", soma);
	fclose(arq);
	return 0;
}
