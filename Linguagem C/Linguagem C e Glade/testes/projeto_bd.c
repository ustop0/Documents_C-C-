#include<stdio.h>
#include<stdlib.h>
#include<mysql/mysql.h>
#include<gtk/gtk.h>

static char *host = "localhost";
static char *user = "root";
static char *pass = "12meurex";
static char *db_name = "trabalho_lp1";
unsigned int port = 3306; //ou 3132 para postgres

//objetos da interface declarados de acordo com o seu tipo
GtkLabel *cadastro_status;  
GtkEntry *nome; 
GtkEntry *idade;
GtkEntry *status; 

//funções do programa (todas as funções vão receber um ponteiro para um widget e um gpointer data)
void on_botao_clicked(GtkWidget *widget, gpointer data){
    
    //variaveis do MYSQL
    MYSQL conexao;
    int res;
    
    char query[200];
    
    const gchar *nome_str = gtk_entry_get_text(nome);
    const gchar *idade_int = gtk_entry_get_text(idade);
    const gchar *status_int = gtk_entry_get_text(status);
      
    
      //Cadastra os dados fornecidos pelo usuário no banco
            mysql_init(&conexao);
            if (mysql_real_connect(&conexao, host, user, pass, db_name, port, NULL, 0))
            {
                
                //inserir os registros no banco de dados //trocar %c devolta por %s
                sprintf(query,"INSERT INTO trab_aluno(nome_aluno, idade_aluno, status_aluno) VALUES ('%s', '%s', '%s');", nome_str, idade_int, status_int);
        
                res = mysql_query(&conexao,query);
                //Informa os registros inseridos ou se houve erro na inserção
                if (!res) printf("Cadastro efetuado com sucesso! %ld\n", mysql_affected_rows(&conexao));
                else printf("Erro no cadastro! %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));


                mysql_close(&conexao);
            }
            else
            {
                printf("Falha de conexao\n");
                printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
            }
    
    
}

void main_window_destroy_cb(GtkWidget *widget, gpointer data){
    //encerra a aplicação
    gtk_main_quit();

}
//Fim-funções do programa


int main(int argc, char *argv[]) {
    
    //inicializa a biblioteca gtk
    gtk_init(&argc, &argv);
	
	//carrega a sua user interface
	GtkBuilder *builder = gtk_builder_new_from_file("projeto_bd.glade");
	
	//fazer ligação dos botões com as suas funções() em C
	gtk_builder_add_callback_symbols(builder, "bt_cadastrar_clicked_cb", G_CALLBACK(on_botao_clicked), "main_window_destroy_cb", G_CALLBACK(main_window_destroy_cb), NULL);


    //liga os sinais as funções
    gtk_builder_connect_signals(builder, NULL);

    //ponteiros para os objetos gtk, informe as IDs dos objetos definidos no XML gerado pelo Glade
    cadastro_status = GTK_LABEL(gtk_builder_get_object(builder, "cadastro_status_label"));
    nome = GTK_ENTRY(gtk_builder_get_object(builder, "nome_entry"));
    idade = GTK_ENTRY(gtk_builder_get_object(builder, "idade_entry"));
    status = GTK_ENTRY(gtk_builder_get_object(builder, "status_entry"));
    
    GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    
    
    //mostrar a janela do programa
    gtk_widget_show_all(window);
	gtk_main(); //função principal do GTK
	
	return 0;
}
