#include <stdio.h>
#include <string.h>
//Struct -> estrutura

struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
};

//getchar(), Lê apenas um caractere
//fgets(), Lê uma sequência de caracteres até encontrar um \n
//scanf(), Lê sequências de caracteres de acordo com um formato, fazendo assim algum filtro do que pode entrar

//stdin, Entrada padrão
//stdout Saída padrão
//stderr Erro padrão

int main(){
	struct st_aluno aluno1;

	printf("Informe a matrícula do aluno: ");
	fgets(aluno1.matricula, 10, stdin); //10(tamanho da variavel matricula),stin lê valor e coloca na variável

	printf("Informe o nome do aluno: ");
	fgets(aluno1.nome, 100, stdin); 

	printf("Informe o curso do aluno: ");
	fgets(aluno1.curso, 50, stdin);

	printf("Informe o ano de nascimento do aluno: ");
	scanf("%d", &aluno1.ano_nascimento);

	printf("============ Dados do Aluno ==============\n");
	printf("Matrícula: %s\n", aluno1.matricula);
	printf("Nome: %s\n", aluno1.nome);
	printf("Curso: %s\n", aluno1.curso);
	printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);

	return 0;
}
