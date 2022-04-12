#include <stdio.h>
#include <mysql/mysql.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "trabalho_lp1";
unsigned int port = 3306; //ou 3132

int main(void)
{
    MYSQL conexao;
    int res;
    char nome[50];
    char query[200];
    
    //não é preciso colocar o & nas variáveis de strings no scanf
    printf("\nInsira o seu nome:");
    scanf("%s", nome);

    mysql_init(&conexao);
    if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
    {
        printf("conectado com sucesso!\n");
        
        //inserir os registros no banco de dados
        sprintf(query,"INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('%s', '42', '8');", nome);

        res = mysql_query(&conexao,query);
        if (!res) printf("Registros inseridos %ld\n", mysql_affected_rows(&conexao));
        else printf("Erro na inserção %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));


        mysql_close(&conexao);
    }
    else
    {
    printf("Falha de conexao\n");
    printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
    }
    
    return 0;
}
