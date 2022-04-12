#include <iostream>
#include <string>
#include <stack> //biblioteca para trabalhar com pilhas no c++ 

//Pilhas em c++
int main(){
	
	std::stack<std::string> cartas;
	
	//inserindo itens na pilha
	cartas.push("Rei de copas");
	cartas.push("Rei de espadas");
	cartas.push("Rei de ouros");
	cartas.push("Rei de bastos");//rei de bastos esta no topo da pilha pois foi o último a ser adicionado
	
	//Verifica se a pilha esta vazia, empty()
	if(cartas.empty()){
		std::cout << "Pilha vazia\n\n";
	}else{
		std::cout << "Pilha com cartas\n\n";
	}
	
	std::cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	std::cout << "Carta do topo: " << cartas.top() << "\n";//mostra a carta que esta no topo
	
	//removendo itens da pilha
	cartas.pop(); //nesse caso ele ira retirar o elemento do topo(Rei de bastos)
	
	std::cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	std::cout << "Carta do topo: " << cartas.top() << "\n";//mostra a nova carta do topo
	
	
	//zerar todos os elementos da pilha
	while(!cartas.empty()){
		cartas.pop();
	}
	
	std::cout << "Tamanho da pilha: " << cartas.size() << "\n";
  
  	return 0;
} 
