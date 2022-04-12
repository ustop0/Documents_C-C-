#include <iostream>
#include <string> //biblioteca de string em c++
#include "headers/ClUsuario.h"//incluindo cabeçalho da classe usuario
#include "headers/ClCliente.h" //incluindo cabeçalho da classe cliente

int main() 
{
	
	//USUARIO
	std::cout << "----Testando classe usuario----"<< "\n\n";
 	std::string nome_usuario;
 	std::string senha_usuario;
 	
	std::cout << "\nDigite o nome de usuário: ";
	std::cin >> nome_usuario;
  	std::cout << "\nDigite a sua senha: ";
  	std::cin >> senha_usuario;
  	
  	//Usuario objusuario; //objeto usuário
  	Usuario *objusuario = new Usuario();
  	objusuario->setNome(nome_usuario);
  	objusuario->setSenha(senha_usuario);
  	
  	//teste de métodos acessores
  	std::cout << objusuario->getNome() << "\n";
  	std::cout << objusuario->getSenha() << "\n";
  	
  	delete objusuario;
  	
  	//CLIENTE
  	std::cout << "----Testando classe cliente----"<< "\n\n";
 	std::string nome_cliente;
    int cpf_cliente;
    std::string endereco_cliente;
    int telefone_cliente;
   	//dados do carro do cliente
    std::string marca_carro;
    std::string modelo_carro;
    std::string chassi_carro;
    int ano_carro;
    std::string placa_carro;
 	
	std::cout << "\nDigite o nome do cliente: ";
	std::cin >> nome_cliente;
  	std::cout << "\nDigite o cpf do cliente: ";
  	std::cin >> cpf_cliente;
  	std::cout << "\nDigite o endereço do cliente: ";
  	std::cin >> endereco_cliente;
  	std::cout << "\nDigite o telefone do cliente: ";
  	std::cin >> telefone_cliente;
  	std::cout << "\nDigite a marca do carro do cliente: ";
  	std::cin >> marca_carro;
  	std::cout << "\nDigite o modelo do carro do cliente: ";
  	std::cin >> modelo_carro;
  	std::cout << "\nDigite o chassi do carro do cliente: ";
  	std::cin >> chassi_carro;
  	std::cout << "\nDigite o ano do carro do cliente: ";
  	std::cin >> ano_carro;
  	std::cout << "\nDigite a placa do carro do cliente: ";
  	std::cin >> placa_carro;
  	
  	Cliente *objcliente = new Cliente(); //objeto usuário
  	objcliente->setNomeCliente(nome_cliente);
  	objcliente->setCpfCliente(cpf_cliente);
  	objcliente->setEnderecoCliente(endereco_cliente);
  	objcliente->setTelefoneCliente(telefone_cliente);
  	objcliente->setMarcaCarro(marca_carro);
  	objcliente->setModeloCarro(modelo_carro);
  	objcliente->setChassiCarro(chassi_carro);
  	objcliente->setAnoCarro(ano_carro);
  	objcliente->setPlacaCarro(placa_carro);
  	
  	//teste de métodos acessores
  	std::cout << objcliente->getNomeCliente() << "\n";
  	std::cout << objcliente->getCpfCliente() << "\n";
  	std::cout << objcliente->getEnderecoCliente() << "\n";
  	std::cout << objcliente->getTelefoneCliente() << "\n";
  	std::cout << objcliente->getMarcaCarro() << "\n";
  	std::cout << objcliente->getModeloCarro() << "\n";
  	std::cout << objcliente->getChassiCarro() << "\n";
  	std::cout << objcliente->getAnoCarro() << "\n";
  	std::cout << objcliente->getPlacaCarro() << "\n";
  	
  	delete objcliente;
  	
  	return 0;
} 
