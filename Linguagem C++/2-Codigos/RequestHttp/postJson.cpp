#include <iostream>
#include <string>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>


//essa função formata o json e depois o retorna
Json::Value json_decode(std::string text) 
{
    Json::Value root;
    Json::Reader reader;
    bool parsingSuccessful = reader.parse( text, root );
    //verifica se houve algum erro na conversão
    if ( !parsingSuccessful ) 
    {
      std::cout << "ERRO Parser: " << text << "\n";
    }
    return root;
}

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

// faz requisições Json retornando uma estrutura
int main()
{
    CURL *curl;
    CURLcode res;
    std::string readBuffer;

    Json::Value rootJsonValue;
    rootJsonValue["mensagem"] = "retornando json enviado";
    std::string output = rootJsonValue.toStyledString();

    curl = curl_easy_init();
    if(curl) 
    {
        std::string url = "http://www.crawlerweb.com.br/template/tmp/js2.php";

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        struct curl_slist *hs=NULL;
        hs = curl_slist_append(hs, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, output.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, output.length());
        curl_easy_setopt(curl, CURLOPT_POST, 1);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        res = curl_easy_perform(curl);
        long http_code = 0;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);
        curl_easy_cleanup(curl);

        std::cout << "Código HTTP: " << http_code << "\n";
		
		//passa o readbuffer para a função converter do formato json para o normal e armazena na variavel js_retorno
        Json::Value js_retorno = json_decode(readBuffer);
        std::cout << "O retorno é: " << js_retorno["mensagem"] << "\n";
    }
    return 0;
}
