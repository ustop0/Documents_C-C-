#include <iostream>

using namespace std;

int main()
{
	int num1 = 67;
	short int num2 = 25;
	long int num3 = 15;

	
	cout << "Tamanho num1: " << sizeof(num1) << endl;
	cout << "Tamanho num2: " << sizeof(num2) << endl;
	cout << "Tamanho num3: " << sizeof(num3) << endl;
	
	
	cout << "Variável 'short' ocupa           : " << sizeof(short) << " bytes" << endl;
    cout << "Variável 'unsigned short' ocupa  : " << sizeof(unsigned short) << " bytes" << endl;
    cout << "Variável 'unsigned int' ocupa    : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Variável 'long' ocupa            : " << sizeof(long) << " bytes" << endl;
    cout << "Variável 'unsigned long' ocupa   : " << sizeof(unsigned long) << " bytes" << endl;
	
	

	return 0;
}
