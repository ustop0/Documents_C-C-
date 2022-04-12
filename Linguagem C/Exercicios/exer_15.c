#include<stdio.h>
#include<stdlib.h>


int main(){

    float comprimento, largura, area, iluminacao;
    
    
    printf("--Iluminar comodos da casa--\n");
    printf("Insira o comprimento do comodo em metros: ");
    scanf("%f", &comprimento);
    printf("Insire a largura do comodo em metros: ");
    scanf("%f", &largura);
    
    area = comprimento*largura;
    iluminacao = area*18;
     
    printf("\nO comodo possui %.2f m² de área\n", area);
    printf("\nDeve ser utilizado %.2f W de potência na iluminação do comodo \n", iluminacao);
    
    return 0;
}


