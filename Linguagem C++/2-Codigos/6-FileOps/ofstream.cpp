#include <iostream>
#include <fstream> //manipulação de arquivos

//ofstream saída de informações do sistema para o arquivo
//ifstream entrada de informações de um arquivo no computador
//fstream pode ser configurado como entrada e saída


int main()
{
    std::ofstream arquivo;

    //cria ou abre o arquivo, ios::app -> posiciona o cursor no final do arquivo, armazenando o próximo conteúdo
    arquivo.open("testeArquivo.txt", std::ios::app);
    
    arquivo;

    //insere conteudo no arquivo;
    arquivo << "Curso CFB\n";
    arquivo << "Curso incrivel\n";

    //fecha o arquivo após a operação, liberando memória da aplicação
    arquivo.close();

    return 0;
}
