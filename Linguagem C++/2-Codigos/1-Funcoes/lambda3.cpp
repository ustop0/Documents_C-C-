#include <iostream>
#include <algorithm> // find_if_not

//find_if_not, encontre se não existir

int main( int argc , char **argv ){
	const char str[] = "Hhsjjsjdasasa,sdas";
	
	//verifica se algum dos caracteres da string não é letra
	auto it = std::find_if_not( std::begin(str) , std::end(str) , []( char c )
	{
		return ( c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z' );
	}); 
	
	std::cout << "O caracter que não é letra de str é: " << it << '\n';
		
	return 0;
}

