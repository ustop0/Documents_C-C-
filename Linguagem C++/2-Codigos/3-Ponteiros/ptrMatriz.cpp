#include <iostream>

//matriz de ponteiros utilizando funções
//--------------------------------------
//protótipos das funções
void soma(int &x, int &y);
void subtracao(int &x, int &y);
//--------------------------------------
//criando a matriz de ponteiros
void ( *pfunc[] )( int &x, int &y ) = { soma, subtracao };


int main()
{
    int a = 10;
    int b = 5;

    ( *pfunc[0] ) (a, b); //função de soma
    ( *pfunc[1] ) (a, b); //função de soma

    return 0;
}


void soma(int &x, int &y)
{
    int soma = x + y;
    std::cout << "Resultado da soma: " << soma << std::endl;
}

void subtracao(int &x, int &y)
{
    int subtracao = x - y;
    std::cout << "Resultado da subtracão: " << subtracao << std::endl;
}
