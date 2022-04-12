#include <iostream>

//--ainda não funciona
//verificar se é letra ou caractere especial
int main()
{
	void alfabetico( std::string str );

	std::string nome;
	std::cout << "\nDigite um nome: ";
	std::cin >> nome;

	int i = 0;
	while( nome[i] != '\0' )
	{
		alfabetico( nome[i] );
		++i;
	}

	return 0;
}

void alfabetico( char str )
{
	//verificando se é um letra
	if( ( str >= 'a' && str <= 'z') || ( str >= 'A' && str <= 'Z' ) )
	{
		std::cout << "é uma letra\n";
	}	
	else
	{
		std::cout << "não é uma letra\n";
	}
}
