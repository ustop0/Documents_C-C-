#include <iostream>
#include <string> //biblioteca de string em c#include "headers/ClUsuario.h" //incluindo cabeçalho da classe usuário


//Structs com métodos e array
struct Carro{
	std::string nome;
	std::string cor;
	int pot;
	int velMax;
	int vel;
	
	void insere(std::string stnome, std::string stcor, int stpot, int stvelMax){
		nome=stnome;
		cor=stcor;
		pot=stpot;
		velMax=stvelMax;
		vel=0;
	}
	
	void mostra(){
		std::cout << "\nNome..............: " << nome << "\n";
		std::cout << "\nCor...............: " << cor << "\n"; 
		std::cout << "\nPotencia..........: " << pot << "\n"; 
		std::cout << "\nVelocidade atual..: " << vel << "\n"; 
		std::cout << "\nVelocidade máxima.: " << velMax << "\n";  
	}
	
	void mudaVel(int mv){
		vel=mv;
		if(vel > velMax){
			vel=velMax;
		}
		if(vel < 0){
			vel=0;
		}
	}

};

int main() 
{
	//declarando um array de uma struct
	Carro *carros=new Carro[5];
	Carro car1, car2, car3, car4, car5;
	
	carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5;
	
	carros[0].insere("tornado", "vermelho", 450, 300);
	carros[1].insere("350z", "vermelho", 450, 300);
	carros[2].insere("skyline", "vermelho", 450, 300);
	carros[3].insere("supra", "vermelho", 450, 300);
	carros[4].insere("m3 e46", "vermelho", 450, 300);
	
	
	for(int i = 0; i < 5; i++){
		carros[i].mostra();
	}

  	
  
  	return 0;
} 
