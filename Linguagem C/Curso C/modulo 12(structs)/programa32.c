#include <stdio.h>
#include <string.h>
//Struct -> estrutura

struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
}alunos[5]; //0...4, declarando array de alunos(armazena 5 alunos)



int main(){
	//struct st_aluno alunos[5];, declarando no main

	for(int i = 0; i < 5; i++){ //percorrendo array
		printf("Informe a matrícula do aluno: ");
		fgets(alunos[i].matricula, 10, stdin);

		printf("Informe o nome do aluno: ");
		fgets(alunos[i].nome, 100, stdin);

		printf("Informe o curso do aluno: ");
		fgets(alunos[i].curso, 50, stdin);

		printf("Informe o ano de nascimento do aluno: ");
		scanf("%d", &alunos[i].ano_nascimento);
		getchar(); //para evitar de receber um ENTER e ir para o próximo campo direto
	}

	for(int i = 0; i < 5; i++){ //mostrando valores do array
		printf("============ Dados do Aluno %d ==============\n", (i+1));
		printf("Matrícula: %s\n", alunos[i].matricula);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Curso: %s\n", alunos[i].curso);
		printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
	}

	return 0;
}
