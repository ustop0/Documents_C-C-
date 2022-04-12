/*livrarias necessárias */
#include <mysql/mysql.h> /* livraria necessário para conectar ao MySQL */
#include <stdio.h> /* Para poder usar comandos de entrada e saida printf, etc. */
// by Edson Pessotti
int main()
{
    MYSQL *conn; /* variavel de conexão para MySQL */
    MYSQL_RES *res; /* variavel que armazena p resultado da consuta */
    MYSQL_ROW row; /* variavel que guarda os campos de cada registro consultado */
    char *server = "localhost"; /*servidor 127.0.0.1*/
    char *user = "root"; /*usuario para consultar a base de dados */
    char *password = "12meurex"; /* senha para do referido usuario */
    char *database = "trabalho_lp1"; /*nome do banco de dados a consultar */
    conn = mysql_init(NULL); /*inicia conexão nula */

    /* conectar ao banco */
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0))
    { /* definir parametros antes establecidos */
        fprintf(stderr, "%s\n", mysql_error(conn)); /* mostra o retorno de erro */
        return 1;
    }

    /* enviar consulta SQL */
    if (mysql_query(conn, "select * from trab_aluno"))
    {
        fprintf(stderr, "%s\n", mysql_error(conn));
        return 1;
    }

    res = mysql_use_result(conn);
    printf("ID\tNome do Usuario\tEmail\n");
    while ((row = mysql_fetch_row(res)) != NULL)
    printf("%s\t%s\t%s \n", row[0],row[1],row[2]);
    mysql_free_result(res);
    mysql_close(conn);

    return 0;
}
