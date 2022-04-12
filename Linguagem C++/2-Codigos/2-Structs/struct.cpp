#include <iostream>
#include <cstring>

int main()
{
	typedef struct _usuario
	{
		//construtor da struct
		_usuario()
		{
			memset( nome, '\0', 31 ); //define um valor para inicializar a string
			strcpy( nome, "Nome Usuário" );
			idade = 22;
		}
		
		char nome[30 + 1];
		int idade;

		//destrutor da struct
		~_usuario()
		{
			std::cout << "Destrutor da struct" << std::endl;
		}
	}Usuario;

	//alocação automática
	//Usuario u;
	//alocação dinâmica
	Usuario *u = new Usuario();

	std::cout << "Nome: " << u->nome << std::endl;
	std::cout << "Idade: " << u->idade << std::endl;

	delete u;

	std::cout << std::endl;

	return 0;
}
