#include <iostream>
#include <ctime> //manipulação de data e hora
#include <cmath>

int numeros_primos( int n );

int main( int argc , char **argv )
{
	int primos;

	//retorno da função clock, mede velocidade da função
	clock_t t;
	t = clock();
	primos = numeros_primos(9000);
	t = clock() - t;

	std::cout << "Qtde de numeros primos encontrados: " << primos << std::endl;
	std::cout << "Tempo de CPU: " << ((float)t)/CLOCKS_PER_SEC << "s" << std::endl;

	return 0;
}


//funçẽo de numeros primos
int numeros_primos( int n )
{
	int i, j;
	int freq = n - 1;
	for( i = 2; i <= n; ++i )
	{
		for( j= sqrt(i); j > 1; --j )
		{
			if( i%j == 0 )
			{
				--freq;
				break;
			}
		}
	}
	return freq;
}
