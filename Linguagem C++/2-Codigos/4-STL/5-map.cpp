#include <iostream>
#include <map>

int main()
{
	std::map<int, std::string> prod;
	std::map<int, std::string>::iterator itmap;

	prod[0] = "Mouse";
	prod[1] = "Teclado";
	prod[2] = "Monitor";
	prod[3] = "Cx. Som";

	for( auto it = prod.begin(); it != prod.end(); it++)
	{
		//->first imprime a chave, ->second imprime o valor
		std::cout << it->first << "\n";
		std::cout << it->second << "\n";
	}

	std::cout << "\n";
	//com base em intervalo
	for( auto it: prod )
	{
		std::cout << it.first << "\n";
		std::cout << it.second << "\n";
	}

	std::cout << "\n";
	//inserindo por método insert
	prod.insert(std::pair<int,std::string>(0, "Jogo"));
	prod.insert(std::pair<int,std::string>(1, "Console"));
	prod.insert(std::pair<int,std::string>(2, "Controle"));
	prod.insert(std::pair<int,std::string>(3, "Tv"));

	for( auto it: prod )
	{
		std::cout << it.first << " - " << it.second << "\n";
	}
	

	std::cout << "\n";
	//deletando elementos com o erase
	prod.erase(2);
	
	for( auto it: prod )
	{
		std::cout << it.first << " - " << it.second << "\n";
	}


	std::cout << "\n";
	//apagando todo o map
	prod.erase(2);
	
	for( auto it: prod )
	{
		std::cout << it.first << " - " << it.second << "\n";
	}	
	

	std::cout << "\n";
	//procurando elementos utilizando o find()
	itmap=prod.find(3);
	if( itmap == prod.end() )
	{
		std::cout << "Produto não encontrado" << "\n";
	}
	else
	{
		std::cout << "Produto em estoque" << "\n";
		std::cout << "Código do elemento: "  << itmap->first << " Valor: " << itmap->second << "\n";
	}	

	return 0;
}
