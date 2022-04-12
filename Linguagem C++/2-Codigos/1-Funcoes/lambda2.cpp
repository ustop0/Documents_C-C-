#include <iostream>
//#include <iostream>
#include <string>


void imprime()
{
    std::cout << "Imprimindo algo" << "\n";
}


//função chamando outra função
int soma(){
    imprime();
    int num1 = 5, num2 = 10;
	int resultado = num1 + num2;
    return resultado;
}


//declarando e usando uma função lambda dentro de uma função
void exec()
{
    std::cout << "Função exec" << std::endl;
    auto interna=[]() -> void
    {
        std::cout << "Função interna a função exec" << std::endl;
        std::cout << "Quebrando linha para deixar menos confuso\n" << std::endl;
        std::cout << "Função soma dentrao da função interna: \n" << soma() << std::endl;
    };

    interna();
    return interna();
}

void func(int num)
{
	auto funcLambda=[](int y) -> int
	{
		int resultado = 1 + y;
		return resultado;
	};
	auto var = funcLambda(num);
	std::cout << "Retornando a função : " << var << "\n";
}

int main()
{
    
    std::cout << "\n" << std::endl;

    auto maior=[]() -> void
    {
        std::cout << "Chamando a função soma: " << soma() << std::endl;
        imprime();
	};

    maior();

    std::cout << "\n" << std::endl;

    exec();

	//chamando um função com outra função lambda que vai receber o parametro dela
	std::cout << "\n" << std::endl;

	int n1;
	std::cout << "Digite um Número inteiro: ";
	std::cin >> n1;
	
	func(n1);
	
	//criando função lambda dentro de outra função lambda
	std::cout << "\n" << std::endl;

	auto lambdaLambda=[]() -> void
    {
        std::cout << "Definindo uma função lambda dentro de outra função lambda: " << "\n";
        auto interna=[]() -> void
       	{
       		std::cout << "Função lambda dentro de função lambda" << "\n";
       	};
       	//chamando interna
       	interna();
	};
	
	lambdaLambda();	

    return 0;
}
