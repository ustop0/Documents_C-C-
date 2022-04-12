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
    int res;
    char query[200];
    
    //struct de dados dos alunos
    struct cadastro {
        char nome[40];
        char idade[5];
        char status[1];
    };
    
    //declarando variável e declarando ela como tipo struct cadastro
    struct cadastro aluno;
    
    printf("\n---------------Cadastro de aluno---------------\n\n\n");
    printf("Nome do aluno.........:");
    fgets(aluno.nome, 40, stdin);
    
    printf("Idade do aluno.........:");
    fgets(aluno.idade, 5, stdin);
    
    printf("Status do aluno.........:");
    fgets(aluno.status, 1, stdin);
    
    
     //conexao com o banco
    mysql_init(&conexao);
    if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
    {
        printf("conectado com sucesso!\n");
        
        //inserir os registros no banco de dados
       sprintf(query,"INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('%s', '%s', '%s');", aluno.nome, aluno.idade, aluno.status);

       res = mysql_query(&conexao,query);
       
       //Informa os registros inseridos ou se houve erro na inserção
       if (!res) printf("Registros inseridos %ldd\n", mysql_affected_rows(&conexao));
       else printf("Erro na inserção %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
        
        mysql_close(&conexao);
    }
    else
    {
        printf("Falha de conexao\n");
        printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
    }
    
     
		
       
	//mostra os dados inseridos na tela  
	printf("\n---------------Lendo os dados da struct---------------\n\n\n");
	printf("Nome.........: %s", aluno.nome);
	printf("Idade.........: %s \n", aluno.idade);
	printf("Status.........: %s \n", aluno.status);  
    
    return 0;	
}


