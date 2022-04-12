#include <stdio.h>

int main(){
	FILE *arq;
	char fruta[10];

	arq = fopen("frutasP.txt", "a"); //a // append - adicionar

	if(arq){
		printf("Informe uma fruta, ou 0 para sair: \n");
		fgets(fruta, 10, stdin); //stdin = standard input -> entrada padrão
		while(fruta[0] != '0'){ //se usuário digitar 0 ele termina o programa
			fputs(fruta, arq); //coloca variavel(fruta) que o usuário digita no arquivo
			printf("Informe uma fruta, ou 0 para sair: \n");
			fgets(fruta, 10, stdin);
		}
	}else{
		printf("Não foi possível criar o arquivo.");
	}
	fclose(arq);
	return 0;
}
