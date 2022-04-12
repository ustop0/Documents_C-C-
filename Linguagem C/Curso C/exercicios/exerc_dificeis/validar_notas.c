#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower


int main(){

    float num1, num2, media;
   
    printf("---Praticando C---\n");
   
    
   
    do{
        printf("Digite um numero: ");
        scanf("%f", &num1);
        if(num1 < 0 || num1 > 10){
            printf("nota inserida inválida!\n");
        }    
   
    }while(num1 < 0 || num1 > 10);
   
    do{
        printf("\nDigite outro numero: ");
        scanf("%f", &num2);
        if(num2 < 0 || num2 > 10){
            printf("nota inserida inválida!\n");
        }
    }while(num2 < 0 || num2 > 10);
    
    media = (num1+num2)/2;
    printf("A média foi de: %f\n", media);
   
    return 0;
}


//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

//if(num1 % 2 == 0) verificar se é par ou impar
