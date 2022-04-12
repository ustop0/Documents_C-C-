#include <iostream>

int main()
{
	bool stringsIguais( std::string s1, std::string s2 );

	std::string str1 = "casa";
	std::string str2 = "carro";

	if( stringsIguais( str1, str2 ) )
	{
		std::cout << "São iguais\n";
	}
	else
	{
		std::cout << "Não são iguais\n";	
	}

	return 0;
}

bool stringsIguais( std::string s1, std::string s2 )
{
	int i = 0;

	//comparar as duas strings
	while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
	{
		i++;
	}

	//testa os valores para o retorno da função
	if( s1[i] == '\0' && s2[i] == '\0' )
	{
		return 1; //true, se as strings forem iguais
	}
	else
	{
		return 0; //false, se as strings forem diferentes
	}

}
