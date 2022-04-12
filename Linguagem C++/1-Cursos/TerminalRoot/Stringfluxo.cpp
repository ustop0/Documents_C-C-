#include <iostream>

//manipulando strings

using std::cout;
using std::endl;
using std::string;

void qtd_char( string & );

int main( int argc , char **argv ){

  string str1 = "Minha corda legal";
  string str2 = "Minha corda beleza";
  //int result = str1.compare( 0, 5, str2, 0, 5 );

  //cout << ( str1 == str2 ? "Método que conhecemos: SIM, são iguais!" : "Método que conhecemos: NÃO, é diferente." ) << endl;
  //cout << ( result == 0 ? "compare(): SIM, são iguais!" : "compare(): NÃO, é diferente." ) << endl;

  //str1.swap( str2 );
  //cout << "O conteúdo de str1 é: " << str1 << endl;
  qtd_char( str1 );

  return 0;
}

void qtd_char( string &str ){
    cout << "capacity: " << str.capacity() << endl; 	//capacidade da string recebida
    cout << "size: " << str.size() << endl; 			//ver tamanho da string recebida
    cout << "length: " << str.length() << endl; 		//comprimento da string recebida
    cout << "empty: " << str.empty() << endl; 			//testa se a string está vazia
    str.resize( str.length() + 10 ); 					//redimensionando o tamanho da string
    cout << "size: " << str.size() << endl; 			//ver tamanho da string recebida
    str += "abcde"; 									//concatenando strings
    cout << "size: " << str.size() << endl; 			//ver tamanho da string recebida
    cout << "capacity: " << str.capacity() << endl; 	//capacidade da string recebida
    cout << "length: " << str.length() << endl;			//comprimento da string recebida
}

