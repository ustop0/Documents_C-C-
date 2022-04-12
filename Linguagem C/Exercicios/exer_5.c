#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

    float atualPeso, querEmagrecer, novoPeso;
    
    
    printf("--Cálculo de perda de peso por %%--\n");
    printf("Informe o seu peso: ");
    scanf("%f", &atualPeso);
    printf("Quanto %% quer emagrecer? ");
    scanf("%f", &querEmagrecer);
    
    novoPeso = atualPeso - (atualPeso/100)*querEmagrecer;
          
    printf("\nO seu novo peso é: %.2f kg\n", novoPeso);
    
    return 0;
}


