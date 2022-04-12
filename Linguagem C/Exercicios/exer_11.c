#include<stdio.h>
#include<stdlib.h>


int main(){

    float nota1, peso1, nota2, peso2, nota3, peso3, mp;
    
    
    printf("--Cálculo de media ponderada (com 3 notas)--\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);
    
    mp = (peso1*nota1 + peso2*nota2 + peso3*nota3)/(peso1 + peso2 + peso3);
     
    printf("\nA média ponderada foi de %.2f \n", mp);
    
    return 0;
}


