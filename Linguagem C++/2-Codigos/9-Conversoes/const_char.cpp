#include <iostream>

//converte string para array const char
int main()
{
    std::string nome = "tiba";
    const char *no = nome.c_str();

    std::cout << "Nome: " << no << std::endl;

    return 0;
}
