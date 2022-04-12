#include <iostream>
#include <cctype>
#include <cstring>

//verificar se um caracter é maiusculo ou minusculo
// function to toggle cases of a string
void toggle(std::string& str)
{
    int length = str.length();
    for (int i = 0; i < length; i++) 
    {
        int c = str[i];
        if (islower(c))
        {
            str[i] = toupper(c);
        }
        else if (isupper(c))
        {
            str[i] = tolower(c);
        }       
    }
}

int main()
{
    char x;
    std::cout << "\nDigite um caracter: ";
    std::cin >> x;
    if (isupper(x))
    {
        std::cout << "Uppercase" << "\n";
    }
    else
    {
        std::cout << "Not uppercase." << "\n";   
    }
    
    
    char y;
    std::cout << "\nDigite um caracter: ";
    std::cin >> y;
    if (islower(y))
    {
        std::cout << "Lowercase" << "\n";
    }
    else
    {
        std::cout << "Not Lowercase." << "\n";   
    }
    
    std::cout << "\n";
    //---------------------------------------------------------------------------//
    //verificando e convertendo
    std::string str = "GeekS";
    toggle(str); //função que verifica e converte
    std::cout << "String convertida: " << str << "\n";
     
    return 0;
}
