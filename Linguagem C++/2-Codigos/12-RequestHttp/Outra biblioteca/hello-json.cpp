#include <iostream>
#include <nlohmann/json.hpp>

int main(){
  nlohmann::json j;
  j.push_back("Hello");
  j.emplace_back("World");
  std::cout << j << '\n';

  //imprime somente o primeiro elemento do json
  std::cout << j[0] << '\n';
}
