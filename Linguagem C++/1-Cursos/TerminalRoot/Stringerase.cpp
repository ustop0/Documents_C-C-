#include <iostream>

//erase, limpa a string até a posição definida

int main( int argc , char **argv ){
  std::string frase = "Eu sou o Marcos .";
  int posicao = frase.find(".");
  //std::cout << frase.erase( posicao ) << '\n';
  
  //while( posicao != std::string::npos ){
  //  frase.replace( posicao, 1, "-" );
  //  posicao = frase.find( " ", posicao + 1 );
  //}
  //std::cout << frase << '\n';

  std::cout << frase << '\n';
  std::cout << frase.insert( posicao, "Oliveira " ) << '\n';

  return 0;
}

