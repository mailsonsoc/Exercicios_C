/*Desenvolva um programa para comparar a idade de
Pedro e a de Joana e informar quem é o mais velho.
Dados de entrada: idade de Pedro e de Joana (tipo
das variáveis: inteiro, e valor em anos). Observação:
essas pessoas possuem idades diferentes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade_p, idade_j;
	
	printf("Qual a idade de Pedro?");
	scanf("%d", &idade_p);
	printf("Qual a idade de Joana?");
	scanf("%d", &idade_j);
	
	if (idade_p > idade_j) {
		printf("Pedro e mais velho do que Joana.");
	} else {
		printf("Joana e mais velha do que Pedro.");
	}
	
	return 0;
}