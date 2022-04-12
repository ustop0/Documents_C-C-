//Treinando menus em C
#include<stdio.h>
#include<stdlib.h>


//funções do menu do programa
void menu(){
    
    printf("---------Menu do sistema---------\n\n");
    printf("1-Cadastrar pessoa\n");
    printf("2-Consultar cadastro\n");
    printf("3-Sair\n");
    printf("\nDigite uma  das opções: ");
}

//Lê e testa as opções selecionadas e volta para o menu caso seja inválido
char ler_opcao(){
    char op;
    int valido = 0;
    
    
    while(valido == 0){
        scanf("%c", &op);
        switch(op){
            case '1':
            case '2':
            case '3':
                return op;
            default:
                system("clear");
                printf("\n\nOpção inválida\n\n");
                menu();
        }
    }
}

//função principal do programa
int main(){
    char escolha_op;
    
    menu();
    escolha_op = ler_opcao();
    
    return 0;
}
