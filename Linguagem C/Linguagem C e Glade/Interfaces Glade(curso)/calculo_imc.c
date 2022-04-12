#include <gtk/gtk.h>
#include <stdlib.h>  //para poder converter uma string para um float

//objetos da interface declarados de acordo com o seu tipo
GtkLabel *resultado; 
GtkEntry *peso; 
GtkEntry *altura; 

//funções do programa (todas as funções vão receber um ponteiro para um widget e um gpointer data)
void on_botao_clicked(GtkWidget *widget, gpointer data){
    //o peso e a altura retornam em string(str) e precisam ser convertidos para float para o calculo
    const gchar *peso_str = gtk_entry_get_text(peso);
    const gchar *altura_str = gtk_entry_get_text(altura);
    
    float peso_f = atof(peso_str);
    float altura_f = atof(altura_str);
    
    //calculo imc
    float imc = peso_f/(altura_f * altura_f);
    
    char texto[] = "Seu IMC é: ";
    char result[20];
    g_snprintf(result, 20, "%s%.2f", texto, imc);
    
    //gtk_label_set_text imprime o conteúdo da variável result no label resultado da interface grafica
    gtk_label_set_text(resultado, result);
    
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
	GtkBuilder *builder = gtk_builder_new_from_file("imcGlade.glade");
	
	//fazer ligação dos botões com as suas funções() em C
	gtk_builder_add_callback_symbols(builder, "bt_calculo_clicked_cb", G_CALLBACK(on_botao_clicked), "main_window_destroy_cb", G_CALLBACK(main_window_destroy_cb), NULL);


    //liga os sinais as funções
    gtk_builder_connect_signals(builder, NULL);

    //ponteiros para os objetos gtk, informe as IDs dos objetos definidos no XML gerado pelo Glade
    resultado = GTK_LABEL(gtk_builder_get_object(builder, "resultado_label"));
    peso = GTK_ENTRY(gtk_builder_get_object(builder, "peso_entry"));
    altura = GTK_ENTRY(gtk_builder_get_object(builder, "altura_entry"));
    
    GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    
    
    //mostrar a janela do programa
    gtk_widget_show_all(window);
	gtk_main(); //função principal do GTK
	
	return 0;
}
