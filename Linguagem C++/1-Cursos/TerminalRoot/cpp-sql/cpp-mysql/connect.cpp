#include <iostream>
#include <mysql.h>

//compilar: g++ arquivo.cpp -L /usr/include/mysql -lmysqlclient -I /usr/include/mysql -o arquivo

int main()
{	
	
	MYSQL *connect;                                                    
	connect = mysql_init(NULL); //verifica se sistema inicializou o mysql                      

	if( !connect ) //se não estiver conectado                            
	{                                                                  
	 std::cout << "O MYSQL não foi inicializado" << "\n";           
	}                                                                  

	//instancia da conexao com o banco                                 
	connect = mysql_real_connect(connect, "localhost", "root", "12meurex', "cpp", 0, NULL, 0); 
		                                                          
	if( connect )                                                        
	{                                                                  
	  std::cout << "conectado com sucesso ao MYSQL" << "\n";         
	}                                                                  
	else                                                               
	{                                                                  
	  std::cout << "Falha ao conectar ao banco de dados" << "\n";    
	}                                                                  
		                                                             
	mysql_close(connect); //fecha a conexao com o banco após a operação   

	return 0;
}
