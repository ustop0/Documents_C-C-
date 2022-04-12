#include<stdio.h>
#include<stdlib.h>


int main(){

    int numero, quadrado;
    
    
    printf("--Calculando o quadrado de um numero--\n");
    printf("Digite o numero: ");
    scanf("%d", &numero);
    
    quadrado = (numero*numero);
    
    printf("\nO quadrado do numero %d é: %d\n", numero, quadrado);
    
    return 0;
}


