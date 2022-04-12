#include <iostream>

//functor(function object), é uma classe que define um operador(cria objetos que parecem uma função)
//ele permite passar uma função functor como parametro de uma função
struct Estrutura 
{
	int operator()(int x) const 
	{
		return x * 2;
	}
};

int main( int argc , char **argv )
{
	Estrutura e;
	int x = e(5); //passando parametro para o functor
	std::cout << "O valor de x é: " << x << '\n';
	return 0;
}

