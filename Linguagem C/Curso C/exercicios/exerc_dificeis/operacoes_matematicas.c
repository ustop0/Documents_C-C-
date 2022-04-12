#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower
#include<assert.h> //implementa uma asserção


int main(){

    int operacao;
    float tipo, num1, num2;
    
    do{ //repete o programa até o usuário querer sair
        do{ //repete o programa que o usuario digitar um valor inválido
            printf("\n---Operações matemáticas---");
            printf("\n\n1- Soma");
            printf("\n2- Subtração");
            printf("\n3- Multiplicação");
            printf("\n4- Divisão");
            printf("\n5- Sair");
            printf("\n\nDigite o numero da operação: ");
            scanf("%d", &operacao);
                 
            if(operacao < 1 || operacao > 5){
                printf("\nValor inválido!\n");
            }  
        }while(operacao < 1 || operacao > 5);
        
        switch(operacao){
            case 1:
                printf("\nDigite um numero: ");
                scanf("%f", &num1);
                printf("\nDigite outro numero: ");
                scanf("%f", &num2);
                tipo = num1 + num2;
                printf("\nO resultado da soma é: %.2f\n", tipo);
                break;
            case 2:
                printf("\nDigite um numero: ");
                scanf("%f", &num1);
                printf("\nDigite outro numero: ");
                scanf("%f", &num2);
                tipo = num1 - num2;
                printf("\nO resultado da soma é: %.2f\n", tipo);
                break;
            case 3:
                printf("\nDigite um numero: ");
                scanf("%f", &num1);
                printf("\nDigite outro numero: ");
                scanf("%f", &num2);
                tipo = num1 * num2;
                printf("\nO resultado da soma é: %.2f\n", tipo);
                break;
            case 4:
                printf("\nDigite um numero: ");
                scanf("%f", &num1);
                printf("\nDigite outro numero: ");
                scanf("%f", &num2);
                tipo = num1 / num2;
                printf("\nO resultado da soma é: %.2f\n", tipo);
                break;
            case 5:
                
                break;
        }
    }while(operacao != 5);
    return 0;
}

//fflush(stdin) Limpa o buffer do teclado
//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

//if(num1 % 2 == 0) verificar se é par ou impar

//logaritmo = log(num);
//printf("O logaritmo do número %d é: %d\n", num, logaritmo);
    
