#include<stdio.h>
#include<stdlib.h>


float volumeCal(float x, float y){
    float res = 3.14*(y*y)*x;
    return res;
}

int main(){

    float altura, raio, volume;
    
    printf("--Calculando o volume do cilindro--\n");
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o raio: ");
    scanf("%f", &raio);
     
    volume =  volumeCal(altura, raio);
     
    printf("o volume do cilindro é %.2f\n", volume);
    
    return 0;
}


