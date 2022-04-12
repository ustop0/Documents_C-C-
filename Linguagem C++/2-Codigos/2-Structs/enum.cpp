#include <iostream>
#include <string> //biblioteca de string em c#include "headers/ClUsuario.h" //incluindo cabeçalho da classe usuário



int main() 
{
	//é semelhante a um vetor para armazenar os itens
	enum armas
	{
		fuzil=100, 
		revolver=8, 
		rifle=12, 
		escopeta=1
	};
	
	armas armaSel;
	
	armaSel=fuzil;
	
	std::cout << armaSel << "\n";

  	
  
  	return 0;
} 
