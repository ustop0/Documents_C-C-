#include <iostream>
#include <string>
#include <list> //biblioteca para trabalhar com listas

//Listas em c++
int main() 
{
	std::list<int> aula;
	
	int tam;
	
	tam = 10;
	for(int i = 0; i < tam; i++){ 
		aula.push_front(i);//push_front(), insere itens na frente da lista |push_back(), insere atrás da lista
	}
	
	//mostra o tamanh oda lista
	std::cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	//remove os itens da lista pela parte da fre
	tam = aula.size();
	for(int i = 0; i < tam; i++){
		std::cout << aula.front() << "\n";
		aula.pop_front(); //pop_front(), retira os itens pela frente da lista|pop_back(), retira por trás da lista
	}
		
  	return 0;
} 
