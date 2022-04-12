#include <iostream>
#include <string> //biblioteca de string em c++, #include "headers/ClUsuario.h" //incluindo cabeçalho da classe usuário
#include <vector> //vetorers de tamanho variável vector<int> variavel();


int main() 
{
    std::vector<int> vet;

    vet.push_back(6);
    vet.push_back(4);
    vet.push_back(12);

    int tam = vet.size();

    for(int i; i < ta	m; i++){
        std::cout << vet[i] << "\n";
    }
    

 	//std::string nome_usuario;
 	//std::string senha_usuario;
 		
  	return 0;
} 
