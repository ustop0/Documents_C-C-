#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "programa_C";
unsigned int port = 3306; //ou 3132 para PostgreSQL

int main(){
	
	MYSQL conexao;
	int sql;
	mysql_init(&conexao);
	
	if(mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
	{
		printf("conectado com sucesso!\n");
		mysql_close(&conexao);
	}
		
	else
	{
		printf("falha na conexao!\n");
		printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
	}
		
	  
    return 0;	
}


