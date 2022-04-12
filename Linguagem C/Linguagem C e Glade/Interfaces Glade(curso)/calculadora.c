#include<gtk/gtk.h>
#include<stdlib.h>  //para poder converter uma string para um float
#include<stdbool.h>
#include<math.h>

//objetos da interface declarados de acordo com o seu tipo 
GtkEntry *display; 
char operacao[100];
float primeiro_numero;
bool limpar_display = FALSE;


void bt_igual_clicked_cb();

//função para adicionar arquivo  de estilo css ao programa
void usar_css(){
    
    GtkCssProvider *css_provider = gtk_css_provider_new();
    gtk_css_provider_load_from_path(css_provider, "imagens/estilo_calculadora.css", FALSE);
    gtk_style_context_add_provider_for_screen(gdk_screen_get_default(), 
                                               GTK_STYLE_PROVIDER(css_provider),
                                               GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
}

float ler_display(){
    
    const gchar *string = gtk_entry_get_text(display);
    return atof(string);
} 
//funções do programa (todas as funções vão receber um ponteiro para um widget e um gpointer data)
void main_window_destroy_cb(GtkWidget *widget, gpointer data){
    
    gtk_main_quit();

}

//---funções dos botões da calculadora---
void bt_reset_clicked_cb(GtkWidget *widget, gpointer data){
    
    gtk_entry_set_text(display, "0"); 

}

void bt_raiz_quadrada_clicked_cb(GtkWidget *widget, gpointer data){
    
    strcpy(operacao, "raiz_quadrada");
    limpar_display = TRUE;
    bt_igual_clicked_cb(widget, data);
    
}

void bt_porcentagem_clicked_cb(GtkWidget *widget, gpointer data){
    
    strcpy(operacao, "porcentagem");
    primeiro_numero = ler_display();
    limpar_display = TRUE;

}

void bt_divisao_clicked_cb(GtkWidget *widget, gpointer data){
    
    strcpy(operacao, "divisao");
    primeiro_numero = ler_display();
    limpar_display = TRUE;

}

void bt_multiplicacao_clicked_cb(GtkWidget *widget, gpointer data){
    
    strcpy(operacao, "multiplicacao");
    primeiro_numero = ler_display();
    limpar_display = TRUE;

}

void bt_subtracao_clicked_cb(GtkWidget *widget, gpointer data){
    
    strcpy(operacao, "subtracao");
    primeiro_numero = ler_display();
    limpar_display = TRUE;

}

void bt_soma_clicked_cb(GtkWidget *widget, gpointer data){
    
    strcpy(operacao, "soma");
    primeiro_numero = ler_display();
    limpar_display = TRUE;
    
}

void bt_igual_clicked_cb(GtkWidget *widget, gpointer data){
    
    float segundo_numero = ler_display();
    float resultado_f;
    
    //operações de soma e subtração dos numeros
    if(strcmp(operacao, "soma") == 0) resultado_f = primeiro_numero + segundo_numero;
    if(strcmp(operacao, "subtracao") == 0) resultado_f = primeiro_numero - segundo_numero;
    if(strcmp(operacao, "divisao") == 0) resultado_f = primeiro_numero / segundo_numero; //nao pode dividir por 0
    if(strcmp(operacao, "multiplicacao") == 0) resultado_f = primeiro_numero * segundo_numero;
    if(strcmp(operacao, "porcentagem") == 0) resultado_f = (primeiro_numero * segundo_numero)/100;
    if(strcmp(operacao, "raiz_quadrada") == 0) resultado_f = sqrt(segundo_numero);
    
    char resultado[10];
    sprintf(resultado, "%f", resultado_f);
    gtk_entry_set_text(display, resultado);
}

void bt_ponto_clicked_cb(GtkWidget *widget, gpointer data){
    
    char texto[100];
    g_snprintf(texto , 100, "%s%s", gtk_entry_get_text(display), ",");
    gtk_entry_set_text(display, texto);

}

void bt_numero_clicked_cb(GtkButton *button, gpointer data){
    if(limpar_display){
        gtk_entry_set_text(display, "0");
        limpar_display = FALSE;
    
    }
    //permite que o display aceite mais de um numero
    if(strcmp(gtk_entry_get_text(display), "0") == 0){
        gtk_entry_set_text(display, gtk_button_get_label(button));
    } else{
        char texto[100];
        g_snprintf(texto , 100, "%s%s", gtk_entry_get_text(display), gtk_button_get_label(button));
        gtk_entry_set_text(display, texto);
    }
    
}
//Fim-funções do programa

int main(int argc, char *argv[]) {
    
    //inicializa a biblioteca gtk
    gtk_init(&argc, &argv);
	
	//carrega a sua user interface
	GtkBuilder *builder = gtk_builder_new_from_file("calculadora.glade");
	
	
	//Chamadas de sinais dos botoes
	gtk_builder_add_callback_symbols(
	builder,  
	"main_window_destroy_cb", G_CALLBACK(main_window_destroy_cb), 
	"bt_reset_clicked_cb", G_CALLBACK(bt_reset_clicked_cb),
	"bt_raiz_quadrada_clicked_cb", G_CALLBACK(bt_raiz_quadrada_clicked_cb),//caso de problema colocar on_
	"bt_porcentagem_clicked_cb", G_CALLBACK(bt_porcentagem_clicked_cb),
	"bt_divisao_clicked_cb", G_CALLBACK(bt_divisao_clicked_cb),
	"bt_multiplicacao_clicked_cb", G_CALLBACK(bt_multiplicacao_clicked_cb),
	"bt_subtracao_clicked_cb", G_CALLBACK(bt_subtracao_clicked_cb),
	"bt_soma_clicked_cb", G_CALLBACK(bt_soma_clicked_cb),
	"bt_igual_clicked_cb", G_CALLBACK(bt_igual_clicked_cb),
	"bt_ponto_clicked_cb", G_CALLBACK(bt_ponto_clicked_cb),
	"bt_numero_clicked_cb", G_CALLBACK(bt_numero_clicked_cb),
	NULL);

    
    
    //liga os sinais as funções
    gtk_builder_connect_signals(builder, NULL);

    //ponteiros para os objetos da interface gtk, informe as IDs dos objetos definidos no XML gerado pelo Glade
    display = GTK_ENTRY(gtk_builder_get_object(builder, "display_entry"));
    gtk_entry_set_text(display, "0");   //define o valor inicial mostrado no campo, como o zero no exemplo
    
    
    GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    
    //função do css
    usar_css();
    //mostrar a janela do programa
    gtk_widget_show_all(window);
	gtk_main(); //função principal do GTK
	
	return 0;
}
