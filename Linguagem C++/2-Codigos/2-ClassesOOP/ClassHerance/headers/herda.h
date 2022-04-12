#ifndef __HERDA_H_ //inicio do pré-processamento
#define __HERDA_H_
                                                                                                          
#include <iostream>
#include <string>
#include <vector>
#include <charconv>
#include "Myclass.h"

class herda: public Myclass //classe de herança
{
    private:
        float salario;
        std::string cargo;

    public: 
		void setSalario(float salario);

		void setCargo(const std::string& cargo);
		
		float getSalario();

		std::string getCargo();

        void imprime();
        
        void somaIdadeSalario();

        void percorreVector();
      
        ~herda();
        
};

#endif //fim do pré-processamento
