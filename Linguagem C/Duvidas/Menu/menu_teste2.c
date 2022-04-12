//Treinando menus em C
#include<stdio.h>
#include<stdlib.h>


int menu(){
    printf("---------Menu do sistema---------\n\n");
    printf("1-Cadastrar pessoa\n");
    printf("2-Consultar cadastro\n");
    
    printf("\nDigite uma  das opções: ");
}

int main(){
    
    int numero;
    
    //dados da pessoa
    char nome[40];
    char cpf[12];
    char cep[5];
    char email[40];
    int telefone;
    
    menu();
    scanf("%d", &numero);
    
    
    //Leva o usuário para a opção selecionada no menu, testa se a opção é válida também
    int valido = 0;
    
    while(valido == 0){
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
                system("clear");
                printf("Opção inválida!\n");
                menu();     
        }
    }
      
    return 0;
}
