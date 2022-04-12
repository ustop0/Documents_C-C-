#include<iostream>                                                                                                           
#include <string>
#include <vector>
#include <charconv>
   
class Myclass{
	private:
		std::string nome;
		int idade;
      
	public:
		void setNome(const std::string& nome){ this->nome = nome; }

		void setIdade(int idade){ this->idade = idade; }

		std::string getNome(){ return nome; }

		int getIdade(){ return idade; }

		 ~Myclass()
		 {
			 std::cout << "obj Myclass destruido" << "\n";
		 }
};

class herda: public Myclass //classe de herança
{
    private:
        float salario;
        std::string cargo;

    public: 
		void setSalario(float salario){ this->salario = salario; }

		void setCargo(const std::string& cargo){ this->cargo = cargo; }
		
		float getSalario(){ return salario; }

		std::string getCargo() { return cargo; }

        void imprime()
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
        
        void somaIdadeSalario()
        {
        	float soma = salario + getIdade();
        	std::cout << "\nSoma: " << soma << "\n";
        }
        
        void percorreVector()
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

        ~herda()
        {
            std::cout << "\nobjeto herda destruido" << "\n";
        }
};
  
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
