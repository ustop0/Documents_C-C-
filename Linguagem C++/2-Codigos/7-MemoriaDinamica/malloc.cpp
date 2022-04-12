#include <iostream>
#include <stdlib.h>

//alocação de memória dinamica
//evita que seja utilizado um espaço de memória inadequado, evitando erros
int main() 
{

	char *vetor;
	
	//malloc com sizeof e informamos o tipo da variavel para alocarmos a quantidade de memória adequada para ela
	//(char *) é type casting
	vetor = (char *) malloc(sizeof(char) + 1); //+ 1 para garantir o caracter de escape do vetor/array
	
	std::cout <<"\ndigite uma palavra: ";
	std::cin >> vetor;
	
  	std::cout << vetor << "\n";

  
  	
  	return 0;
} 
