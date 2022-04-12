#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h> //toupper e tolower

int main(){

    float altura = 0, resultado;
    int sexo;
   
    printf("---Praticando C---\n");
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\nDigite o seu sexo (m/f): ");
    scanf("%d", &sexo);
    
    switch(sexo){
        case 1:
            printf("\nVocê é homem");
            resultado = (72.7*altura) - 58;
            printf("\nO seu peso ideal é de: %.2f\n", resultado);
            break;
        case 2:
            printf("\nVocê é mulher");
            resultado = (62.1*altura) - 44.7;
            printf("\nO seu peso ideal é de: %.2f\n", resultado);
            break;
        default:
            printf("valor inválido");
    }
    
    /*if(sexo == 'm'){
        printf("\nVocê é homem");
        resultado1 = (72.7*altura) - 58;
        printf("\nO seu peso ideal é de: %.2f\n", resultado1);   
    } else if(sexo == 'f'){
        printf("\nVocê é mulher");
        resultado2 = (62.1*altura) - 44.7;
        printf("\nO seu peso ideal é de: %.2f\n", resultado2);
    }*/
   
     
    return 0;
}

//fflush(stdin) Limpa o buffer do teclado
//---porcentagem---
//resultado = (numero/100)*valordaporcentagem;

//if(num1 % 2 == 0) verificar se é par ou impar
