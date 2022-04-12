#include <iostream>
#include <regex> //biblioteca de expressões regulares
#include <string>


bool inicia_com_letra(std::string str)
{
	//serve  para identificar padrões
	//descubrir se a string começa com uma letra
	std::regex re("^[a-zA-Z]");
	std::smatch match; //palavra que vai casar
	return std::regex_search(str, match, re); //retorna o valor
}

int main(int argc, char **argv)
{
	std::string teste = "teste";
	if(inicia_com_letra(teste)) //se for verdadeiro
	{
		std::cout << "Sim, Inicia com letra" << "\n";

	}
	else
	{
		std::cout << "Não, Não inicia com letra" << "\n";
	}
	return 0;
}
