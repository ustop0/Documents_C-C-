#include <iostream>
#include <utility> //trabalhar com pair
#include <vector>


int main()
{
	std::pair<int, std::string> par;

	par.first = 100;
	par.second = "CFB cursos";

	std::cout << par.first << " - " << par.second << "\n";


    //utilizando constante
    std::cout << std::endl;

    const int tam = 3;
    std::pair<int, std::string> par2[tam];

	par2[0].first = 100;
	par2[0].second = "CFB cursos";
	par2[1].first = 200;
	par2[1].second = "Curso c++";
	par2[2].first = 300;
	par2[2].second = "Pair";

	std::cout << par.first << " - " << par2[0].second << "\n";


	std::cout << std::endl;
	//utilizando makepair	
    const int tam2 = 3;
    std::pair<int, std::string> par3[tam2];

	par3[0] = std::make_pair(10, "Thiago");
	par3[1] = std::make_pair(20, "Thanos");
	par3[2] = std::make_pair(30, "Darkseid");

	for( int i = 0;  i < tam2; i++ )
	{
		std::cout << par.first << " - " << par3[i].second << "\n";
	}
	
	
	std::cout << std::endl;
	//utilizando pair dentro de pair	
    const int tam3 = 3;
    std::pair<int, std::pair<std::string, double>> par4[tam3];

	par4[0] = std::make_pair(10, std::make_pair("Mouse", 10.55));
	par4[1] = std::make_pair(10, std::make_pair("Monitor", 200.55));
	par4[2] = std::make_pair(10, std::make_pair("Teclado", 60.55));

	for( int i = 0;  i < tam3; i++ )
	{
		std::cout << par4[i].first << " - " << par4[i].second.first << " - " << par4[i].second.second << "\n";
	}

	
	std::cout << std::endl;
	//utilizando pair com vector	   
    std::vector<std::pair<int, std::string>> prod;
	prod.push_back(std::make_pair(10, "Monitor"));
	prod.push_back(std::make_pair(20, "Teclado"));
	prod.push_back(std::make_pair(30, "Monitor"));
	
	for( int i = 0;  i < prod.size(); i++ )
	{
		std::cout << prod[i].first << " - " << prod[i].second << "\n";
	}
	
	std::cout << std::endl;
	std::cout << "Com base em intervalo" << std::endl;
	//com base em intervalo
	for( auto i: prod)
	{
		std::cout << i.first << " - " << i.second << "\n";
	}
	
	return 0;
}
