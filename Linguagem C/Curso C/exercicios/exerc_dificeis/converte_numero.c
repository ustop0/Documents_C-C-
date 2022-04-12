#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower

int main(){

   int numero;
   
   
   
   do{
   printf("----Inverte numeros----\n");
   printf("Escreva um numero de 3 digitos: ");
   scanf("%i", &numero);
   
   }while(numero >= 100 || numero <= 999);
    
    return 0;
}

//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

/* for(int i = 0; i < strlen(str); i++){
        printf("%c", tolower(str[i]));
    
    }*/
