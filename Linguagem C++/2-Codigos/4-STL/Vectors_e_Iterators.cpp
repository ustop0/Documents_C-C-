#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::cout << "\n-----APRENDENDO VECTORS-----" << "\n\n";
	//COMO USAR VECTORS
    std::vector<int> meuvector1;
    
    // testa se o vetor está vazio
    if( meuvector1.empty() )
    {  
    	std::cout << "Vetor vazio!" << std::endl;
  	}
  	else 
  	{
    	std::cout << "Vetor com elementos!" << std::endl;
    }
    
    meuvector1.push_back(7); // inclue no fim do vetor um elemento
  	meuvector1.push_back(11);
  	meuvector1.push_back(2006);
  	
  	
  	// vai imprimir três elementos {7, 11, 2006}
  	for( int i = 0; i < meuvector1.size(); i++ )
  	{
    	std::cout << "Imprimindo o vetor...: " << meuvector1[i] << std::endl;
    }
    
    std::cout << std::endl;
  	meuvector1.pop_back();  // retira o último elemento


	// agora, só vai imprimir dois {7, 11}
  	for( int i = 0; i < meuvector1.size(); i++ )
  	{
    std::cout << "Meu vetor, de novo...: " << meuvector1[i] << "\n\n";
    }
    
    //------------------------------------------------------------------------
    
    std::cout << "-----APRENDENDO ITERADORES-----" << "\n\n";
    //COMO USAR ITERATORS
    std::vector<int> meuvector2;  // cria um vetor de inteiros vazio
  	std::vector<int>::iterator j;  // cria um iterador de inteiros

	meuvector2.push_back(7); // inclue no fim do vetor um elemento
	meuvector2.push_back(11);
	meuvector2.push_back(2006);

	// vai imprimir três elementos {7, 11, 2006}
	for( j = meuvector2.begin(); j != meuvector2.end(); j++ )
	std::cout << "Imprimindo o vetor...: " << *j << std::endl;

	std::cout << std::endl;
	// insere 55 como segundo elemento, deslocando os demais para a próxima posição
	meuvector2.insert( meuvector2.begin() + 1, 55);

	// agora, imprimir quatro elementos {7, 55, 11, 2006}
	for( j = meuvector2.begin(); j != meuvector2.end(); j++ )
	std::cout << "Inseri no meio do vetor..: " << *j << std::endl;

	std::cout << std::endl;
	// retira 11 da lista (terceira posição)
	meuvector2.erase( meuvector2.begin() + 2);

	// agora, tem que imprimir três de novo {7, 55, 2006}
	for( j = meuvector2.begin(); j != meuvector2.end(); j++ )
	std::cout << "Retirei no meio do vetor..: " << *j << std::endl;

	meuvector2.clear();  // limpa todo o vetor

    return 0;
}

