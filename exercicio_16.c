/*Desenvolva um programa para comparar a idade de
Pedro, de Joana e de Ismael e informar quem é o mais
velho. Dados de entrada: idade de Pedro, de Joana e
de Ismael (tipo das variáveis: inteiro, e valor em anos).
Considere que essas pessoas possuem idades diferentes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade_p,idade_j,idade_i;
	
	printf("Digite a idade de Pedro:");
	scanf("%d", &idade_p);
	printf("Digite a idade de Joana:");
	scanf("%d", &idade_j);
	printf("Digite a idade de Ismael:");
	scanf("%d", &idade_i);
	
	if (idade_p > idade_j && idade_p > idade_i){
		printf("Pedro e o mais velho!");
	} else if (idade_j > idade_p && idade_j > idade_i){
		printf("Joana e a mais velha!");
	} else {
		printf("Ismael e o mais velho!");
	}
	
	return 0;
}