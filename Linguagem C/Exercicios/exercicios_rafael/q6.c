#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    
    int troca(int a, int b);

    int x = 5; 
    int y = 10;
    int resultado;
    
    printf("--Troca de variáveis--\n");
    printf("\nO valor de X é: %d", x);
    printf("\nO valor de y é: %d", y);
   
    resultado =  troca(x, y);
    
    printf("\nO valor da troca ficou %d \n", resultado);
    
    return 0;
}

int troca(int* a, int* b){
    a = b;
    b = a;
    return a;
    return b;
}


