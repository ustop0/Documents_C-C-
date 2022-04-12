#include <stdio.h>
#include <mysql/mysql.h>
#include <string.h>

//static indica que a variável é permanente
static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "programa_C";
unsigned int port = 3306; //ou 3132 para PostgreSQL

void ftaSQL( char nome[50], char *sql[1000] );
