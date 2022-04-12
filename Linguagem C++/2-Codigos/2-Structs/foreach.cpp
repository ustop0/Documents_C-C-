#include <iostream>
#include <vector>
#include <algorithm>

//foreach
int main()
{
	std::vector<int>n = {1,2,4,17,18,44,52,88,33};
	//vector<int>::iterator it;

	//for com base em intervalo
	for(auto it:n)
	{
		std::cout << it << "\n";
	}	

	//percorrendo vector com for_each
	for_each(n.begin(), n.end(), [](int num)
	{
		num+=10; //soma 10 a todos os numeros
		std::cout << num << "\n";
	});	

	//modificando o vector com for_each
	for_each(n.begin(), n.end(), [](int& num)
	{
		num+=10; //soma 10 a todos os numeros
		std::cout << num << "\n";
	});	

	return 0;
}
