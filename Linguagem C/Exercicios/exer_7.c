#include<stdio.h>
#include<stdlib.h>


int main(){

    float raio, area, perimetro;
    
    
    printf("--Área e perímetro do círculo--\n");
    printf("Digite um valor para o raio do círculo: ");
    scanf("%f", &raio);
    
    area = 3.14*(raio*raio);
    perimetro = 2*3.14*raio;
     
    printf("\nA área do círculo é de: %.2f (m/cm)", area);
    printf("\nO perímetro do círculo é de: %.2f (m/cm)\n", perimetro);
    
    return 0;
}


