#ifndef __CLIENTE_H_ //inicio do pré-processamento
#define __CLIENTE_H_

#include <string> //biblioteca de string em c++

class Cliente
{
	private: //atributos(variáveis)
		std::string nome_cliente;
		int cpf_cliente;//função de validação de cpf, ver numero de digitos
		std::string endereco_cliente;
		int telefone_cliente;
	   	//dados do carro do cliente
		std::string marca_carro; //verificar necessidade, ou se pega automático do banco
		std::string modelo_carro;
		std::string chassi_carro; //vai letra e nome, ver numero de digitos
		int ano_carro;
		std::string placa_carro; //funcao validador de placas talvez?, ver numero de digitos

	public: //métodos
		//setters
		void setNomeCliente(const std::string& nome_cliente);
		void setCpfCliente(int cpf_cliente);
		void setEnderecoCliente(const std::string& endereco_cliente);
		void setTelefoneCliente(int telefone_cliente);
		void setMarcaCarro(const std::string& marca_carro);
		void setModeloCarro(const std::string& modelo_carro);
		void setChassiCarro(const std::string& chassi_carro);
		void setAnoCarro(int ano_carro);
		void setPlacaCarro(const std::string& placa_carro);
		
		//getters
		std::string getNomeCliente();
		int getCpfCliente();
		std::string getEnderecoCliente();
		int getTelefoneCliente();
		std::string getMarcaCarro();
		std::string getModeloCarro();
		std::string getChassiCarro();
		int getAnoCarro();
		std::string getPlacaCarro();
		
		~Cliente();//destrutor de classe, em faze de testes
};

#endif //fim do pré-processamento
