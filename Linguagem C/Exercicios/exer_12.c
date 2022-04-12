#include<stdio.h>
#include<stdlib.h>


int main(){

    float salario, percentual, valorAumento, salarioNovo;
    
    
    printf("--Valor do novo salário do funcionário pelo %% de aumento--\n");
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento do salário: ");
    scanf("%f", &percentual);
    
    valorAumento = (salario/100)*percentual;
    salarioNovo = salario + (salario/100)*percentual;
     
    printf("\nO valor do aumento do salário foi de: %.2f reais\n", valorAumento);
    printf("\nO novo valor do salário ficou %.2f reais\n", salarioNovo);
    
    return 0;
}


