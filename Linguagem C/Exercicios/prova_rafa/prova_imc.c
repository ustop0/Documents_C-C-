#include<stdio.h>
#include<math.h> //é uma biblioteca que fornece funções para operações matematicas

int main(){

    float IMC, peso, altura;
    int op;

    printf("-------CÁLCULO DO IMC-------");  
    printf("\ninforme o método de cáculo, digite Quételet(1) ou Trefethen(2): ");                 
    scanf("%d", &op);
    
    switch (op){
    case 1:
    
    printf("informe seu peso: ");                               
    scanf("%f", &peso);            //Aqui realizo a leitura e entrada de valores
    printf("informe sua altura: ");                 
    scanf("%f", &altura);
    IMC = peso/(altura*altura); //Aqui utilizo a formula do IMC

    if(IMC < 18.5){
        printf("IMC: %.2f --> Abaixo do peso\n", IMC);
    }else if(IMC <= 25){
        printf("IMC: %.2f --> Peso normal\n", IMC);
    }else if(IMC <= 30){
        printf("IMC: %.2f --> Acima do peso\n", IMC);
    }else{
        printf("IMC: %.2f --> Obeso\n", IMC);
    }
      break; 
    case 2:
    printf("informe o seu peso: ");                               
    scanf("%f", &peso);           //Aqui realizo a leitura e entrada de valores */
    printf("informe a sua altura: ");                 
    scanf("%f", &altura);  
    IMC = 1.3*peso /pow(altura,2.5); //Aqui utilizo a formula do IMC

    if(IMC < 18.5){
        printf("IMC: %.2f --> Abaixo do peso\n", IMC);
    }else if(IMC <= 25){
        printf("IMC: %.2f --> Peso normal\n", IMC);
    }else if(IMC <= 30){
        printf("IMC: %.2f --> Acima do peso\n", IMC);
    }else{
        printf("IMC: %.2f --> Obeso\n", IMC);
    }
      break;
    default:
      printf("Opção inválida!\n");
  }

  return 0;
}
