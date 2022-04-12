
#include <iostream>
#include <string> //biblioteca de string em c++

class Usuario
{
private:
    std::string nome;
    std::string senha;

  public:
    void setNome(std::string nome) {
      this->nome = nome;
    }
    
    void setSenha(std::string senha) {
      this->senha = senha;
    }
    
    ~Usuario() { //destrutor de classe, em faze de testes
    	std::cout << "objeto destruido" << "\n";
    }
    
    std::string getNome() {
      return nome;
    }
    
    std::string getSenha() {
      return senha;
    }
};

int main() 
{
	struct sUsuario{
		std::string nome_usuario;
 		std::string senha_usuario;
	};
 	
 	struct sUsuario user;
 	
	std::cout << "\nDigite o nome de usuário: ";
	std::cin >> user.nome_usuario;
  	std::cout << "\nDigite a sua senha: ";
  	std::cin >> user.senha_usuario;
  	
  	Usuario objusuario; //objeto usuário
  	objusuario.setNome(user.nome_usuario);
  	objusuario.setSenha(user.senha_usuario);
  	
  	//teste de métodos acessores
  	std::cout << objusuario.getNome() << "\n";
  	std::cout << objusuario.getSenha() << "\n";
  	
  	return 0;
} 

