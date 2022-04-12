#include<stdio.h>
#include<stdlib.h>


int main(){
    
    int meses;
    float custoImp, custoMensal;
    
    
    printf("--Custo de transição para energia renovável compensado--\n");
    printf("Informe o custo da implementação: ");
    scanf("%f", &custoImp);
    printf("Informe o seu custo mensal da energia convencional: ");
    scanf("%f", &custoMensal);
    
    meses = custoImp/custoMensal;
    
         
    printf("\nO custo da transição será compensado em %d meses\n", meses);
    
    return 0;
}


