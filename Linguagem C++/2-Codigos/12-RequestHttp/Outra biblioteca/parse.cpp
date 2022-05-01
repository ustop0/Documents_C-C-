#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>

int main(){
  std::ifstream file("./example.json");
  nlohmann::json j;
  file >> j;
  std::cout << j << '\n';

  //imprimindo com formatação
  std::cout << std::endl;
  std::cout << std::setw(2) << j << '\n';
  
  //imprimir somente o conteudo do website
  std::cout << std::endl;
  std::string website = j["website"];
  std::cout << website << '\n';

  //imprimir conteúdo em especifico
  std::cout << std::endl;
  std::string jstr = j["details"]["tutorial"];
  std::cout << jstr << '\n';
}
