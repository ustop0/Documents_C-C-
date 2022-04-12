#include<stdio.h>
#include<stdlib.h>


int main(){

    char nome[40];
    int idade;
    float salario;
     
    printf("--Digite as informações solicitadas abaixo--\n");
    printf("\nDigite o seu nome: ");
    scanf("%s", nome);
    printf("\nDigite a sua idade: ");
    scanf("%d", &idade);
    printf("\nDigite o seu salário: ");
    scanf("%f", &salario);
     
    printf("\nO nome inserido foi %s ", nome);
    printf("\nA idade é de %d anos", idade);
    printf("\nO salário é de %.2f reais\n", salario);
    
    return 0;
}


