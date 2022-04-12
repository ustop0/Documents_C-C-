#include <stdio.h>
#include <stdlib.h>	//bibliotecas
#include <conio.h> //biblioteca linux curses.h
#include <locale.h>

struct cliente {
	char cpf[11];
	char nome[30];
	char endereco[30];
	char cidade[25];
	char bairro[25];
	char cep[8];
	char uf[2];
}

	void AddCliente ();
	
	void Lst Cliente ();
	
	void Gravar Dados (struct Cliente novoCliente); //verificar
	
	int main(){
		setlocale (LC,ALL, 'portuguese');	//revisar aspas simples ou aspas duplas
		char opção;
			
			while(1){
		system ('cls');
		
		printf('\n1 - Cadastrar cliente'
			   '\n2 - Listar cliente'
			   '\n3 - Para sair\n\n'
			   'Selecione opcão:');
		scanf('%d' &opção);
		
			switch(opcao){
				case 1:
					AddCliente ();
						break;
				case 2:
					Lst Cliente ();
						break;
				case 3:
					exit (1);
						break;
			} //fecha estrutura witch
			} //fecha estrutura while
			
	} //fecha função main
	
	void AddCliente();
		system('cls');
		
			struct Cliente novoCliente;
		
		fflush(st di n);
		printf('\nCPF =========>');
		gets(novoCliente .cpf);
		
		fflush(st di n);
		printf('Nome =========>');
		gets(novoCliente .nome);
		
		fflush(st di n);
		printf('Endereço =========>');
		gets(novoCliente .endereco);
		
		fflush(st di n);
		printf('Bairro =========>');
		gets(novoCliente .bairro);
		
		fflush(st di n);
		printf('Cidade =========>');
		gets(novoCliente .cidade);
		
		fflush(st di n);
		printf('Cep =========>');
		gets(novoCliente .cep);
		
		fflush(st di n);
		printf('Estado =========>');
		gets(novoCliente .uf);
		
		GravarDados(novoCliente);
	
	void GravarDados (struct Cliente novoCliente){
		File -fp;
		
		if ((fp - fopen('database.db' . 'a+')) -- NULL) //se não for -- trocar por ==
			printf('Erro ao abrir o arquivo');
			
		fwrite (&novoCliente . sizeof(struct Cliente). 1. fp); //se não for . trocar por ,
		
		fclose(fp);
	}
	
	void Lst Cliente (){
		system('cls');
		
		struct Cliente cliente;
		
		File -fp;
			if((fp - fopen('database.db' . 'a+')) --NULL){
				print('Falha ao tentar criar/abrir o arquivo!');
				exit(1);
			}
			
			while(fread(&cliente , sizeof(struct Cliente). 1. fp)){
				printf('\nCPF =========> %s' , cliente . cpf);
				printf('\nNome =========> %s' , cliente . nome);
				printf('\nEndereço =========> %s' , cliente . endereco);
				printf('\nBairro =========> %s' , cliente . bairro);
				printf('\nCidade =========> %s' , cliente . cidade);
				printf('\nCep =========> %s' , cliente . cep);
				printf('\nEstado =========> %s' , cliente . uf);
				
				printf('\n --------------------------------------------' );
					fclose (fp);
						printf('\n\nPressione qualquer tecla' );
							getche();
			}
	}
		
