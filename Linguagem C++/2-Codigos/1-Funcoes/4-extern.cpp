#include <iostream>

//usando uma variável ou função de um arquivo externo

void impNum();

int num = 10;
extern int valor;

int main()
{
    impNum();
    std::cout << valor << std::endl;
    return 0;
}
