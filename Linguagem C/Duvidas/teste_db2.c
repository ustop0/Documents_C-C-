#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "trabalho_lp1";
unsigned int port = 3306; //ou 3132 para postgres

int main(void)
{
    MYSQL conexao;
    int res;
    char nome[50];
    int idade;
    int status;
    char query[200];
    
    //não é preciso colocar o & nas variáveis de strings no scanf
    printf("\nInsira o seu nome:");
    scanf("%s", nome);
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Digite o seu status:");
    scanf("%d", &status);
 
    mysql_init(&conexao);
    if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
    {
        printf("conectado com sucesso!\n");
        
        //inserir os registros no banco de dados
        sprintf(query,"INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('%s', '%d', '%d');", nome, idade, status);
        
        res = mysql_query(&conexao,query);
        //Informa os registros inseridos ou se houve erro na inserção
        if (!res) printf("Registros inseridos %ld\n", mysql_affected_rows(&conexao));
        else printf("Erro na inserção %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));


        mysql_close(&conexao);
    }
    else
    {
        printf("Falha de conexao\n");
        printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
    }
		
    //Imprime os valores armazenados nas variaveis
    printf("\n\nO seu nome é: %s\n", nome);
    printf("\nSua idade é: %d\n", idade);
    printf("Seu status é: %d\n", status);
    
    
    return 0;	
}


