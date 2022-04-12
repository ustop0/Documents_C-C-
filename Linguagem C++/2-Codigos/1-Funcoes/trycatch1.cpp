#include <iostream>


void funcao( int * ptr , int x )
{
	if( ptr == NULL || x == 0 )
	{
		throw ptr;
    	//std::cout << "Erro bizarro" << '\n';
  	}
  	else
  	{
    	std::cout << "O ponteiro é: " << *ptr << " e o número é: " << x << '\n';
  	}
}

int main( int argc , char **argv )
{
	int num = 10;
	int * ponteiro = &num;

	try 
	{
		funcao( ponteiro , num );
		funcao( ponteiro , 80 );
		funcao( ponteiro , 4 );
		funcao( NULL , 80 );
		funcao( ponteiro , num );
		funcao( ponteiro , 80 );
		funcao( ponteiro , 4 );
	}
	catch( ... )
	{
		std::cout << "Erro identificado." << '\n';
	}
	
	return 0;
}

