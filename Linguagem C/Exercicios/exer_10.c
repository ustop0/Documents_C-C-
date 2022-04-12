#include<stdio.h>
#include<stdlib.h>


int main(){

    int tempCel, tempFah;
    
    
    printf("--Convertendo graus Celcius para Fahrenheit--\n");
    printf("Digite a temperatura em graus Celcius: ");
    scanf("%d", &tempCel);
    
    tempFah = tempCel*1.8 + 32;
     
    printf("\nA temperatura ficou: %d F\n", tempFah);
    
    return 0;
}


