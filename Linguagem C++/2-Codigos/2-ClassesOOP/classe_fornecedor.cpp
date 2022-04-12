
#include <iostream>
#include <string> //biblioteca de string em c++

//classe dos fornecedores
class Fornecedor
{
private:
	//fornecedor
    std::string nome_fornecedor;//sempre juridico
    int cnpj_fornecedor;//inscrição para fornecimento de peças
    std::string cidade_fornecedor;
	int telefone_fornecedor;
    
  public:
  	//construtor da classe, inicializa a classe
  	//Fornecedor();
  	
  	//setters
  	//ATENÇÃO-considerar passar tipos objetos como std::string por referencia >> const std::string&
    void setNomeFornecedor(const std::string& nome_fornecedor) {//nome fornecedor
    	this->nome_fornecedor = nome_fornecedor;
    }
    
    void setCnpjFornecedor(int cnpj_fornecedor) {//cgc fornecedor
    	this->cnpj_fornecedor = cnpj_fornecedor;
    }
    
    void setCidadeFornecedor(const std::string& cidade_fornecedor) {//cidade fornecedor
    	this->cidade_fornecedor = cidade_fornecedor;
    }
    
    void setTelefoneFornecedor(int telefone_fornecedor) {//telefone fornecedor
    	this->telefone_fornecedor = telefone_fornecedor;
    }
     
    ~Fornecedor() { //destrutor de classe, em faze de testes
    	std::cout << "objeto destruido" << "\n";
    }
    
    //getters
    std::string getNomeFornecedor() { 
      	return nome_fornecedor;
    }
    
    int getCnpjFornecedor() {
    	return cnpj_fornecedor;
    }
    
    std::string getCidadeFornecedor(){
    	return cidade_fornecedor;
    }
    
    int getTelefoneFornecedor(){
    	return telefone_fornecedor;
    }
      
};

int main() 
{
	//testando classe
	std::cout << "----Testando classe fornecedor----"<< "\n\n";
	
 	std::string nome_fornecedor;
 	int cnpj_fornecedor;
 	std::string cidade_fornecedor;
 	int telefone_fornecedor;
 	
	std::cout << "\nDigite o nome do fornecedor: ";
	std::cin >> nome_fornecedor;
  	std::cout << "\nDigite o CNPJ do fornecedor: ";
  	std::cin >> cnpj_fornecedor;
  	std::cout << "\nDigite a cidade do fornecedor: ";
  	std::cin >> cidade_fornecedor;
  	std::cout << "\nDigite o telefone do fornecedor: ";
  	std::cin >> telefone_fornecedor;
  	
  	//objeto fornecedor, criado em forma de ponteiro para alterar o valor diretamente
  	Fornecedor *objfornecedor = new Fornecedor(); //objeto usuário em forma de ponteiro, é preciso usar delete no final
  	objfornecedor->setNomeFornecedor(nome_fornecedor);
  	objfornecedor->setCnpjFornecedor(cnpj_fornecedor);
  	objfornecedor->setCidadeFornecedor(cidade_fornecedor);
  	objfornecedor->setTelefoneFornecedor(telefone_fornecedor);
  	
  	//teste de métodos acessores
  	std::cout << objfornecedor->getNomeFornecedor() << "\n";
  	std::cout << objfornecedor->getCnpjFornecedor() << "\n";
  	std::cout << objfornecedor->getCidadeFornecedor() << "\n";
  	std::cout << objfornecedor->getTelefoneFornecedor() << "\n";
  	
  	//--segundo teste--
  	std::cout << "\nDigite o nome do fornecedor: ";
	std::cin >> nome_fornecedor;
  	std::cout << "\nDigite o CNPJ do fornecedor: ";
  	std::cin >> cnpj_fornecedor;
  	std::cout << "\nDigite a cidade do fornecedor: ";
  	std::cin >> cidade_fornecedor;
  	std::cout << "\nDigite o telefone do fornecedor: ";
  	std::cin >> telefone_fornecedor;
  	
  	objfornecedor->setNomeFornecedor(nome_fornecedor);
  	objfornecedor->setCnpjFornecedor(cnpj_fornecedor);
  	objfornecedor->setCidadeFornecedor(cidade_fornecedor);
  	objfornecedor->setTelefoneFornecedor(telefone_fornecedor);
  	
  	//teste de métodos acessores
  	std::cout << objfornecedor->getNomeFornecedor() << "\n";
  	std::cout << objfornecedor->getCnpjFornecedor() << "\n";
  	std::cout << objfornecedor->getCidadeFornecedor() << "\n";
  	std::cout << objfornecedor->getTelefoneFornecedor() << "\n";
  	
  	//delete destroi o objfornecedor após o seu uso, desalocando a memória
  	delete objfornecedor;
  	
  	return 0;
} 

