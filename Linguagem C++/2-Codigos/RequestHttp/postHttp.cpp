#include <iostream>
#include <string>
#include <curl/curl.h>

//função que trata os dados de tamanhos variados
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	//retorna o tamanho append e retorna para ser armazenado em uma variável
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

// faz requisições HTTP retornando uma estrutura
int main()
{
    CURL *curl;
    CURLcode res;
    std::string readBuffer;
    std::string body = "{\"mensagem\" : \"aied gosta de programar em c++\"}";

    curl = curl_easy_init();
    if(curl) 
    {
        
        std::string url = "http://www.crawlerweb.com.br/template/tmp/js2.php";

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        struct curl_slist *hs=NULL;
        hs = curl_slist_append(hs, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);

		//enviar o corpo da mensagem
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, body.c_str());
        //enviar o tamanho do corpo também
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, body.length());
        //informa o verbo da requisição
        curl_easy_setopt(curl, CURLOPT_POST, 1);
		
		//função que faz leitura de call back e retorna na variável readBuffer
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        //o valor retornado pelo callback é armazenado em readBuffer
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
		
		//resposta da requisição, codigos como 200 etc...
        res = curl_easy_perform(curl);
        long http_code = 0;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);
        curl_easy_cleanup(curl);
		
		//codigo HTTP
        std::cout << "Código HTTP: " << http_code << "\n";
        //retorno da requisição
        std::cout << readBuffer << "\n";
    }
    
    return 0;
}
