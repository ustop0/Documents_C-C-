#ifndef __MYCLASS_H_ //inicio do pré-processamento
#define __MYCLASS_H_

#include <iostream>
#include <string>

class Myclass{
	private:
		std::string nome;
		int idade;
      
	public:
		void setNome(const std::string& nome);

		void setIdade(int idade);

		std::string getNome();

		int getIdade();

		~Myclass(); 
};	

#endif //fim do pré-processamento
