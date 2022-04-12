#include <iostream>

//--ainda não funciona
//verificar se letra é maiuscula e miniscula
int main()
{
	void alfabetico( std::string variavel );

	std::string nome;
	std::cout << "Digite uma palavra: ";
	std::cin >> nome;
	
	//sim
	int i = 0;
	while( nome[i] != '\0' )
	{
		alfabetico( nome[i] );
		++i;
	}

	return 0;
}

//diz se um caractere é alfabético
void alfabetico( std::string variavel )
{
	//caracteres minusculos e maiusculos, verifica se é uma letra
	if( ( variavel >= 'a' && variavel <= 'z') )
	{
		std::cout << "Letra minuscula: " << variavel << std::endl;
	}
	else if( ( variavel >= 'A' & variavel <= 'Z') )
	{
		std::cout << "Letra maiuscula: " << variavel << std::endl;	
	}
}
