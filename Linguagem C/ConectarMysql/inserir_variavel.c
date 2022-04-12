#include <stdio.h>
#include <mysql/mysql.h>

//static indica que a variável é permanente
static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "trabalho_lp1";
unsigned int port = 3306; //ou 3132 para PostgreSQL

int main(void)
{
    MYSQL conexao; //variável de conexao do mysql
    int res; //variável que armazena o resultado da consulta
    char nome[50]="Caique da Silva";
    char query[200];

    mysql_init(&conexao); //inicia a conexao com o banco MySQL
    if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
    {
        printf("conectado com sucesso!\n");
        
        //inserir os registros na tabela
        sprintf(query,"INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('%s', '22', '1');", nome);
        
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
    
    return 0;
}
