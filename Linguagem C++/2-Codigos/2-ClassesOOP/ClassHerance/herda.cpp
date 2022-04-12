#include "headers/herda.h"
   
void herda::setSalario(float salario){ this->salario = salario; }

void herda::setCargo(const std::string& cargo){ this->cargo = cargo; }

float herda::getSalario(){ return salario; }

std::string herda::getCargo() { return cargo; }

void herda::imprime()
{
	int teste = getIdade();
	std::string valor = std::to_string(salario); //convertendo float ou int para string
	bool cond = true;
	std::string recebeBool = std::to_string(cond); //convertendo bool para string
	recebeBool += cargo; //concatenando strings
	std::cout << "Variavel teste: " << teste << "\n";
	std::cout << "Variavel valor: " << valor << "\n";
	std::cout << "Variavel cond: " << cond << "\n";
	std::cout << "Variavel recebeBool: " << recebeBool << "\n";			
	std::cout << "Cargo: " << cargo << "Nome:" << getNome() << "\n";
}

void herda::somaIdadeSalario()
{
	float soma = salario + getIdade();
	std::cout << "\nSoma: " << soma << "\n";
}

void herda::percorreVector()
{
	float recebe = getIdade();
	
	std::vector<float>vector;
	vector.push_back(recebe);
	vector.push_back(5);
	vector.push_back(400);

	for(int iter = 0; iter < vector.size(); iter++) // percorrendo com iterator
	{
		std::cout << "\nPercorrendo vector: " << vector[iter] << "\n";
	}
}

herda::~herda()
{
    std::cout << "\nobjeto herda destruido" << "\n";
}

