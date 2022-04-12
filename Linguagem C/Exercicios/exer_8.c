#include<stdio.h>
#include<stdlib.h>


int main(){

    float raio, circ, area, volume;
    
    
    printf("--Circunferência, área da superficie e volume de uma esfera--\n");
    printf("Digite um valor para o raio da esfera: ");
    scanf("%f", &raio);
    
    circ = 2*3.14*raio;
    area = 4*3.14*(raio*raio);
    volume = 4*3.14*(raio*raio*raio)/3;
     
    printf("\nA circunferência da esfera é de: %.2f cm", circ);
    printf("\nA área da esfera é de: %.2f cm", area);
    printf("\nO volume da esfera é de: %.2f cm\n", volume);
    
    return 0;
}


