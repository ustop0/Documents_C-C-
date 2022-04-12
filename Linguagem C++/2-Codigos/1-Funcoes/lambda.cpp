#include <iostream>
#include <vector>

//funções lambda
int main()
{

	//funções lambdas começam com colchetes[]
	auto maior=[](int n1, int n2) -> int{
		//if com operador ternario
		return (n1>n2)?n1:n2;
		
	};
	
	std::cout << maior(5,11) << "\n";
	
		
	//função com o vector
	auto maior2=[](std::vector<int> vet) -> int{
		
		auto m = 0;
		for(int x:vet)
		{
			m=(m>x)?m:x;
		}
		return m;
	};
	
	std::cout << maior2({9, 8, 2, 10, 45, 20, 90, 78}) << "\n";
	
	
	return 0;
}
