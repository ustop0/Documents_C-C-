#include <iostream>
#include <memory> //smart pointers
#include <string>

int main()
{
    //int *pnum = new int(); //o new aloca memoria dinamicamente
    
    //um ponteiro por vez, mais utilizado
    std::unique_ptr<int>pnum(new int());
    *pnum = 10;

    //ponteiro compartilhado, permite um ponteiro receber o valor do outro
    std::shared_ptr<int>pnum2(new int());
    std::shared_ptr<int>pnum3=pnum2;
    
    
    //ponteiro alocado dinamicamente para string
    //std::string *str = new std::string("Ponteiro STR");
    //smart pointer de string
    std::unique_ptr<std::string> str(new std::string("Smart pointer string"));

    

    std::cout << *pnum << " - endereço " << &pnum <<std::endl;
    std::cout << *str << " - tamanho" << str->size() << " - endereço" << &str <<std::endl;//exibe o tamanho do ponteiro

    //delete str; //libera espaço alocado dinamicamente

    //delete p; //libera o espaço alocado dinamicamente

    return 0;
}
