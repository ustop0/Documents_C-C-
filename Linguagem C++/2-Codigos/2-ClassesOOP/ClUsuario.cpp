#include <iostream>
#include "headers/ClUsuario.h" //incluindo cabeçalho da classe


//setters
void Usuario::setNome(const std::string& nome) {//Usuario:: coloca o método como membro da classe?
	this->nome = nome;
}
    
void Usuario::setSenha(const std::string& senha) {
	this->senha = senha;
}
    
//getters
std::string Usuario::getNome() {
	return nome;
}
    
std::string Usuario::getSenha() {
	return senha;
}

//destrutor da classe
Usuario::~Usuario() { //destrutor de classe, em faze de testes
	std::cout << "objeto destruido" << "\n";
}
    


