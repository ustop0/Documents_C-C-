#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower
#include<assert.h> //implementa uma asserção


int main(){

    float lab, avaliac, exame, media;
    
    do{
        printf("\nDigite um número: ");
        scanf("%f", &lab);
        printf("\nDigite um número: ");
        scanf("%f", &avaliac);
        printf("\nDigite um número: ");
        scanf("%f", &exame);
        if(lab < 0.0 || lab > 10.0 && avaliac < 0.00 || avaliac > 10.0 && exame < 0.0 || exame > 10.0){
            printf("\nNotas inseridas são inválidas\n");
        }
    }while(lab < 0.0 || lab > 10.0 && avaliac < 0.00 || avaliac > 10.0 && exame < 0.0 || exame > 10.0);
    
    media = ((lab*2) + (avaliac*3) + (exame*5))/10;
    
    if(media <= 2.9){
        printf("Aluno reprovado com média %.2f\n", media);
    } else if(media <= 4.9){
        printf("Aluno em recuperação, média: %.2f\n", media);
    } else if(media >= 5.0){
        printf("O aluno foi aprovado com média: %.2f\n", media);
    
    }
    
    return 0;
}

//fflush(stdin) Limpa o buffer do teclado
//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

//if(num1 % 2 == 0) verificar se é par ou impar

//logaritmo = log(num);
//printf("O logaritmo do número %d é: %d\n", num, logaritmo);
    
