#include <iostream>
#include <string>
#include <curl/curl.h>


static size_t WriteCallBack(char *contents, size_t size, size_t nmemb, char *buffer_in)
{
	((std::string*)buffer_in)->append((char*)contents, size * nmemb);
	return size * nmemb;
}


int main()
{
	CURL *curl;
	
	CURLcode res;
	
	//armazena o resultado da requisição
	std::string readBuffer;
	
	curl = curl_easy_init();
	if(curl)
	{
		
		curl_easy_setopt(curl, CURLOPT_URL, "https://jsonplaceholder.typicode.com/posts");
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallBack);
		//CallBack junta as strings e da um append, depois concate na string e retorna o tamanho
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
		
		//executa a requisição
		res = curl_easy_perform(curl);
		
		//limpa o curl no final do if para desalocar a memória
		curl_easy_cleanup(curl);	
		
		std::cout << "O conteudo da requisição é: " << readBuffer << "\n";
	}


	return 0;
}
