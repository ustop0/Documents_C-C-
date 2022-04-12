#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower
#include<assert.h> //implementa uma asserção


int main(){

    int num1;


    do{
        printf("\n---Operações matemáticas---");
        printf("\n\nDigite o numero: ");
        scanf("%d", &num1);
                 
        if(num1 < 0){
            printf("\nValor inválido!\n");
        }  
    }while(num1 < 0);
            
    
    if(num1 % 3 == 0){
        printf("\nO numero %d é divisível por 3\n", num1);
    }else if(num1 % 5 == 0){
        printf("\nO numero %d é divisível por 5\n", num1);
    }else if(num1 % 5 == 0 && num1 % 5 == 0){
        printf("\nO numero %d é divisível por 3 e 5\n", num1);
    }
                 
    return 0;
}

//fflush(stdin) Limpa o buffer do teclado
//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

//if(num1 % 2 == 0) verificar se é par ou impar

//logaritmo = log(num);
//printf("O logaritmo do número %d é: %d\n", num, logaritmo);
    
