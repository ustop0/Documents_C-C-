#include "headers/Myclass.h"


void Myclass::setNome(const std::string& nome){ this->nome = nome; }

void Myclass::setIdade(int idade){ this->idade = idade; }

std::string Myclass::getNome(){ return nome; }

int Myclass::getIdade(){ return idade; }

Myclass::~Myclass()
{
 std::cout << "obj Myclass destruido" << "\n";
}

