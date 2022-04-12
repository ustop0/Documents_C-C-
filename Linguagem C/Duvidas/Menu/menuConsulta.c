//Cadastro com menu em teste!
#include<stdio.h>
#include<stdlib.h>
#include <mysql/mysql.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "trabalho_lp1";
unsigned int port = 3306; //ou 3132 para postgres


//função do menu principal(teste)
int menu_principal(){
    printf("---------Menu do sistema---------\n\n");
    printf("1-Cadastrar pessoa\n");
    printf("2-Consultar cadastro\n");
    
    printf("\nDigite uma  das opções: ");
}


int main(void){
    
    MYSQL conexao;
    int res;
    
    int numero;
    char nome[50];
    int idade;
    int status;
    char query[200];
    
    menu_principal();
    scanf("%d", &numero);
    
    //Leva o usuário para a opção selecionada no menu, testa se a opção é válida também
    switch(numero){
        case 1:
            system("clear");
            
            printf("\n---------Insira os dados solicitados---------\n");
            printf("\nDigite o seu nome: ");
            scanf("%s", nome);
            printf("\nInforme a sua idade: ");
            scanf("%d", &idade);
            printf("\nInforme o seu status: ");
            scanf("%d", &status);
            
            system("clear");
            
            //Cadastra os dados fornecidos pelo usuário no banco
            mysql_init(&conexao);
            if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
            {
                
                //inserir os registros no banco de dados
                sprintf(query,"INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('%s', '%d', '%d');", nome, idade, status);
        
                res = mysql_query(&conexao,query);
                //Informa os registros inseridos ou se houve erro na inserção
                if (!res) printf("Cadastro efetuado com sucesso! %ld\n", mysql_affected_rows(&conexao));
                else printf("Erro no cadastro! %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));


                mysql_close(&conexao);
            }
            else
            {
                printf("Falha de conexao\n");
                printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
            }
            
            break;
         
        case 2:
            system("clear");
            
            printf("\n-------Tabelas de registro dos clientes-------\n\n\n");
            //inicio-teste consulta
            MYSQL conexao;
            MYSQL_RES *resp;
            MYSQL_ROW linhas;
            MYSQL_FIELD *campos;
            char query[]="SELECT nome_aluno, idade_aluno, status_aluno FROM trab_aluno;";
            int conta; //Contador comum

            mysql_init(&conexao);
            if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
            {
               
            if (mysql_query(&conexao,query))
                printf("Erro: %s\n", mysql_error(&conexao));
            else
            {
                resp = mysql_store_result(&conexao);//recebe a consulta
            if (resp) //se houver consulta
            {
                //passa os dados dos campos para a variável campos
                //escreve na tela os nomes dos campos dando
                //um tab somente
                campos = mysql_fetch_fields(resp);
                for (conta=0;conta<mysql_num_fields(resp);conta++){
                    printf("%s",(campos[conta]).name);
                    if (mysql_num_fields(resp)>1)
                    printf("\t|");
                }
        
              printf("\n\n");  

              //enquanto retornar registros, conta até o
              //número de colunas que a tabela tem e escreve na
              //tela com um tab, depois pula a linha e tenta
              //pegar outro registro
              while ((linhas=mysql_fetch_row(resp)) != NULL)
              {
                for (conta=0;conta<mysql_num_fields(resp);conta++)
                printf("%s\t\t|",linhas[conta]);
                printf("\n");
              }
              }
                mysql_free_result(resp);//limpa a variável do resultado: resp
              }
                mysql_close(&conexao);
                }
              else
              {
                printf("Conexao Falhou\n");
                if (mysql_errno(&conexao))
                printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
              }
            //fim-teste consulta
            break;
       
        default:
            system("clear");
            
            printf("Opção inválida!\n");
          
    }
    
    return 0;
}
