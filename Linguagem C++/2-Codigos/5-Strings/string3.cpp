#include <iostream>
#include <string>

/**
	 * stoi() -> string para int
     * stol() -> string para long int
     * stoll() -> string para long long int
     * stoul() -> string para unsigned long int
     * stoull() -> string para unsigned long long int
     * stof() -> string para float
     * stod() -> string para double
     * stold() -> string para long double
 **/


int main()
{
    std::string txt1 = "Curso de c++ -modulo strings";
    std::string txt2;


    //fazer buscas dentro de uma string, retornando a posição do elemento
   
    //size_t é como unsigned int, com ele é possível encontrar tanto a posição como o valor máximo da string
    size_t encontrado=txt1.find("de"); //size_t é como unsigned int
    
    if(encontrado != std::string::npos) //npos contém o valor máximo possível do tipo size_t
    {
        std::cout << "Ocorrência encontrada na posição: " << encontrado << "\n";
    }
    else
    {
        std::cout << "Não encontrado" << std::endl;
    }

    std::cout << "\n\n";
    //retorna uma nova string de acordo com a posição encontrada em uma string já existente
    txt2=txt1.substr(15, 10);    
    
    std::cout << "String que está em txt2: " << txt2 << std::endl;

    std::cout << "\n\n";
    //compara duas strings
    txt1 = "Primeira string";
    txt2 = "Segunda string";

    if(txt1.compare(txt2) == 0)
    {
        std::cout << "Strings iguais"<< std::endl;    
    }
    else
    {
        std::cout << "Strings diferentes"<< std::endl;    
    }
    


    //---------------------------------------------------------------------------------------------//
    //converter strings
    txt1 = "18", txt2 = "";

    int ano = 2018, res;

    res = ano - std::stoi(txt1); //string para inteiro
    std::cout << "Resposta da operação: " << res << std::endl;

    txt2 = std::to_string(res); //inteiro para string

    
    return 0;
}
