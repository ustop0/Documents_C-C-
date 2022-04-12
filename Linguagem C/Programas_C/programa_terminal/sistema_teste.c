#include<stdio.h> //biblioteca para ler valores (input) e exibir valores (output)
#include<stdlib.h> //biblioteca para alocar memória
#include<string.h>
					
#define MAX 100

struct Pessoa{
    char* nome;
    int idade;
    char telefone[17];
    char* endereco;
    char* cidade;
    char estado[2];
}pessoa[MAX];

void exibirMenu(){
    printf("\n\tSelecione umas das opções a seguir:\n");
    printf("\t01 - Inserir paciente\n"
           "\t02 - Listar pacientes\n"
           "\t03 - Marcar consulta\n"
           "\t04 - Pesquisar consultas\n"
           "\t05 - Alterar paciente\n"
           "\t06 - Sair\n\n");
}

char* alocarMemoria(int tamanho){
    char* info = NULL;
    info = (char*) malloc(sizeof(tamanho) * sizeof(char));

    if(info == NULL){
        printf("ERRO: impossível alocar a quantidade de memória requisitada!");
        exit(1);
    }
    return info;
}

void cadastrarPaciente(int registro){
    char dados[MAX];
    printf("\n\t\tNome: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].nome = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].nome, dados);

    printf("\t\tIdade: ");
    scanf("%d", &pessoa[registro].idade);
    setbuf(stdin, NULL);

    printf("\t\tTelefone: ");
    scanf("%[^\n]s", pessoa[registro].telefone);
    setbuf(stdin, NULL);

    printf("\t\tEndereço: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].endereco = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].endereco, dados);

    printf("\t\tCidade: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    pessoa[registro].cidade = alocarMemoria(strlen(dados));
    strcpy(pessoa[registro].cidade, dados);

    printf("\t\tEstado: ");
    scanf("%[^\n]s", pessoa[registro].estado);
    setbuf(stdin, NULL);
}

void listarPacientes(int qtdePacientes){
    int i;
    int contagem = 1;
    for(i = 0; i < qtdePacientes; i++){
        printf("\n\tContato nº: %d\n", contagem++);
        printf("\tNome: %s\n", pessoa[i].nome);
        printf("\tIdade: %d\n", pessoa[i].idade);
        printf("\tTelefone: %s\n", pessoa[i].telefone);
        printf("\tEndereço: %s\n", pessoa[i].endereco);
        printf("\tCidade: %s-%s\n", pessoa[i].cidade, pessoa[i].estado);
    }
    printf("\n\n");
}

void exibirPaciente(int indice){
    printf("\n\tNome: %s\n", pessoa[indice].nome);
    printf("\tIdade: %d\n", pessoa[indice].idade);
    printf("\tTelefone: %s\n", pessoa[indice].telefone);
    printf("\tEndereço: %s\n", pessoa[indice].endereco);
    printf("\tCidade: %s-%s\n\n", pessoa[indice].cidade, pessoa[indice].estado);
}

int pesquisarConsultas(int qtdeConsultas, char* nomeBuscado){
    int i;

    for(i = 0; i < qtdeConsultas; i++){
        if(strcmp(nomeBuscado, pessoa[i].nome) == 0)
            return i;
    }
    return -1;
}

void atualizarPaciente(int indice){
    char* nome;
    int idade;
    char fone[16];
    char* endereco;
    char* cidade;
    char uf[2];

    char dados[MAX];
    printf("\n\t\tNome: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    nome = alocarMemoria(strlen(dados));
    strcpy(nome, dados);

    printf("\t\tIdade: ");
    scanf("%d", &idade);
    setbuf(stdin, NULL);

    printf("\t\tTelefone: ");
    scanf("%[^\n]s", fone);
    setbuf(stdin, NULL);

    printf("\t\tEndereço: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    endereco = alocarMemoria(strlen(dados));
    strcpy(endereco, dados);

    printf("\t\tCidade: ");
    scanf("%[^\n]s", dados);
    setbuf(stdin, NULL);
    //Alocação e cópia de dados
    cidade = alocarMemoria(strlen(dados));
    strcpy(cidade, dados);

    printf("\t\tEstado: ");
    scanf("%[^\n]s", uf);
    setbuf(stdin, NULL);

    pessoa[indice].nome = nome;
    pessoa[indice].idade = idade;
    strcpy(pessoa[indice].telefone, fone);
    pessoa[indice].endereco = endereco;
    pessoa[indice].cidade = cidade;
    strcpy(pessoa[indice].estado, uf);
}

int leitor(){
    int opcao;

    printf("\n\tOpção escolhida: ");
    scanf("%d", &opcao);
    setbuf(stdin, NULL);

    return opcao;
}

int main(){
    char nome[MAX];
    int numeroRegistro = 0;
    int opcaoEscolhida;
    int indice;

    do{
        exibirMenu();
        opcaoEscolhida = leitor();

        switch(opcaoEscolhida){
            case 1:
                cadastrarPaciente(numeroRegistro++);
                break;
            case 2:
                listarPacientes(numeroRegistro);
                break;
            case 3:
                printf("\n\tNome: ");
                scanf("%[^\n]s", nome);
                indice = pesquisarConsultas(numeroRegistro, nome);

                if(indice >= 0 && indice <= 5)
                    exibirPaciente(indice);
                else
                    printf("\n\tPaciente não cadastrado!");
                break;
            case 4:
                printf("\n\tPaciente número [1 - 99]: ");
                scanf("%d", &indice);
                indice -= 1;
                if(indice >= 0 && indice <= 5)
                    atualizarPaciente(indice);
                else
                    printf("\n\tContato inválido!");
                break;
            case 99:
                printf("\n\tSaindo...");
                break;
            default:
                printf("Opção inválida!");
                exibirMenu();
                opcaoEscolhida = leitor();
        }

    }while(opcaoEscolhida != 99);
}
