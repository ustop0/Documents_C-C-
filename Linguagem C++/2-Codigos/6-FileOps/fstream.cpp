#include <iostream>
#include <fstream> //manipulação de arquivos
#include <string>
#include <cstdlib> //para usar usar comandos do sistema operacional

//ofstream saída de informações do sistema para o arquivo
//ifstream entrada de informações de um arquivo no computador
//fstream pode ser configurado como entrada e saída


int main()
{
    std::fstream arquivo;
    char opc='s';
    std::string nome;
    
    //std::io::out -> dado inserido no sistema vai ser gravado no arquivo
    arquivo.open("testeArquivo2.txt", std::ios::out|std::ios::app);
    
    while((opc == 's') || (opc == 'S'))
    {
    	std::cout << "Digite um nome: ";
    	std::cin >> nome;
    	arquivo << nome << "\n";
   
    	std::cout << "\nDigitar um novo nome?[s/n] ";
    	std::cin >> opc;
    	system("clear");
    }

	//fechando o arquivo par aliberar memória
	arquivo.close();

	//-------------------------------------------------------------------------------------
	
	//std::io::in -> o sistema lê o dado do arquivo
	arquivo.open("testeArquivo2.txt", std::ios::in);
	
	std::cout << "Nomes digitados: " << "\n";
	
	std::string linha;
	//verifica se o arquivo está aberto e lê todo o seu conteúdo
	if(arquivo.is_open())
	{
		while(getline(arquivo, linha))
		{
			std::cout << linha << "\n";
		}
	}
	else
	{
		std::cout << "Não foi possível abrir o arquivo" << "\n";
	}
	
    return 0;
}
