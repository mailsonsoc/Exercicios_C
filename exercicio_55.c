/*Dado um conjunto de N números, faça um programa
C que calcule e que mostre a média aritmética dos
elementos do conjunto.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int quant, cont = 1;
	float num, soma = 0;
	
	printf("Digite a quantidade de numeros que voce deseja calcular a media: ");
	scanf("%d", &quant);
	
	while (quant<=0){
		printf("Erro! Digite a quantidade de numeros que voce deseja calcular a media: ");
		scanf("%d", &quant);
	}
	
	do{
		printf("Digite o %.do numero: ", cont);
		scanf("%f", &num);
		soma += num;
		cont++;
	} while (cont<=quant);
	
	printf("A media dos numeros fornecidos e: %.2f", soma / quant);
	
	
	return 0;
}