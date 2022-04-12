#include<stdio.h>
#include<stdlib.h>


int main(){

    float cubo, numero;
    
    
    printf("--Cubo de um numero--\n");
    printf("digite um numero: ");
    scanf("%f", &numero);
    
    cubo = (numero*numero*numero);
     
    printf("\nO cubo do numero %.2f é: %.2f\n", numero, cubo);
    
    return 0;
}


