#include <iostream>
#include <typeinfo>

//mostrar o tipo da variável ou estrutura

class CFB
{

};

int main()
{
	//typeid motra o tipo da variável ou estrutura
	auto var1 = 10;
	std::cout << "Tipo da variável num: " << typeid(var1).name() << "\n";
	
	auto var2 = 10.434;
	std::cout << "Tipo da variável num: " << typeid(var2).name() << "\n";
	
	auto var3 = 's';
	std::cout << "Tipo da variável num: " << typeid(var3).name() << "\n";
	
	auto var4 = "String teste";
	std::cout << "Tipo da variável num: " << typeid(var4).name() << "\n";
	
	//tipo classe
	CFB obj;
	std::cout << "Tipo da variável num: " << typeid(obj).name() << "\n";
	
	
	
	//before mostra a precedencia dos tipos variáveos
	if( typeid(int).before(typeid(char)) )
	{
		std::cout << "int vem antes de char" << "\n";	
	}
	else
	{
		std::cout << "char vem depois de int" << "\n";	
	}
	
	return 0;
}
