#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int bhaskara(float a, float b, float c);

    float a, b, c, resultado;
    
    printf("--Equação do segundo grau--\n");
    printf("\nDigite um valor para A: ");
    scanf("%f", &a);
    printf("\nDigite um valor para B: ");
    scanf("%f", &b);
    printf("\nDigite um valor para C: ");
    scanf("%f", &c);
    
    resultado =  bhaskara(a, b, c);
     
    printf("\n\bO resultado da bhaskara é: %.2f \n", resultado);
    
    return 0;
}

int bhaskara(float a, float b, float c){
    float delta, r_1, r_2;
    delta = (b*b) - 4*a*c;
    r_1 = (-b + sqrt(delta)) / (2*a);
    r_2 = (-b - sqrt(delta)) / (2*a);
    
    if(delta < 0){
        printf("\nNão existe raiz real!");
        //printf("\nO valor de x1: %.2f", r_1);
        //printf("\nO valor de x2: %.2f", r_2);       
    } else if(delta = 0){
        printf("\nExiste uma raiz igual!");
    } else if(delta > 0){
        printf("\nExistem duas raizes reais!");  
    }
    return r_1, r_2;
}
