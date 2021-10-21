/*Desenvolva um programa para comparar a idade de
Pedro e de Joana e informar quem é o mais velho.
Dados de entrada: idade de Pedro e de Joana (tipo
das variáveis: inteiro, e valor em anos). Observação:
essas pessoas possuem idades diferentes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade_pedro, idade_joana;
	
	printf("Digite a idade do Pedro: ");
	scanf("%d", &idade_pedro);
	printf("Digite a idade do Joana: ");
	scanf("%d", &idade_joana);
	
	if(idade_pedro > idade_joana){
		printf("Pedro e mais velho do que Joana!");
	} else if (idade_joana > idade_pedro){
		printf("Joana e mais velho do que Pedro!");
	} else {
		printf("Joana e Pedro tem a mesma idade.");
	}
	
	return 0;
}