#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
		
struct cadastro_cliente
{
    char nome[50];
    char telefone[50];
    char cpf[11];
    char endereco[200];
    char rg[11];
    char numero_cr[50];
    char validade_cr[50];

};

struct cadastro_arma 
{ char nome[100];
  char marca[50];
  char modelo[50];
  char calibre[50];
  char num_serie[50];
  char tipo[50];

};

//utiliza as structs de cadastro de armas e clientes 
struct cadastro_cliente cliente;
struct cadastro_arma arma;



int main() {



printf("\n  #------------------------------------# \n");
printf("  |      Cadastro de clientes          |");
printf("\n  #------------------------------------#\n");

 
printf("informe o nome do cliente...:");
fgets(cliente.nome, 50, stdin);

printf("informe o numero de telefone...:");
fgets(cliente.telefone, 50, stdin);

printf("informe o numero de cpf...:");
fgets(cliente.cpf, 11, stdin);

printf("informe o endereco...:");
fgets(cliente.endereco, 200, stdin);

printf("informe o rg...:");
fgets(cliente.rg, 11, stdin);

printf("informe o numero cr...:");
fgets(cliente.numero_cr, 50, stdin);

printf("informe a validade cr ");
fgets(cliente.validade_cr, 50, stdin);

printf("\n  #------------------------------------# \n");
printf("  |      Cadastro de armas             |");
printf("\n  #------------------------------------#\n");


   printf("informe o nome...:");
   fgets(arma.nome,100, stdin);

   printf("informe a marca..:");
   fgets(arma.marca, 50, stdin );

   printf("informe o modelo...:");
   fgets(arma.modelo, 50, stdin);

   printf("informe o calibre...:");
   fgets(arma.calibre, 50, stdin);

   printf("informe o numero de serie...:");
   fgets(arma.num_serie, 50, stdin);

   printf("informe o tipo...:");
   fgets(arma.tipo, 50, stdin);
  


 printf("\n\n --------- Dados do cliente ---------\n\n");

 printf("Nome.......: %s", cliente.nome);
 printf("Telefone...: %s", cliente.telefone);
 printf("CPF...: %s", cliente.cpf);
 printf("Endereco....: %s", cliente.endereco);
 printf("RG...: %s", cliente.rg);
 printf("Certificado de registro...: %s", cliente.numero_cr);
 printf("Validade...:%s ",cliente.validade_cr);

 printf("\n\n --------- Dados da arma ---------\n\n");

  printf("Nome.......: %s", arma.nome);
  printf("Marca.......:  %s", arma.marca);
  printf("Modelo.......: %s", arma.modelo);
  printf("Calibre.......: %s", arma.calibre);
  printf("Numero de serie.......: %s", arma.num_serie);
  printf("Tipo.......: %s", arma.tipo);

    
     printf("\n deseja efetuar um novo cadasto? (s/n)...:");

    
}
