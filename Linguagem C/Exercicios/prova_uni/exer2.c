#include <stdio.h>
#include <stdlib.h>

 
 int main(){
     
     int opcao;
     float numA, numB, numC, area;
            
     
     printf("----Selecione a operação----\n\n");
     printf("1) Área do triangulo\n");
     printf("2) Área do trapézio\n");
     printf("3) Área do circulo\n\n");
     printf("Digite a opção: ");
     scanf("%d",&opcao);
     
     switch(opcao){
        case 1:
            
            printf("\n--Área do triângulo--\n");
            printf("Digite o valor da base do triangulo: ");
            scanf("%f", &numA);
            printf("Digite o valor da altura do triangulo: ");
            scanf("%f", &numB);
            
            area = numA * (numB/2);
            printf("\nA área do tringulo é de: %.2f (cm/m)\n", area);
            break;
        case 2:
            
            printf("\n--Área do trapézio--\n");
            printf("Digite o valor da base maior: ");
            scanf("%f", &numA);
            printf("Digite o valor da base menor: ");
            scanf("%f", &numB);
            printf("Digite o valor da altura: ");
            scanf("%f", &numC);
            
            area = ((numA + numB)/2) * numC;
            printf("\nA área do tringulo é de: %.2f (cm/m)\n", area);
            break;
        case 3:
            
            printf("\n--Área do círculo--\n");
            printf("Digite o valor do raio: ");
            scanf("%f", &numA);
            
            area = 3.14 * (numA*numA);
            printf("\nA área do tringulo é de: %.2f (cm/m)\n", area);
            break;
        default:
            printf("\nErro, Opção selecionada inválida\n");            
     }
     
     return 0;
 }
 
