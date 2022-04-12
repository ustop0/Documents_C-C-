#include <iostream>
#include <gtkmm.h>

using namespace Gtk;

Window *pWindow
Entry *num_1, *num_2;
Button *btn_soma;

int main(int argc, char **argv)
{
	auto app =  Gtk::Application::create(argc, argv, "org.gtkmm.example");
	auto refBuilder = Builder::create();
	
	refBuilder->add_from_file("soma.glade");
	refBuilder->get_widget("window", pWindow);
	
	if(pWindow) //se a janela estiver rodando entra nessa condição
	{
		refBuilder->get_widget("num_1", num_1);
		refBuilder->get_widget("num_2", num_2);
		refBuilder->get_widget("btn_soma", btn_soma);
	}
	
	app->run( *pWindow);	
	
	delete pWindow; //desalocando memoria
	return 0;
}
