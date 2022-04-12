//Treinando menus em C
#include<stdio.h>
#include<stdlib.h>


int main(){
    
    int numero;
    
    //dados da pessoa
    char nome[40];
    char cpf[12];
    char cep[5];
    char email[40];
    int telefone;
    
    printf("---------Menu do sistema---------\n\n");
    printf("1-Cadastrar pessoa\n");
    printf("2-Consultar cadastro\n");
    
    printf("\nDigite uma  das opções: ");
    scanf("%d", &numero);
    
    
    
    switch(numero){
        case 1:
            system("clear");
        
            printf("\nDigite o seu nome: ");
            scanf("%s", nome);
            printf("\nInforme o seu cpf: ");
            scanf("%s", cpf);
            printf("\nInforme o seu cep: ");
            scanf("%s", cep);
            printf("\nInforme o seu email: ");
            scanf("%s", email);
            printf("\nInforme o seu telefone: ");
            scanf("%d", &telefone);
            
            system("clear");
            printf("\nCadastro efetuado com sucesso!\n");
            break;
         
        case 2:
            system("clear");
            printf("\n\nDigite o nome da pessoa");
            printf("\nTabelas de registro dos clientes\n");
            break;
        
        default:
           printf("Opção inválida!\n");  
            
    }
    
    
    return 0;
}
