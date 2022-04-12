#include <iostream>

//função ajudam a reduzir o overhead das chamadas de funções
inline int p_mais_dois( int *x ) //ponteiro: usamos o valor real que está no endereço da variável
{
	//calculos com ponteiros
	*x = *x + 2;
	return *x;
}

inline int mais_dois( int x ) //usamos uma copia do valor da variável
{
	x = x + 2;
	return x;
}

int main( int argc , char **argv )
{
	int x = 9;
	std::cout << "O valor de x ANTES é: " << x << '\n';
	std::cout << "O valor de 9 mais 2 é: " << p_mais_dois( &x ) << '\n';
	std::cout << "O valor de x DEPOIS é: " << x << '\n';
	return 0;
}

