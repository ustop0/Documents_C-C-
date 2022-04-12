#include<stdio.h>
#include<stdlib.h>


int main(){

    int anoNasci, anoAtual, idade;
    
    
    printf("--Calculo de idade da pessoa--\n");
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNasci);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
    idade = anoAtual - anoNasci;
    
     
    printf("\nA sua idade é de: %d anos\n", idade);
    
    return 0;
}


