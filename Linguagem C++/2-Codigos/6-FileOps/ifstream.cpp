#include <iostream>
#include <fstream> //manipulação de arquivos
#include <string>

//ofstream saída de informações do sistema para o arquivo
//ifstream entrada de informações de um arquivo no computador
//fstream pode ser configurado como entrada e saída


int main()
{
    std::ofstream arquivoS;


    //Abertura de um arquivo,
    arquivoS.open("testeArquivo.txt", std::ios::app);
    
    arquivoS;

    //insere conteudo no arquivo;
    arquivoS << "Curso CFB\n";
    arquivoS << "Curso incrivel\n";

    //fecha o arquivo após a operação, liberando memória da aplicação
    arquivoS.close();

	//----------------------------------------------------------------------

    //entrada de informações do arquivo no programa
    std::ifstream arquivoE;
    std::string linha;
    arquivoE.open("testeArquivo.txt");
    
    //verifica se o arquivo está aberto
    if(arquivoE.is_open())
    {
        while(getline(arquivoE, linha)) //getline permite ler linha por linha do arquivo
        {
            std::cout << linha << "\n";
        }
        //fecha o arquivo após a operação, liberando memória da aplicação
        arquivoE.close();
    } 
    else
    {
        std::cout << "Não foi possível ler o arquivo" << "\n";

    }


    return 0;
}
