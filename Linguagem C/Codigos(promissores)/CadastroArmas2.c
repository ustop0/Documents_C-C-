#include <stdio.h>
#include <stdlib.h> //biblioteca que permite utilizar o "system"
#include <string.h>

//constantes para login e senha
#define CLOGIN "root";
#define CSENHA "abc123";

typedef struct
{
    char nome[50];
    char telefone[50];
    char cpf[11];
    char endereco[200];
    char rg[11];
    char numero_cr[50];
    char validade_cr[50];

} Cliente;

typedef struct
{ char nome[100];
  char marca[50];
  char modelo[50];
  char calibre[50];
  char num_serie[50];
  char tipo[50];

} Arma;


void main() {
    //----Sistema de Login do Sistema----
	//~ int tentativa=0;
	//~ char login[10], senha[10];


	//~ system("clear"); //executa comandos do sistema
	//~ //system("ls -l");

	//~ do {
		//~ if (tentativa >= 3) {
			//~ printf("\nNúmero de tentativas excedidas!!\n");
			//~ exit(0);
		//~ }
		//~ tentativa++;
		//~ printf("Informe o login: ");
		//~ gets(login);
		//~ printf("Informe a senha: ");
		//~ gets(senha);
	//~ } while (strcmp(login, CLOGIN) != 0 || strcmp(senha, CSENHA) != 0);

	menu();

}

void flush_in()
{
   int ch;

   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

menu() {
	int opcao=0;

	while (opcao != 999) {
		system("clear");
		printf("1 - clientes\n");
		printf("2 - armas\n");
		printf("999 - sair\n");
		printf("Qual a opção? ");
		scanf("%i", &opcao);

		switch (opcao) {
			case 1:
				clientes();
				break;
			case 2:
				armas();
				break;
			case 999:
				printf("Finalizando\n");
				exit(0);
				break;
			default:
				printf("Opção inválida!!\n");
				getchar();
				break;
		}
	}

}

clientes() {
	int opcao=0;

	while (opcao != 999) {
		system("clear");
		printf("1 - cadastrar clientes\n");
		printf("2 - listar clientes\n");
		printf("999 - voltar\n");
		printf("Qual a opção? ");
		scanf("%i", &opcao);

		switch (opcao) {
			case 1:
				cadastrar_cliente();
				break;
			case 2:
				listar_cliente();
				break;
			case 999:
				printf("Finalizando\n");
				break;
			default:
				printf("Opção inválida!!\n");
				getchar();
				break;
		}
	}
	
}


cadastrar_cliente() {
	Cliente C;

	char novo, conf;

	do {
		system("clear");
		printf("  |      Cadastro de clientes          |\n");


		printf("informe o nome do cliente...: ");
		flush_in();
		gets(C.nome);

		printf("informe o numero de telefone...:");
		gets(C.telefone);

		printf("informe o numero de cpf...: ");
		gets(C.cpf);

		printf("informe o endereco...: ");
		gets(C.endereco);

		printf("informe o rg...: ");
		gets(C.rg);

		printf("informe o numero cr...: ");
		gets(C.numero_cr);

		printf("informe a validade cr ");
		gets(C.validade_cr);


		printf("\nConfirma cadastro? (s/n) ");
		scanf(" %c",&conf);
		
		if (conf == 's') {
			//cadastra no BD

		}

		printf("\nCadastrar novo registro? (s/n) ");
		scanf(" %c",&novo);


	} while (novo == 's');
}

listar_cliente() {
	
}

armas () {
	
	int opcao=0;

	while (opcao != 999) {
		system("clear");
		printf("1 - cadastrar armas\n");
		printf("2 - listar armas\n");
		printf("999 - voltar\n");
		printf("Qual a opção? ");
		scanf("%i", &opcao);

		switch (opcao) {
			case 1:
				cadastrar_arma();
				break;
			case 2:
				listar_arma();
				break;
			case 999:
				printf("Finalizando\n");
				break;
			default:
				printf("Opção inválida!!\n");
				getchar();
				break;
		}
	}
	
}
	
cadastrar_arma() {

Arma A;

	char novo, conf;

	do {
		system("clear");
		printf("  |      Cadastro de armas          |\n");


		printf("informe o nome do armamento...: ");
		flush_in();
		gets(A.nome);

		printf("informe a marca...:");
		gets(A.marca);

		printf("informe o modelo...: ");
		gets(A.modelo);

		printf("informe o calibre...: ");
		gets(A.calibre);

		printf("informe o numero de serie...: ");
		gets(A.num_serie);

		printf("informe o tipo...: ");
		gets(A.tipo);



		printf("\nConfirma cadastro? (s/n) ");
		scanf(" %c",&conf);
		
		if (conf == 's') {
			//cadastra no BD


}
printf("\nCadastrar novo registro? (s/n) ");
		scanf(" %c",&novo);


	} while (novo == 's');
}


listar_arma(){

}
