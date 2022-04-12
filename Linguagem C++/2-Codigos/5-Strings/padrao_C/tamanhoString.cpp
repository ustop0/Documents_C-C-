#include <iostream>

int main()
{
	int tamanhoString( std::string str );
	std::string usuario;

	std::cout << "\nDigite uma palavra(string): ";
	std::cin >> usuario;

	int num = tamanhoString( usuario );
	std::cout << "A string: " << usuario << " possui " << num << " caracteres" << std::endl;

	return 0;
}

//tamanho string C++
int tamanhoString( std::string str )
{
	int numCaracteres = 0;

	while( str[numCaracteres] != '\0' )
	{
		++numCaracteres;
	}
	++numCaracteres;
	
	return numCaracteres;
}
