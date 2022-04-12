#include <iostream>

//usar quando for necessario utilizar uma variável que está em outro arquivo

extern int num;

int valor = 10;

void impNum()
{
    std::cout << num << std::endl;
}
