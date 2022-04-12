#include <stdio.h>
#include <string.h>

//_______________IMPORTANTE ENTENDER_______________
/*A Union, separa e utiliza apenas o espaço de memória da maior variável que está na estrutura,
 * ela aloca o espaço da maior variável e vai sobrescrevendo os valores a medida que são utilizados
 * ou seja, o valor da enum será apenas o da última variável, sendo um recurso para economizar memória
 */

union pessoa{
	char nome[100]; //1 char = 1 byte -> 1 * 100 = 100 bytes
	int idade; // 4 bytes -> total de 104 bytes
};//nesse caso o último valor será a idade, depois de percorrer toda estrutura apenas o valor do último dado conta.


int main(){

	union pessoa pes;

	strcpy(pes.nome, "Angelina Jolie");
	printf("Dados de %s\n", pes.nome);

	pes.idade = 39;
	printf("Ela tem %d anos\n", pes.idade);

	printf("A variável 'pes' está ocupando %ld bytes em memória.", sizeof(pes)); //sizeof(), tamanho do dado

	return 0;
}
