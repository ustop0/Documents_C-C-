#ifndef __USUARIO_H_ //inicio do pré-processamento
#define __USUARIO_H_

#include <string> //biblioteca de string em c++

class Usuario
{
	private: //atributos(variáveis)
		std::string nome;
		std::string senha;

	public: //métodos
		//setters
		void setNome(const std::string& nome);
		void setSenha(const std::string& senha);
		
		//getters
    	std::string getNome();
    	std::string getSenha();
    
    	~Usuario();//destrutor de classe, em faze de testes
};

#endif //fim do pré-processamento
