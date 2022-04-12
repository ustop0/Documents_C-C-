#include <iostream>
#include <string>


int main()
{
	std::string txt = "Entendendo o uso de strings no C++";
	std::string::iterator it; //iterator
	std::string::reverse_iterator rit; // reverse iterator

	//elemento apontando para o primeiro elemento da string
	it=txt.begin();
	std::cout << "Primeiro elemento da string: "  << *it << "\n";
	
	//elemento apontando para o ultimo elemento da string, usar -1
	it=txt.end() - 1;
	std::cout << "Último elemento da string: " << *it << "\n";

	//iterator reverso, apontando para o final
	rit=txt.rbegin() - 1;
	std::cout << "Apontando para o final da string: " << *rit << "\n";

	//iterator reverso, apontando para o inicio
	rit=txt.rend();
	std::cout << "Apontando para o inicio da string: " << *rit << "\n";

	//---------------------------------------------------------------//
	std::cout << "\n\n";

	//mostra o tamanho da string
	std::cout << "Tamanho da string: " << txt.size() << "\n";
	
		
	//mostra o comprimento da string(praticamente igual a size)
	std::cout << "Comprimento da string: " << txt.length() << "\n";


	//tamanho máximo que a string pode ter
	std::cout << "Definindo tamanho máximo da string: " << txt.max_size() << "\n";
	
	//alterando o tamanho da string
	txt.resize(10);
	std::cout << "Alterando tamanho da string, novo tamanho máximo: " << txt.max_size() << "\n";
	
	//retorna o tamanho do espaço alocado para string
	std::cout << "Tamanho do espaço alocado para string: " << txt.capacity() << "\n";

	//retorna o tamanho do espaço alocado para string
	txt.resize(100);
	std::cout << "Redefinindo e retornando o novo espaço alocado para string: " << txt.capacity() << "\n";
	
	//---------------------------------------------------------------//
	std::cout << "\n\n";
	
	//limpa a string
	txt.clear();
	std::cout << "A string foi limpa: " << txt << "\n";
	
	txt = "Nova string para c++";
	
	//verificar se a string está vazia
	if(txt.empty())
	{
		std::cout << "A string está vazia" << "\n";
	}
	else
	{
		std::cout << "String não vazia, seu conteúdo é: " << txt << "\n";
	}
	
	//reduzir a capacidade da string dinamicamente(de acordo com o que a string está ocupando), tem o limite minito de 15
	std::cout << "Capacidade da string: " << txt.capacity()  << "\n";
	txt.resize(20);
	txt.shrink_to_fit();
	std::cout << "A capacidade da string reduzida: " << txt << "\n";
	
	return 0;
}
