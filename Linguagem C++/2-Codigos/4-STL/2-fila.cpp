#include <iostream>
#include <string>
#include <queue> //biblioteca para trabalhar com filas

//Filas em c++
int main() 
{
	std::queue<std::string> cartas;
	
	//inserindo itens na fila
	cartas.push("Rei de copas");//primeiro a entrar é o primeiro a sair
	cartas.push("Rei de espadas");
	cartas.push("Rei de ouros");
	cartas.push("Rei de bastos");
	
	
	std::cout << "Tamanho da fila: " << cartas.size() << "\n";
	std::cout << "Primeira carta: " << cartas.front() << "\n";
	std::cout << "Ultima carta: " << cartas.back() << "\n";
	
	//zerar todos os elementos da fila
	while(!cartas.empty()){
		std::cout << "Primeira carta: " << cartas.front() << "\n";//mostra a carta que esta na frente da fila
		cartas.pop(); //remove carta que está na frente da fila
	}
	

  	return 0;
} 
