#include <iostream>              
#include <string>                
                                
int main()                       
{                                
    std::string texto = "wagner";                                     
                                
    try                          
	{                            
	  //std::cout << "byte: " << texto.at(10) << std::endl;         
	  texto.resize( texto.max_size() + 1 );                         
	}                            
	catch( std::out_of_range &mensagem )                              
	{                            
	 std::cout << "out_of_range: " << mensagem.what() << std::endl;
	}                                                       
	catch( std::exception &e )   
	{                            
	  //std::exception captura o erro  e what() exibe o erro
	  std::cout << "erro: " << e.what() << std::endl;
	}                            
	
	
	/*
	catch( ... ) //erro genérico
	{
		std::cout << "Erro: " << std::endl;
	}                         
	*/	
		                       
	std::cout << std::endl;      	                       
	return 0;                    
}  
