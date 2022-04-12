#include <iostream>

class Mae {
  public:
    virtual void mensagem(){ //permite usar funções virtuais, fazem com que o polimorfismo funcione corretamente
      std::cout << "eu sou a mãe" << '\n';
    }
};

class Filha : public Mae {
  public:
    void mensagem(){
      std::cout << "eu sou a filha" << '\n';
    }
};

class Neta : public Filha {
  public:
    void mensagem(){
      std::cout << "eu sou a neta" << '\n';
    }
};

void responde( Mae * m ){
  m->mensagem();
}

int main( int argc , char **argv ){

  Mae m;
  Filha f;
  Neta n;

  m.mensagem();
  f.mensagem();
  n.mensagem();
  
  std::cout << "\n---------------------\n";

  responde( &m ); //ponteiro para os objetos da classe
  responde( &f );
  responde( &n );

  return 0;
}

