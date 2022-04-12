#include<stdio.h>
#include<stdlib.h>


int main(){

    float area, base, altura;
    
    
    printf("--Área do triangulo--\n");
    printf("digite o valor da base: ");
    scanf("%f", &base);
    printf("digite o valor da altura: ");
    scanf("%f", &altura);
    
    area = (base*altura)/2;
     
    printf("\nA área do triangulo é: %.2f\n", area);
    
    return 0;
}


