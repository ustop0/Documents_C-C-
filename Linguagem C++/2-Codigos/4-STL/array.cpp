#include <iostream>
#include <array>

//trabalhando com arrays no c++
int main()
{
	//declara o tipo e o tamanho do array
	std::array<int, 5> vt = {2, 6, 11, 23, 78};

	//percorrendo por parametro
	for( auto x : vt )
	{
		std::cout << x << "\n";
	}

	std::cout << std::endl;
	//percorrendo com iterator
	for( auto it = vt.begin(); it != vt.end(); it++ )
	{
		std::cout << *it << "\n";
	}


    std::cout << std::endl;
    //capacidade e tamanho do array
    std::cout << "Tamanho do array: " << vt.size() << std::endl;
    std::cout << "Capacidade máxima de elementos do array: " << vt.max_size() << std::endl;
	if ( vt.empty() )
    {
        std::cout << "Array vazio" << std::endl;
    }
    else
    {
        std::cout << "Array não vazio" << std::endl;
    }


    std::cout << std::endl;
    //elementos que compõe o array
    std::cout << "Posição 3 do array: " << vt[3] << std::endl;
    std::cout << "Posição 3 do array: " << vt.at(3) << std::endl;
    std::cout << "Primeiro elemento do array: " << vt.front() << std::endl;
    std::cout << "Ultimo elemento do array: " << vt.back() << std::endl;
    

    std::cout << std::endl;
    //modificar array
    std::array<int, 5> cfb;
    
    //preenche todos as posições do array com o valor informado
    cfb.fill(5);
    //troca os elementos de dois arrays, vt e cfb

    vt.swap(cfb);

    for( auto x : cfb ) //percorrendo cfb
    {
        std::cout << x << " - " << std::endl;
    }
    
    std::cout << std::endl;

    for( auto x : vt ) //percorrendo vt
    {
        std::cout << x << " - " << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
