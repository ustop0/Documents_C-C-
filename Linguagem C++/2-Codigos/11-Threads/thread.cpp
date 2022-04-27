#include <string>
#include <iostream>
#include <thread>

//adicionar -pthread para compilar

void task1(std::string msg)
{
	std::cout << "Uma thread com mensagem: " << msg << std::endl;
}

int main()
{
	std::thread t1(task1, "23234");

	std::cout << "Rodando" << "\n";

	t1.join();
}
