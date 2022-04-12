#include <iostream>
#include <ctime> //manipulação de data e hora

inline std::string formato( int num )
{
	std::string fmt = num < 10 ? "0" + std::to_string( num ) : std::to_string( num ); //parse para string
	return fmt;
}


int main( int argc , char **argv )
{
	time_t agora = time(0); //time_t pegar hora
	//char * datahora = ctime( &agora );
	tm *dh = localtime( &agora );
	//std::cout << "A hora e a data é: " << datahora << '\n';
	//std::cout << "O ano atual é: " << 1900 + dh->tm_year << '\n';
	//std::cout << "O mês atual é: " << 1 + dh->tm_mon << '\n';
	//std::cout << "O dia atual é: " << dh->tm_mday << '\n';
	//std::cout << "O hora atual é: " << dh->tm_hour << '\n';
	//std::cout << "O minuto atual é: " << dh->tm_min << '\n';
	//std::cout << "O segundo atual é: " << dh->tm_sec << '\n';
	std::string hora = formato( dh->tm_hour  ) + ":" + formato( dh->tm_min ) + ":" + formato( dh->tm_sec );
	std::cout << "A hora agora é: " << hora << '\n'; 
	return 0;
}

