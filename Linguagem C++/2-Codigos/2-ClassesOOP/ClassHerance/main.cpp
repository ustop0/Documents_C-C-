#include <iostream>                                                                                        
#include <string>
#include <vector>
#include <charconv>
#include "headers/Myclass.h"
#include "headers/herda.h"

int main()
 {
	std::string nome, cargo;
	int idade;
    float salario;

	std::cout << "\nDigite nome: ";
	std::cin >> nome;
	std::cout << "\nDigite idade: ";
	std::cin >> idade;
	std::cout << "\nDigite salario: ";
	std::cin >> salario;
	std::cout << "\nDigite cargo: ";
	std::cin >> cargo;
	 
	//Myclass *obj = new Myclass();
    herda *obj2 = new herda();
          
	obj2->setNome(nome);
	obj2->setIdade(idade);
    obj2->setSalario(salario);
    obj2->setCargo(cargo);


	std::cout << "\nNome: " << obj2->getNome() << "\n";
	std::cout << "\nIdade: " << obj2->getIdade() << "\n";
	std::cout << "\nSalario: " << obj2->getSalario() << "\n";
	std::cout << "\nCargo: " << obj2->getCargo() << "\n";
	 
	std::cout << "---FUNCAO IMPRIMIR---" << std::endl;

    obj2->imprime();
    obj2->somaIdadeSalario();
    obj2->percorreVector();

	//delete obj;
	delete obj2;
	 
	return 0;
 }        
