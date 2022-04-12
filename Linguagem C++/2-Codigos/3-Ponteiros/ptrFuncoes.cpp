#include <iostream>

//ponteiros para funções
void beep( void );
void soma(int &x, int &y);


int main()
{
    //ponteiro para função 1
    void (*ptr1)(void);
    ptr1 = beep;
    (*ptr1)();


    //ponteiro para função 2
    int a = 5;
    int b = 5;

    void (*ptr2)(int &x, int &y);
    ptr2 = soma;
    (*ptr2)(a, b);

    return 0;
}


void beep( void )
{
    std::cout << '\a' << std::endl;
    std::cout << "Função executada" << std::endl;
}

void soma(int &x, int &y)
{
    int soma = x + y;

    std::cout << "Resultado da soma: " << soma << std::endl;
}

