#include <iostream>
#include <string>


int main()
{
	std::string txt = "String de exemplo para aprender a manipular";

	/**FUNÇÕES PARA REFERENCIA E ACESSO A ELEMENTOS**/
	//retorna o elemento na posição indicada
	std::cout << "Elemento da posição 4 da string: " << txt.at(4) << "\n";	
	
	//alterando e retornando o último elemento da string
	txt.back()='B';
	std::cout << "Último elemento da string: " << txt.back() << "\n";
	
	//alterando e retornando o primeiro elemento da string
	txt.front()='Z';
	std::cout << "Trocando o primeiro elemento da string: " <<  txt.front() << "\n";
	
	
	//percorrendo a string
	int tam=txt.size(); //armazenendo tamanho da string
	for(int i=0; i < tam; i++)
	{
		std::cout << "Percorrendo a string: " << txt[i] << "\n";	
	}
	
	std::cout << "\n\n";
	
	//---------------------------------------------------------------//	
	/**FUNÇÕES MODIFICADORAS DE STRING**/
	txt = "String para ser modificada";
	std::cout << txt << "\n";
	
	//concatenando strings e elementos
	txt += " -elemento concatenado";
	std::cout << "String concatenada: " << txt << "\n";
	std::cout << txt << "\n";
	
	//função para concatenar strings
	txt = "String para ser modificada";
	txt.append(" -string adicionada com append");
	std::cout << "Concatenando com append: " << txt << "\n";
	std::cout << txt << "\n";
	
	//adicionar caracter no final da string, somente um caracter
	txt = "String para ser modificada";
	txt.push_back('W');
	std::cout << "Adicionando caracter no final: " << txt << "\n";
	std::cout << txt << "\n";
	
	//remover último caracter da string, somente um caracter
	txt = "String para ser modificadaW";
	txt.pop_back();
	std::cout << "Removendo ultimo caracter: " << txt << "\n";
	std::cout << txt << "\n";
	
	

	//substituir conteúdo de uma string
	txt = "String a ser substituida";
	txt.assign("Novo conteúdo");
	std::cout << "Substituindo conteúdo: " << txt << "\n";
	std::cout << txt << "\n";
	
	//inserir conteúdo novo em uma string na posição especificada
	txt = "Adicionando";
	txt.insert(11, " -aidicionando em uma posição especifica");
	std::cout << "Conteúdo inserido na posição 11: " << txt << "\n";
	std::cout << txt << "\n";
	
	//remover conteúdo de uma string na posição especificada, de acordo com o numero de caracteres definidos
	txt.erase(11, 8);
	std::cout << "Removendo 8 caracteres na posição 11: " << txt << "\n";
	std::cout << txt << "\n";
	
	
	//substituir uma parte do conteudo da string a partir de uma posição
	txt = "String do replace";
	std::string txt2 = "Javascript";
	txt.replace(15, 3, txt2);
	std::cout << "Substituindo conteúdo da posição 15(3 caracteres): " << txt << "\n";
	std::cout << txt << "\n";
	
	//trocar conteúdo de strings
	txt = "Trocando conteúdo";
	txt2 = "Por este";
	txt.swap(txt2);
	std::cout << txt << "\n";
	std::cout << txt2 << "\n";
	
	
	return 0;
}
