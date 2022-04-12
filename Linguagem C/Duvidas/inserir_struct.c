#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "trabalho_lp1";
unsigned int port = 3306; //ou 3132 para postgres
void trim_both(char *, char *);


int main(){
	
	MYSQL conexao;
    int res;
    char query[200];
    
    //struct de dados dos alunos
    struct cadastro {
        char nome[40];
        int idade[5];
        int status[1];
    };
    char temp[40];
    //declarando variável e declarando ela como tipo struct cadastro
    struct cadastro aluno;
    
    printf("\n---------------Cadastro de aluno---------------\n\n\n");
    printf("Nome do aluno.........:");
    fgets(aluno.nome, 40, stdin);
    
    printf("Idade do aluno.........:");
    scanf("%d", &aluno.idade);
    
    printf("Status do aluno.........:");
    scanf("%d", &aluno.status);
    
    trim_both(aluno.nome, temp);
     
     //conexao com o banco
    mysql_init(&conexao);
    if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
    {
        printf("conectado com sucesso!\n");
        
        //inserir os registros no banco de dados
       sprintf(query,"INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('%s', '%d', '%d');", temp, aluno.idade, aluno.status);

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
	//printf("\n---------------Lendo os dados da struct---------------\n\n\n");
	//printf("Nome.........: %s", aluno.nome);
	//printf("Idade.........: %s \n", aluno.idade);
	//printf("Status.........: %s \n", aluno.status);  
    
    return 0;	
}

    // trim spaces from left
void trim_both(char *title_p, char *title_tp) {
    int flag = 0;

    // from left
    while(*title_p) {
        if(!isspace((unsigned char) *title_p) && flag == 0) {
            *title_tp++ = *title_p;
            flag = 1;
        }
        title_p++;
        if(flag == 1) {
            *title_tp++ = *title_p;
        }
    }

    // from right
    while(1) {
        title_tp--;
        if(!isspace((unsigned char) *title_tp) && flag == 0) {
            break;
        }
        flag = 0;
        *title_tp = '\0';
    }
}
    
    
