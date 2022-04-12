#include <iostream>
#include <vector>
#include <iterator>


//usando iteratos com vectors
int main()
{
    std::vector<float> vet1 = {1,11,7,9};
    std::vector<float> vet2 = {7,8,7};
    std::vector<float>::iterator it1, it2;
    
    for(it1=vet1.begin(); it1!=vet1.end(); it1++) //percorrendo o vetor1 com o iterator1
    {
        std::cout << "Percorrendo o vector com iterator: " << *it1 << "\n";
    }

    std::cout << "\n\n";

    it1 = vet1.begin();
    it2 = vet1.end() -1 ;
    
     std::cout << "Primeiro elemento: " << *it1 << "Ultimo elemento: " << *it2 <<"\n";

    advance(it1,2); //avançando dois elementos de vetor com o iterator
    std::cout << "Terceiro elemento: " << *it1 << "\n";
    advance(it2,-1); //voltando um elemnto elementos de vetor com o iterator
    std::cout << "Penultimo elemento: " << *it2 << "\n";
    
    std::cout << "Valores entre it1 e it2: " << distance(it1,it2) - 1 << "\n";//valores entre os dois iteradores
	std::cout << *it1 << " - Antes: " <<  *prev(it1) << " - Depois: "<< *next(it1)<< "\n";

    return 0;
}
