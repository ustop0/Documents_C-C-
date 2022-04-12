#include <iostream>

//find encontra posições de caracteres

int main( int argc , char **argv ){
  std::string frase = "dia: A luz do dia me faz feliz todo dia .";
  // rfind() pesquisa na string - de trás para frente( da direita para esquerda, r de right );
  // find() - encontra a posição do caracter.

  //std::cout << "A posição do caracter '.': é " << frase.find(".") << '\n'; 
  std::cout << "A posição da palavra 'dia': é " << frase.find("dia") << '\n'; 
  std::cout << "A posição da rpalavra 'dia': é " << frase.rfind("dia") << '\n'; 
  std::cout << "A posição da 1º ocorrencia 'dia': é " << frase.find_first_of("dia") << '\n'; 
  std::cout << "A posição da última ocorrencia 'dia': é " << frase.find_last_of("dia") << '\n'; 
  std::cout << "A posição da última ocorrencia 'dia': é " << frase.find_first_not_of("dia") << '\n'; 

  return 0;
}

