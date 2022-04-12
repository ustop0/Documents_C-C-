
#include <iostream>

int main()
{
	bool resposta;

	resposta = false;

	//tamanho da bool
	int x = sizeof( resposta );
	std::cout << "O tamanho da bool b: " << x << std::endl;

	if( resposta == true )
	{
		std::cout << "Resposta foi sim: " << resposta << std::endl;
	}
	else
	{
		std::cout << "Reposta foi não: " << resposta << std::endl;
	}

	std::cout << std::endl;
	//ponteiros
	bool b;
	bool *ptr;

	ptr = &b;
	*ptr = true;

	std::cout << "Variável endereço: " << &b << std::endl;
	std::cout << "Variável valor: " << b << std::endl;
	std::cout << "Ponteiro endereço: " << ptr << std::endl;
	std::cout << "Ponteiro valor: " << *ptr << std::endl;

	//imprimindo true e false
	std::cout << std::endl;
	std::cout << true << std::endl;
	std::cout << false << std::endl;

	//alocação dinamica de variável
	int *ptr_a =  new int;
	int tam = sizeof( *ptr );
	std::cout << "Tamanho da var: " << tam << std::endl;
	delete ptr_a;

	return 0;
}
