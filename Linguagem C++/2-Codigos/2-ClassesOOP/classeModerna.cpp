#include <iostream>

class Carro
{
	public:
		int velMax;
		int potencia;
		const char *nome;
		
		//parametros direto no construtor da classe
		Carro( const char *n, int p ):nome(n),potencia(p) //c++ moderno, lista de inicialização
		{
			if( p < 100 )
			{
				this->velMax=120;
			}
			else if( p < 200 )
			{
				this->velMax=220;
			}
			else
			{
				this->velMax=350;
			}

		}
};

int main()
{
	Carro *c1 = new Carro("Thiago", 70);
	std::cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << "\n";

	return 0;
}
