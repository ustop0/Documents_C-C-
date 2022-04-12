#include <stdio.h>
#define SIZE 200 
char nome[200] [50]; // matris 200x 50 max-49 caracteres no fim tem que ter /0
char email[SIZE] [50];
int cpf [SIZE];
int op;
void cadastro();
void pesquisa();
void lista();
int main(void) {
	//cadastro(); comentado porque foi chamado manualmente
	//lista();    comentado pq foi chamado manualmente
	//pesquisa();  comentado pq foi chamado manualmente
	do{
		system("cls"); //system permite executar o prompt dentro do programa
	    printf("\n--menu--\n1 - Cadastrar\n2 - Listar todos \n3 - Pesquiasr\n4 - Sair");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
	    		cadastro(); //chama função cadastro
	    		break;
	    	case 2:
	    		lista();
	    		break;
	    	case 3:
	    		pesquisa();
	    		break;
	    	case 4:
	    		system("exit"); //fecha janela
	    	    break;
	    	default:
	    		printf("opcao invalida");
	    		break;
		}
	    
	}while(op!=4); //se opção for diferente de 4 ( c n quiser sair) igual a 4 sai do prog
}
void lista() {
	int i;
	for(i=0;i<SIZE;i++) {
		if(cpf[i]>0){
			printf("\nNome: %s\nemail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
		}else{
			break;
		}
			
	}
}

void cadastro() {
	static int linha;
	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%d", &cpf [linha]); //%d pq é do tipo int (inteiro)
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++; //proxima execição muda para proxima linha ou (linha=linha+1)
	}while(op==1);
} //fimm do castro
void pesquisa() {
	int cpfPesquisa;
	char emailPesquisa [50];
	int i;
	do{
		printf("\nDigite 1 para pesquisar o cpf ou 2 para pesquisar o email");
		scanf("&d", &op);
		switch(op){
			case 1:
				printf("\nDigite o CPF:");
				scanf("&d", &cpfPesquisa);
				for(i=0;i<SIZE;i++){//i vai de 0 a 199 size vale 200
					if(cpf[i]==cpfPesquisa) {
						printf("\nNome: %s\nemail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
						}
				}
				break;
			case 2:
				printf("\nDigite o E-mail");
				scanf("%s", emailPesquisa);
					for(i=0;i<SIZE;i++) {//i vai de 0 a 199 size vale 200
					if(strcmp (email[i], emailPesquisa)){
						printf("\nNome: %s\nemail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
					}
		    	}
				break;
			default:
				printf("\n Opcao invalida");
				break;
		}
		printf("\nDigite 1 para continuar pesquisando ");
		scanf("%d", &op);
	}while(op==1);
	
}
