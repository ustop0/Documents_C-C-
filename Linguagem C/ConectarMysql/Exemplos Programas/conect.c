#include <stdio.h>
#include <mysql/mysql.h>
#include <string.h>
#include "conecta.h"


int main(void)
{
    char nome[50];

    printf("\nDigite o nome de usuário: ");
    scanf("%s", nome);

    char *sql[1000];
    strcpy( *sql, "INSERT INTO usuario(nome, senha) VALUES ('%s', '2256');" );

    ftaSQL(nome, *sql);

    return 0;
}
