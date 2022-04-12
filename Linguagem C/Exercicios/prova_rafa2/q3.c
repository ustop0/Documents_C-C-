#include <stdio.h>
#include <string.h>

int main() {

    char nome[100];
      
    printf("---TRANSFORMAR O NOME EM REFERENCIA BIBLIOGRÁFICA---\n");
    printf("Digite o nome completo do autor: ");
    scanf(" %[^\n]", nome);

    int pos = strlen(nome)-1;
    do{
        pos--;
    }while(nome[pos]!=' ');
    
    for(int i=pos+1; i<strlen(nome); i++){
        printf("%c",nome[i]);
    }
    printf(", ");
    
    for (int i=0; i<pos; i++){
        if (i==0 || nome[i-1]==' '){
            printf("%c.", nome[i]);
        }
    }
    puts("");

    for(int i=0; i<strlen(nome);i++){
        if (i==0 || nome[i-1]==' ')
            printf("%c", nome[i]-32);
        else
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
