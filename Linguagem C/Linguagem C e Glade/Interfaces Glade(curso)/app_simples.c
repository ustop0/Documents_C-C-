#include <gtk/gtk.h> //biblioteca do GTK

//objetos da interface declarados de acordo com o seu tipo
GtkLabel *label; 
GtkEntry *entry; 

//funções do programa (todas as funções vão receber um ponteiro para um widget e um gpointer data)
void on_botao_clicked(GtkWidget *widget, gpointer data){
    //recebe e imprime o texto recebido no campo(entry)
    const gchar *texto = gtk_entry_get_text(entry);
    gtk_label_set_text(label, texto);
    
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
	GtkBuilder *builder = gtk_builder_new_from_file("app_simples.glade");
	
	//fazer ligação dos botões com as suas funções() em C
	gtk_builder_add_callback_symbols(builder, "on_bt_principal_clicked", G_CALLBACK(on_botao_clicked), "main_window_destroy_cb", G_CALLBACK(main_window_destroy_cb), NULL);


    //liga os sinais as funções
    gtk_builder_connect_signals(builder, NULL);

    //ponteiros para os objetos gtk, informe as IDs dos objetos definidos no XML gerado pelo Glade
    label = GTK_LABEL(gtk_builder_get_object(builder, "label_principal"));
    entry = GTK_ENTRY(gtk_builder_get_object(builder, "digite_principal"));
    
    GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    
    
    //mostrar a janela do programa
    gtk_widget_show_all(window);
	gtk_main(); //função principal do GTK
	
	return 0;
}
