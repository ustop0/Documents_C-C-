#include <iostream>
#include <string>
#include <memory>

class Myclass
{
	private:
		std::string nome;
		int idade;
		
	public:
		void setNome(const std::string& nome)
		{
			this->nome = nome;
		}
		
		void setIdade(int idade)
		{
			this->idade = idade;
		}
		
		~Myclass()
		{
			std::cout << "Objeto destruido" << "\n";
		}
		
		std::string getNome()
		{
			return nome;
		}
		
		int getIdade()
		{
			return idade;
		}

};


int main()
{
	std::string nome;
	int idade;
	
	std::unique_ptr<Myclass> obj(new Myclass());

	std::cout << "\nDigite o seu nome: ";
	std::cin  >> nome;
	std::cout << "\nDigite a sua idade: ";
	std::cin  >> idade;
	
	obj->setNome(nome);
	obj->setIdade(idade);
	
	std::cout << "Seu nome é: " << obj->getNome() << "\n";
	std::cout << "Sua idade é: " << obj->getIdade() << "\n";
	
	//delete obj;
	
	return 0;
}
