#include <iostream>

//Maiusculo e Minusculo por função

void convert(std::string& s)
{
	//percorrendo a string e modificando caracter por caracter
	for(int i = 0; i < s.length(); i++)
	{
		s[i] = std::toupper(s[i]);
	}
}

int main()
{
   	//convertendo com a função
	std::string line;
	std::cout << "\nDigite a string: ";
	getline(std::cin, line);
	convert(line);
	
	std::cout << "A string digitada convertida ficou: " << line << "\n";
	
    return 0;
}
