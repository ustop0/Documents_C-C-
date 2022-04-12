#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower
#include<assert.h> //implementa uma asserção


int main(){

  int num,soma;
  
  printf("\nintroduza o numero: ");
  scanf("%d",&num);
  soma=0;

  while(num>0)
  {
    soma = soma + num%10;
    num/=10;
  }

  printf("\no resultado ficou: %d\n",soma);

    
   
    return 0;
}

//fflush(stdin) Limpa o buffer do teclado
//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

//if(num1 % 2 == 0) verificar se é par ou impar
