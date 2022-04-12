#include<stdio.h>
#include<stdlib.h>


int main(){

    float numero, sucessor, antecessor;
    
    
    printf("--Números adjacentes--\n");
    printf("Insira o numero: ");
    scanf("%f", &numero);
    
    sucessor = numero + 1;
    antecessor = numero -1;
     
    printf("\nO número digitado foi: %.2f\n", numero); 
    printf("\nO seu sucessor é: %.2f\n", sucessor);
    printf("\nO seu antecessor é: %.2f\n", antecessor);
    
    return 0;
}


