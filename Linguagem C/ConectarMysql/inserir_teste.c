#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "trabalho_lp1";
unsigned int port = 3306; //ou 3132 para postgres

int main(){
	
	MYSQL conexao;
	int sql;
	mysql_init(&conexao);
	
	if(mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
	{
	    //inserir valores na tabela
		mysql_query(&conexao, "INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('thiago', '22', '1');"); 
		//indica o numero de registros inseridos na tabela
		printf("\n\tRegistros inseridos: %ld\n\n", (long) mysql_affected_rows(&conexao));
		//printf("conectado com sucesso!\n");
		mysql_close(&conexao);
	}
		
	else
	{
		printf("falha na conexao!\n");
		printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
	}
		
	  
    return 0;	
}


