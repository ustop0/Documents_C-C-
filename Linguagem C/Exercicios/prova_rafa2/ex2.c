#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

	int count_idade = 0;
	int sum_idade = 0;
	int count_faixa1 = 0; 
	int count_faixa2 = 0; 
	int count_faixa3 = 0;
	int count_faixa4 = 0;

	do {

		int idade = 0;
		printf("Digite uma idade (Quantidade de pessoas: %d): ", count_idade);
		scanf("%d", &idade);


		if (idade < 0) {
			break;
		}

		count_idade++;

		sum_idade += idade;


		if (idade <= 17) {
			count_faixa1++;
		} else if (idade >= 18 && idade <= 45) {
			count_faixa2++;
		} else if (idade >= 46 && idade <= 65) {
			count_faixa3++;
		} else {
			count_faixa4++;
		}

		puts("-------------------------------------------------");
		printf("Quantidade de idades lidas: %d\n", count_idade);
		printf("Media das idades lidas: %.2f\n", ((double)sum_idade/count_idade));
		printf("Quantidade de Pessoas (Ate 17 anos) - %d\n", count_faixa1);
		printf("Quantidade de Pessoas (Entre 18 e 45 anos) - %d\n", count_faixa2);
		printf("Quantidade de Pessoas (Entre 46 e 65 anos) - %d\n", count_faixa3);
		printf("Quantidade de Pessoas (Acima de 65 anos) - %d\n", count_faixa4);
		printf("Porcentagem de Pessoas na primeira faixa etária: %.2f %\n", ((double)count_faixa1/count_idade)*100);
		printf("Porcentagem de Pessoas na última faixa etária: %.2f %\n", ((double)count_faixa4/count_idade)*100);
		puts("-------------------------------------------------");

	} while(true);

	
	return 0;
}