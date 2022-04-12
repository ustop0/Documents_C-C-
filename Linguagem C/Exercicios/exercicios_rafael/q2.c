#include<stdio.h>
#include<stdlib.h>


float converteTemp(float x){
    float res = (x - 32.0)*(5.0/9.0);
    return res;
}

int main(){

    float temp, resultado;
    
    printf("--Conversor de temperatura--\n");
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &temp);
    
    resultado =  converteTemp(temp);
     
    printf("A temperatura em graus Célcius é %.2f\n", resultado);
    
    return 0;
}


