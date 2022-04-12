#include <iostream>


union Square
{
	int width;
	int height;
};

int getArea( int width, int height )
{
	return width * height;
}

int main()
{
	//a estrutura union aloca a memoria pelo valor do maior tipo de dado
	//nessa estrutura os só pode ter o valor de uma variável alocada
	//cada vez que um valor é alocado para uma variável o das outras
	//é apagado
	union uni
	{
		int x;
		short y;
		char c;
	};

	union uni u;

	u.x = 2;
	std::cout << "Valor do x: " << u.x << std::endl;
	
	u.y = 1;
	std::cout << "Valor do y: " << u.y << std::endl;
	std::cout << "Valor do x: " << u.x << std::endl;

	
	//exemplo da union Square
	//todas as estruturas da struct ficam com o mesmo valor, nesse caso 10
	Square sqr;
	sqr.width = 10;
	std::cout << getArea( sqr.width, sqr.height )  << std::endl;

	return 0;
}
