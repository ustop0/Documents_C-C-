#include <iostream>
#include <sqlite3.h> //biblioteca sqlite

//para compilar o projeto >> g++ arquivo.cpp -l sqlite3 -o arquivo

int main( int argc , char **argv ){

  sqlite3 *DB; //recebendo classe sqlite3
  bool connect = sqlite3_open("banco_de_dados.db", &DB); //abre o banco de dados do sqlite (passar o diretorio da pasta)

  if( connect ) //testa a conexao
  {
  	//std::cerr, informa erros
  	//sqlite3_errmsg(variavel), exibe o tipo de erro
    std::cerr << "Erro ao conectar ao banco de dados." << sqlite3_errmsg(DB) << '\n';
    return 1; //para a execução
  }
  else
  {
    std::cout << "Conectado com SUCESSO ao Banco de Dados!" << '\n';
    sqlite3_close( DB );
  }

  return 0;
}

