#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    // std::sort

class Pessoa
{
	public:
		void nome()
		{
			std::cout << "Meu nome" << "\n";
		}
};

class Habilidades:public Pessoa
{
	public:
		void idioma()
		{
			std::cout << "Português brasileiro" << "\n";
		}
};

int main()
{
	Habilidades obj;
	
	std::cout << "\nO nome é: ";
	obj.nome();
	std::cout << "\nA habilidade é: ";
	obj.idioma();
	
	auto func=[]()
	{
		std::cout	 << "Função lambda" << "\n";
	};
	
	func();
	
	std::vector<int> vec { 0, 5, 2, 9, 7, 6, 1, 3, 4, 8 };

    size_t contador = 0; //size_t server para arrys
    std::sort(vec.begin(), vec.end(), [&contador](int a, int b) {
        ++contador;
        return a < b;
    });
		
	return 0;
}
