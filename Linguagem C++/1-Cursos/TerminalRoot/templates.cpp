#include <iostream>


//templates permitem que a classe lide com os tipos de variáveis de forma dinâmica
template <class T>
class Stack {
  public:
    void pilha( T array, int max ){
        int i = {0};

        while( i < max ){
          std::cout << "Os elementos do array são: " << array[i] << '\n';
          ++i;
        }
    }
};

int main( int argc , char **argv ){
  Stack<const int*> s;
  //char marray[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  int marray[] = {11, 17, 13, 8, 2, 12, 2, 4};
  int max = sizeof( marray ) / sizeof( marray[0] );
  int * pmarray = marray;
  s.pilha( marray, max );
  return 0;
}

