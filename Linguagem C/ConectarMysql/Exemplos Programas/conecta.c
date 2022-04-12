#include "conecta.h"

void ftaSQL( char nome[50], char *sql[1000] )
{
    MYSQL conexao; //variável de conexao do mysql
    int res; //variável que armazena o resultado da consulta
    char query[1000];

    mysql_init(&conexao); //inicia a conexao com o banco MySQL
    if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
    {
        printf("conectado com sucesso!\n");
        
        //inserir os registros na tabela
        sprintf(query, *sql, *nome);
        
        res = mysql_query(&conexao, query);
        
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
}
