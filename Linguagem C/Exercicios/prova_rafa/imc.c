#include<stdio.h>
#include<math.h> 

int main(){

    float IMC,peso,altura;
    int opcao;
  
    printf("\nEscolha o método de cálculo Quételet(1) ou Trefethen(2): ");                 
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1:
  
    printf("informe o seu peso: ");                               
    scanf("%f", &peso);                 
    printf("informe a sua altura: ");                 
    scanf("%f", &altura);                
    IMC = peso/(altura*altura); 

    if (IMC < 18.5){
        printf("IMC: %f --> Abaixo do peso\n", IMC);
      }
      else{
        if (IMC <= 25){
          printf("IMC: %f --> Peso normal\n", IMC);
        }
        else{
          if (IMC <= 30){
            printf("IMC: %f --> Acima do peso\n", IMC);
          }
          else{
            printf("IMC: %f --> Obeso\n", IMC);
          }
        }  
      }
      break; 
    case 2:
      printf("informe o seu peso: ");                               
      scanf("%f", &peso);                 
      printf("informe a sua altura: ");                 
      scanf("%f", &altura);  
      IMC = 1.3*peso /pow(altura,2.5); 

    if (IMC < 18.5){
        printf("IMC: %f --> Abaixo do peso\n", IMC);
      }
      else{
        if (IMC <= 25){
          printf("IMC: %f --> Peso normal\n", IMC);
        }
        else{
          if (IMC <= 30){
            printf("IMC: %f --> Acima do peso\n", IMC);
          }
          else{
            printf("IMC: %f --> Obeso\n", IMC);
          }
        }  
      }
      break;
    default:
      printf("Opção inválida!\n");
  }

  return 0;
}
