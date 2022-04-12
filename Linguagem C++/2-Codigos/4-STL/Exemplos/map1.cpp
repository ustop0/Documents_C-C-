#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	//dicionario de dados
	map<string, string> dicionario;
	dicionario.insert( pair<string, string>("apple", "der apfel") );
	dicionario.insert( pair<string, string>("banana", "die Banane") );
	dicionario.insert( pair<string, string>("orange", "die orange, die Apfelsine") );
	dicionario.insert( pair<string, string>("strawberry", "die Erdbeere") );

	dicionario["strawberry"] = "Die Erdbeere";
	dicionario.clear();

	cout << dicionario.size() << endl;

	//percorrendo dicionario de dados
	for( auto pair : dicionario )
	{
		cout << pair.first << " - " << pair.second << endl;
	}

	return 0;
}
