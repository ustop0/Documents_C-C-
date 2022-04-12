#include <iostream>

class Pessoa{
  private:
    int idade = 27;
  protected:
    double altura = 1.72;

  public:
    void nome(){
      std::cout << "Marcos Oliveira" << '\n';
    }
    
    int display_idade(){
      return idade;
    }
};

class Habilidades : public Pessoa{
  public:
    void idioma(){
      std::cout << "Português Brasileiro" << '\n';
    }
};

class Dados : public Habilidades{
    public: 
    double display_altura(){
      return altura;
    }
};

int main( int argc , char **argv ){
  Dados dados;
  std::cout << "O nome dele é: ";
  dados.nome();
  std::cout << "A habilidade dele é: ";
  dados.idioma();

  std::cout << "A altura dele é: " << dados.display_altura() << '\n';
  std::cout << "A idade dele é: " << dados.display_idade() << '\n';
  return 0;
}

