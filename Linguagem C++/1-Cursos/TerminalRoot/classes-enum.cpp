#include <iostream>


//classes enum não são consideradas classes de orientação a objetos
enum class Cores 
{
	color_blue,
	color_purple
};

enum class Frutas 
{
	laranja,
	pessego
};

int main( int argc , char **argv )
{

	Cores cores;
	Frutas frutas;

	//static_cast, faz cast de uma variável ou objeto
	std::cout << "O número de cores é: " << static_cast<int>(cores) << "\n";

  	return 0;	
}

