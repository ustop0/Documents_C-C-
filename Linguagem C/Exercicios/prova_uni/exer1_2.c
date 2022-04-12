#include <stdio.h>
#include <stdlib.h>

 
 int main(){
     float saldo, saldoNovo, credito;
     printf("Digite o saldo: ");
     scanf("%f",&saldo);
     
     if (saldo <= 1000){
        printf("\nSeu saldo médio foi de %.2f, nao recebe nenhum credito\n", saldo);
     }else if (saldo <= 2000){
        credito = saldo * 0.2;
        saldoNovo = saldo + credito;
        printf("\nSaldo: %.2f - Credito: %.2f\n", saldoNovo, credito);
     }else if (saldo <= 3500){
        credito = saldo * 0.3;
        saldoNovo = saldo + credito;
        printf("\nSaldo: %.2f - Credito: %.2f\n", saldoNovo, credito);
     }else{
        credito = saldo * 0.4;
        saldoNovo = saldo + credito;
        printf("\nSaldo: %.2f - Credito: %.2f\n", saldoNovo, credito);
     }
     
     return 0;
 }
 
