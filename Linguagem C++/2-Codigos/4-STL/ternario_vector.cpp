#include <iostream>
#include <string>
#include <vector>

int main()
{
    int num;
    std::vector<int> vec;

    std::cout << "\nnumero: ";
    std::cin >> num;
    vec[num];

    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(25);

    for(auto i:vec)
        std::cout << "Iterando: " << i <<"\n";

    std::string nome;

    std::cout << "\nnome: ";
    std::cin >> num;

    std::string resultado;
    //std::string res1 = "nome feio", res2 = "nome bonito";

	//operador ternario, um IF simplificado
    resultado = (nome != "thiago") ? "Cara foda":"Cara babaca";
    
    std::cout << "O nome é diferente de: " << resultado << "\n";
    
    
    std::cout << "\nArray multidimensional";
    //vector multidimensional
    std::vector<std::vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
     
    for (int y = 0; y < vect.size(); y++)
    {
        for (int j = 0; j < vect[y].size(); j++)
        {
            std::cout << vect[y][j] << " ";
        }   
        std::cout << "\n";
    }
    
    return 0;
}
