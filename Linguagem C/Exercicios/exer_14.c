#include<stdio.h>
#include<stdlib.h>


int main(){

    float custo, precoConvite;
    int numConvites;
    
    
    printf("--Convites a serem vendidos--\n");
    printf("Insira o custo do espetaculo: ");
    scanf("%f", &custo);
    printf("Insire o preço dos convites: ");
    scanf("%f", &precoConvite);
    
    numConvites = custo/precoConvite;
    
     
    printf("\nDevem ser vendidos %d convites para cobrir o custo\n", numConvites);
    
    return 0;
}


