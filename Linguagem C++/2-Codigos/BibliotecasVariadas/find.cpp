#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

int main()
{
	int vetor[]={5,3,1,4,7,2,6};
	int *p; //armazena resultado do find

	size_t tam=sizeof vetor/4; //divide por quatro, tamanho do int

	//resultado do find, pesquisando um valor especifico em um vetor
	p = std::find( vetor, vetor + 7, 6 );

	if( p != vetor + tam )
	{
		std::cout << "Numeral encontrado: " << *p << "\n";
	}
	else
	{
		std::cout << "Numeral não encontrado" << "\n";
	}

	//**Utilizando com vector, pode ser utilizado com varias escruturas (array, list e etc..)
	std::vector<int>num = {5,3,1,4,7,2,6};
	auto it = std::find( num.begin(), num.end(),16 );
	if( it != num.end() )
	{
		std::cout << "Numeral encontrado" << *it  << "\n";
	}
	else
	{
		std::cout << "Numeral não encontrado" << "\n";
	}


	//adicionar elementos em um vector sem repetilos
	std::vector<int>numeros;
	std::vector<int>::iterator it2;
	int num2, qtde = 10;
	
	while( qtde > 0 )
	{
		std::cout << "Digite um numeral: ";
		std::cin >> num2;
		
		it2 = std::find( numeros.begin(), numeros.end(),num2 ); 
		
		if( it2 != numeros.end() )
		{
			std::cout << "Numeral já existe no vector" << "\n";
		}
		else
		{
			//inserindo numeral no vector
			std::cout << "Numeral não existe no vector" << "\n";
			numeros.push_back(num2);
			qtde--;
			break;	
		}
	}
	
	
	std::cout << "\n";
	//**find() com map
	std::map<char, int>mapa;
	mapa['a'] = 10;
	mapa['b'] = 33;
	mapa['c'] = 25;
	mapa['d'] = 5;
	mapa['e'] = 80;
	
	auto it3 = mapa.find('c');
	
	if( it3 != mapa.end() )
	{
		//map: first mostra a chave e second o valor
		std::cout << "Chave encontrada " << it3->second << "\n";
	}
	else
	{
		//inserindo numeral no vector
		std::cout << "Chave não encontrada" << "\n";
	}
	
	
	std::cout << "\n";
	//**find() com string
	std::string texto = "Curso de C++";
	size_t enc = texto.find("Aula");
	
	//std::string::npos retorna o valor máximo do size_t
	if( enc != std::string::npos )
	{
		std::cout << "Palavra encontrada " << enc << "\n";
	}
	else
	{	
		std::cout << "Palavra não encontrada" << "\n";
	}
	
	
	std::cout << "\n";
	//size_t é como unsigned int, é usado para armazenar tamanhos de elemtos
	size_t tamanho1 = texto.size();
	size_t tamanho2 = sizeof vetor/4;
	size_t tamanho3 = num.size();
	std::cout << "Tamanho da string: " << tamanho1 << "\n";
	std::cout << "Tamanho do vetor: " << tamanho2 << "\n";
	std::cout << "Tamanho do vector: " << tamanho3 << "\n";
	
		
	return 0;
}
