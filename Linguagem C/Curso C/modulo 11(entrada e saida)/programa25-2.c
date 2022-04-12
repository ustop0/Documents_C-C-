#include <stdio.h>


int main(){
	FILE *arq; //file é um ponteiro para arquivos
	char c;

	arq = fopen("arquivo.txt", "r"); //leitura

    //verifica arquivo
	if(arq){                            
		while((c = getc(arq)) != EOF){ //imprime todos o caracteres do arquivo
		    printf("%c", c);           //EOF = End Of File //fim do arquivo         
		}
	}else{
		printf("Não achei o arquivo");
	}
	fclose(arq);
	return 0;
}
