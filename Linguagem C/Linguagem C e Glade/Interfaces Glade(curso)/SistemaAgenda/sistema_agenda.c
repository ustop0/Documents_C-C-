#include<gtk/gtk.h>
#include<stdlib.h>  //para poder converter uma string para um float
#include<stdbool.h>

//objetos da interface declarados de acordo com o seu tipo 
GtkBuilder *builder;
GtkWidget *window;
GtkStack *stack;

//interface login
GtkEntry *usuario;
GtkEntry *senha;
GtkWidget *mensagem_dialogo;
GtkDialog *mensagem_aviso;

//interface cadastro de pessoas
GtkEntry *nome_pessoa;
GtkEntry *idade_pessoa;
GtkEntry *status_pessoa;

//consultar pessoas cadastradas, list store(tree view)
GtkListStore *modelo_armazenamento;

//--ATENÇÂO-- struct para o cadastro de pessoas no sistema (talvez nao funcione com o BD)
typedef struct pessoas{
    int id;
    char nome[100];
    char idade[100];
    char status[5];
    struct pessoa *proximo;        //---CADASTRO DE PESSOAS---
} pessoa;

int id = 0;
pessoa *cabecalho_pessoa;
pessoa *proxima_pessoa;
//--FIM-- Cadastro de pessoas


//funções do programa (todas as funções vão receber um ponteiro para um widget e um gpointer data)
void main_window_destroy_cb(GtkWidget *widget, gpointer data){
    
    gtk_main_quit();

}

//função mensagem exibir mensagens de aviso no sistema
void mensagem(char text[100], char secondary_text[100], char icon_name[100]){
    
    mensagem_dialogo = GTK_WIDGET(gtk_builder_get_object(builder, "mensagem_aviso"));
    mensagem_aviso = GTK_DIALOG(gtk_builder_get_object(builder, "mensagem_aviso"));

    g_object_set(mensagem_dialogo, "text", text, NULL);
    g_object_set(mensagem_dialogo, "secondary_text", secondary_text, NULL);
    g_object_set(mensagem_dialogo, "icon_name", icon_name, NULL);   
    
    gtk_widget_show_all(mensagem_dialogo);
    gtk_dialog_run(mensagem_aviso); //verificar warning: do compilador
    gtk_widget_hide(mensagem_dialogo);
}

//função do login do sistema
void login(const gchar *usuario_str, const gchar *senha_str){
    
    //verifica se o login e a senha do usuário estão corretos
    if((strcmp(usuario_str, "amincar") == 0) && (strcmp(senha_str, "12meurex")== 0))
    {
        mensagem("Bem vindo!", "Usuário logado com sucesso!", "emblem-default");
        //permite mostrar um tela do sistema, o nome das telas é definido no empacotamento do glade
        gtk_stack_set_visible_child_name(stack, "menu_view");
    } 
    else
    {
        mensagem("Falha no login!", "Usuário ou Senha incorretos!", "dialog-error");
        //permite mostrar um tela do sistema, o nome das telas é definido no empacotamento do glade
        gtk_stack_set_visible_child_name(stack, "login_view");
    }
    
}

//função do botão da tela de login
void bt_logar_clicked_cb(GtkWidget *widget, gpointer data){
    
    //captura o que o usuário digitou no entry e converte para uma string normal
    usuario = GTK_ENTRY(gtk_builder_get_object(builder, "usuario_entry"));
    const gchar *usuario_str = gtk_entry_get_text(usuario);
    
    senha = GTK_ENTRY(gtk_builder_get_object(builder, "senha_entry"));
    const gchar *senha_str = gtk_entry_get_text(senha);
    
    //chama a função responsável pelo login do sistema
    login(usuario_str, senha_str);
}

void bt_cadastrar_pessoa_menu_clicked_cb(GtkWidget *widget, gpointer data){
    
    gtk_stack_set_visible_child_name(stack, "cadastro_usuario_view");

}

void bt_consultar_cadastro_menu_clicked_cb(GtkWidget *widget, gpointer data){
    
    gtk_stack_set_visible_child_name(stack, "consultar_cadastro_usuario_view");
    
}

void bt_sair_menu_clicked_cb(GtkWidget *widget, gpointer data){
    //esse comando permite alternar entre as telas do sistemas pelo click dos botões
    gtk_stack_set_visible_child_name(stack, "login_view");
    
}

void bt_cadastrar_voltar_clicked_cb(GtkWidget *widget, gpointer data){
    
    gtk_stack_set_visible_child_name(stack, "menu_view");
    
}

void bt_consultar_voltar_clicked_cb(GtkWidget *widget, gpointer data){
    
    gtk_stack_set_visible_child_name(stack, "menu_view");

}

