#include <iostream>              
#include <string>                
                                
int main()                       
{                                
	std::string texto = "wagner";                                     
		         
	//throw, criar exception personalizado            
	try                          
	{                            
		if( texto.length() > 1 )
		{
			//throw "Erro no length";
			//throw 10;
			throw std::runtime_error( "ERROR.....");
		}              
	}
	catch(  const int mensagem )
	{
		std::cout << "erro: " << mensagem << std::endl;
	}
	catch( const char *e ) //para strings constantes
	{
		std::cout << "erro: " << e << std::endl;
	}
	catch( std::exception &e )   
	{                            
	  std::cout << "erro: " << e.what() << std::endl;
	} 
                        				                   
	std::cout << std::endl;      	                       
	return 0;                    
}  
