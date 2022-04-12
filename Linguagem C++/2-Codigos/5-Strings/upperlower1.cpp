#include <iostream>
#include <string> //para strings
#include <algorithm>

//Maiusculo e Minusculo

int main()
{
   	//convertendo para lowercase
	std::string  line = "THIS IS MY STRING";
	std::cout << "Original: " << line << "\n";
	std::transform(line.begin(), line.end(), line.begin(), ::tolower);
    std::cout << "Convertido para lower case: " << line << "\n";

	std::cout << "\n";
	//convertendo para uppercase
	line = "this is my string";
	std::cout << "Original: " << line << "\n";
	std::transform(line.begin(), line.end(), line.begin(), ::toupper);
    std::cout << "Convertido para upper case: " << line << "\n";


    return 0;
}
