#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower
#include<assert.h> //implementa uma asserção


int main(){

  int num, manter, lembrar, invertido = 0;
  
  do{
      printf("\nintroduza o numero: ");
      scanf("%d",&num);
      manter = num;


      if(num < 0){
        printf("número inválido\n");
      }
  }while(num < 0);
  
  for( ;num > 0; )
  {
    //invertido = invertido + num%10;
    lembrar = num % 10;
    invertido = invertido * 10 + lembrar;
    num /= 10;
  }
  
  printf("\nOriginal: %d\n", manter);
  printf("\no resultado ficou: %d\n", invertido);
     
    return 0;
}

//fflush(stdin) Limpa o buffer do teclado
//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

//if(num1 % 2 == 0) verificar se é par ou impar
