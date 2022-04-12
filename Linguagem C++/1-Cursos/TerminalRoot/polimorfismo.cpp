#include <iostream>

class Pessoa{
  public:
    int num(){
      return 10;
    }

    int num( int num ){
      return num;
    }
};

class Turma : public Pessoa{
  public:
    int num(){
      return 50;
    }

    int num( int num ){
      return num;
    }

};



int main( int argc , char **argv ){

  Pessoa p;
  Turma t;

  std::cout << "num() de Pessoa é: " << p.num() << '\n';
  std::cout << "num( int num ) de Pessoa é: " << p.num( 256 ) << '\n';
  std::cout << "num() de Turma é: " << t.num() << '\n';
  std::cout << "num(i int num) de Turma é: " << p.num( 128 ) << '\n';

  return 0;
}

