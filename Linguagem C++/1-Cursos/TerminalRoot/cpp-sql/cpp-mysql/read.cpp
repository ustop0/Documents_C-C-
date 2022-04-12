#include <iostream>
#include <mysql.h>

int main()
{	
	
	MYSQL *connect;                                                    
	connect = mysql_init(NULL); //verifica se sistema inicializou o mysql                      

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
		
		mysql_query(connect, "select * from crudcpp");
		
		unsigned int i = 0;
		res_set = mysql_store_result(connect);
		//unsigned int numrows = mysql_num_rows;
		
		while( ( row = mysql_fetch_row(res_set) ) != NULL)
		{
			std::cout << row[0] << "|" << row[1] << "|" << row[2] << "|" << "\n";
		}
                                                         
		mysql_close(connect); //fecha a conexao com o banco após a operação   
		
		return 0;
		
		} 
	catch(...)
	{
		std::cout << "Falha ao conectar" << "\n";
	}
}
