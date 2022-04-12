#include <iostream>
#include <functional>

//permite associar elementos
int soma(int n1, int n2)
{
	return n1 + n2;
}

struct cfb
{
	int num;
	int dobro()
	{
		return num*2;
	}
};

int main()
{
	int n1=10;
	const int n2=5;

	//bind serve para associar uma variável ou valor a uma função
	auto s1=std::bind(soma,n1,n2);

	std::cout << "s1(), associa as variáveis n1 e n2 a função soma() "  << s1() << "\n";

	/*
	cref serve para criar um referencia entre dois elementos, nesse caso o n4 vai receber todas as
	operações do n3
	*/
	int n3=10;
	auto n4=std::cref(n3);

	//mem_fn serve para criar um objeto de uma função, pode ser utilizada com uma classe
	//com struct
	cfb n = {10};
	auto dobro2=std::mem_fn(&cfb::dobro);
	std::cout << dobro2(n) << "\n";


	return 0;
}
