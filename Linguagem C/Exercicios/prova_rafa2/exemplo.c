#include<stdio.h>
#include<string.h>

int main (){
    
    int idade, pessoas = , primeiro, segundo, menor;
    float media = ;
    printf ("Digite a idade de uma pessoa: ");
    scanf  ("%d", &idade);
    
        
    while (idade!=){
        pessoas = pessoas + 1;
        media = idade + media;
        
        
        printf ("\nDigite a idade de uma pessoa: ");
        scanf  ("%d", &idade);
        
        
        if (primeiro>segundo){
            menor = segundo;
        }else if (segundo>primeiro){
            menor = primeiro;  
        }
        
    }
    
    media = media / pessoas;
    printf ("\nNumero de pessoas: %d\n", pessoas);
    printf ("\nMedia: %f\n", media);
    
    }

  return 0;
}
