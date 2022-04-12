#include <iostream>
#include <mysql.h>
#include <cstring> //transformar string em char

int main()
{	
	
	MYSQL *connect;                                                    
	connect = mysql_init(NULL); //verifica se sistema inicializou o mysql     
	std::string create, nome, mail;                 

	//instancia da conexao com o banco                                 
	connect = mysql_real_connect(connect, "localhost", "root", "12meurex", "cpp", 0, NULL, 0);

	try{
		if( !connect ) //se não estiver conectado                            
		{                                                                  
			throw connect;
			return 1;        
		}                                                                  

		MYSQL_RES *res_set; //armazenar resposta da consulta
		MYSQL_ROW row; //pega as saidas
		
		std::cout << "Informe o nome: ";
		std::getline(std::cin, nome);
		std::cout << "Informe o email: ";
		std::getline(std::cin, mail);
		
		create =  "INSERT INTO crudcpp VALUES(NULL, '" + nome + "', '" + mail + "')"; 
		
		bool query_state = mysql_query( connect, create.c_str() ); //convertendo para string
		
		if( !query_state ) //testa se foi possível inserir os dados na tabela
		{
			std::cout << "Dados inseridos com sucesso" << "\n";
		}
		else
		{
			std::cout << "Erro ao inserir os dados: " << mysql_error(connect) << "\n"; //permite ver o erro
		}
		
		unsigned int i = 0;
		res_set = mysql_store_result(connect);
		//unsigned int numrows = mysql_num_rows;
		
		/*while( (row = mysql_fetch_row(res_set)) != NULL)
		{
			std::cout << row[0] << "|" << row[1] << "|" << row[2] << "|" << "\n";
		}*/
                                                         
		mysql_close(connect); //fecha a conexao com o banco após a operação   
		return 0;
		
		} 
	catch(...)

		std::cout << "Falha ao conectar" << "\n";
	}
	
	return 0;
}