//--CADASTRAR-- cadastro de pessoas (nome, idade, status)
void bt_cadastrar_pessoa_clicked_cb(GtkWidget *widget, gpointer data){
   
   //com banco de dados substituir alguns dados por int 
   nome_pessoa = GTK_ENTRY(gtk_builder_get_object(builder, "nome_entry"));
   const gchar *nome_str = gtk_entry_get_text(nome_pessoa);
   
   idade_pessoa = GTK_ENTRY(gtk_builder_get_object(builder, "idade_entry"));
   const gchar *idade_str = gtk_entry_get_text(idade_pessoa);

   status_pessoa = GTK_ENTRY(gtk_builder_get_object(builder, "status_entry"));
   const gchar *status_str = gtk_entry_get_text(status_pessoa); 

   //evita que o usuário deixe um campo de cadastro em branco
   if(strcmp(nome_str, "") == 0)
   {
       mensagem("Aviso", "Campo 'nome' obrigatório!", "dialog-error");
   }
   else
   {
       //A -> pega um membro da estrutura apontada
       id++;
       proxima_pessoa->id = id;
       strcpy(proxima_pessoa->nome, nome_str);
       strcpy(proxima_pessoa->idade, idade_str);
       strcpy(proxima_pessoa->status, status_str);

       //teste para ver se os dados estão sendo inseridos(terminal)
       g_print("id: %d | nome: %s | idade: %s | status: %s\n",
                proxima_pessoa->id,
                proxima_pessoa->nome,
                proxima_pessoa->idade,
                proxima_pessoa->status);
        
        char texto[100];
        g_snprintf(texto, 100, "%s%s%s", "Paciente ", proxima_pessoa->nome, " cadastrado!");
        mensagem("Aviso", texto, "dialog-emblem-default");

       proxima_pessoa->proximo = (pessoa *)malloc(sizeof(pessoa));
       proxima_pessoa = proxima_pessoa->proximo;
   }

}

//--CONSULTAR-- cadastro de pessoas (nome, idade, status)
void bt_consultar_pessoa_clicked_cb(GtkWidget *widget, gpointer data){
    
    proxima_pessoa->proximo = NULL;
    proxima_pessoa = cabecalho_pessoa;

    GtkTreeIter iter; //para trabalhar com list store
    gtk_list_store_clear(modelo_armazenamento); //limpa a list store


    //percorrer toda a lista encadeada(lista onde as pessoas estão cadastradas)
    while(proxima_pessoa->proximo != NULL)
    {
        //teste para ver se os dados são consultados(terminal)
        g_print("id: %d | nome: %s | idade: %s | status: %s\n",
                proxima_pessoa->id,
                proxima_pessoa->nome,
                proxima_pessoa->idade,
                proxima_pessoa->status);
        
        gtk_list_store_append(modelo_armazenamento, &iter); //adiciona nova linha para visualização
        gtk_list_store_set(modelo_armazenamento, &iter,
                            0, proxima_pessoa->id,
                            1, proxima_pessoa->nome,
                            2, proxima_pessoa->idade,
                            3, proxima_pessoa->status,
                            -1);

        proxima_pessoa = proxima_pessoa->proximo;        
    }

}
//Fim-funções do programa

int main(int argc, char *argv[]) {
    
    //--ATENÇÂO-- alocação de memória para a struct de cadastro de pessoas
        cabecalho_pessoa = (pessoa *)malloc(sizeof(pessoa));
        proxima_pessoa = cabecalho_pessoa;
    //--FIM-- alocação de memória

    //inicializa a biblioteca gtk
    gtk_init(&argc, &argv);
	
	//carrega a sua user interface
	builder = gtk_builder_new_from_file("sistema_agenda.glade");
	
	
	//Chamadas de sinais dos botoes
	gtk_builder_add_callback_symbols(
	builder,  
	"main_window_destroy_cb", G_CALLBACK(main_window_destroy_cb), 
	"bt_logar_clicked_cb", G_CALLBACK(bt_logar_clicked_cb),
	"bt_cadastrar_pessoa_menu_clicked_cb", G_CALLBACK(bt_cadastrar_pessoa_menu_clicked_cb),
	"bt_consultar_cadastro_menu_clicked_cb", G_CALLBACK(bt_consultar_cadastro_menu_clicked_cb),
	"bt_sair_menu_clicked_cb", G_CALLBACK(bt_sair_menu_clicked_cb),
	"bt_cadastrar_voltar_clicked_cb", G_CALLBACK(bt_cadastrar_voltar_clicked_cb),
	"bt_cadastrar_pessoa_clicked_cb", G_CALLBACK(bt_cadastrar_pessoa_clicked_cb),
	"bt_consultar_voltar_clicked_cb", G_CALLBACK(bt_consultar_voltar_clicked_cb),
	"bt_consultar_pessoa_clicked_cb", G_CALLBACK(bt_consultar_pessoa_clicked_cb),
	NULL);

    
    //liga os sinais as funções
    gtk_builder_connect_signals(builder, NULL);


    //ponteiros para os objetos da interface gtk, informe as IDs dos objetos definidos no XML gerado pelo Glade
    stack = GTK_STACK(gtk_builder_get_object(builder, "telas_stack"));
    window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    modelo_armazenamento = GTK_LIST_STORE(gtk_builder_get_object(builder, "pessoas_cadastradas_treeview"));
    
    //mostrar a janela do programa
    gtk_widget_show_all(window);
	gtk_main(); //função principal do GTK
	
	return 0;
}
