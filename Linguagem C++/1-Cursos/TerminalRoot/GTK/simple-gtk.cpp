#include <gtkmm.h>

int main( int argc, char** argv ){
    Gtk::Main kit( argc, argv ); //main
    Gtk::Window window; //instancia a classe que cria a janela
    window.set_default_size( 600 , 400 ); //tamanho da janela
    window.set_title("Primeiro Exemplo Básico de GTK+ com gtkmm para o C++ !!!"); //titulo da janela
    
    Gtk::Label label; //inserindo label
    label.set_text("Olá, biblioteca gtkmm estou desenhando uma palavra nessa janela."); //inserindo texto na label
    window.add( label );
    
    
    window.show_all();
    
    
    Gtk::Main::run( window ); //para rodar a nossa janela
    return 0;
}

// COMPILE: g++ simple-gtk.cpp -o simple $(pkg-config gtkmm-3.0 --cflags --libs)
