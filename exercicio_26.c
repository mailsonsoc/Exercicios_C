/*Desenvolva um programa para comparar a idade de
Pedro, de Joana e de Ismael e informar quem é o mais
velho. Dados de entrada: idade de Pedro, de Joana
e de Ismael (tipo das variáveis: inteiro, e valor em
anos). Considere que essas pessoas possuem idades
diferentes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade_pedro, idade_joana, idade_ismael;
	
	printf("Digite a idade de Pedro: ");
	scanf("%d", &idade_pedro);
	printf("Digite a idade de Joana: ");
	scanf("%d", &idade_joana);
	printf("Digite a idade de Ismael: ");
	scanf("%d", &idade_ismael);
	
	if(idade_pedro != idade_joana && idade_joana != idade_ismael && idade_pedro != idade_ismael)
	{
		if(idade_pedro > idade_joana && idade_pedro > idade_ismael){
				printf("Pedro e o mais velho.");
			} else if (idade_joana > idade_pedro && idade_joana > idade_ismael){
				printf("Joana e a mais velha.");
			} else {
				printf("Ismael e o mais velho.");
			}
	} else {
		printf("As idades sao iguais!");
	}
	
	return 0;
}