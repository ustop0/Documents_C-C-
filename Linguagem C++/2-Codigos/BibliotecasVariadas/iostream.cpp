#include <iostream>

int main()
{
	char nome[80];

	//lê caracter por caracter
	//std::cin.get(nome, 80);

	//lê pela linha do arquivo
	//std::cin.getline(nome, 80);


	char n, s;

	n=std::cin.get(); //armazena na variavel n
	std::cin.ignore(80, ' '); //serve para ignorar o valor especificado

	s=std::cint.get(); //armazena na variável s
	std::cout << n << " - " << s << "\n";

	//mostra o tamanho da entrada
	//std::cout << nome << " - Tamanho: " << cin.gcount() << "\n";

	return 0;
}
