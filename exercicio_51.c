/*Dado um conjunto de N números, faça um programa
C que calcule e mostre a média aritmética do
elementos desse números.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int cont = 1, pam;
	float num, media, soma;
	
	printf("Digite a quantidade de numeros que voce deseja calcular a media: ");
	scanf("%d", &pam);
	
	while(pam<=0){
		printf("Erro! Digite a quantidade de numeros que voce deseja calcular a media: ");
		scanf("%d", &pam);	
	}
	
	while(cont<=pam){
		printf("Digite o %d.o numero: ", cont);
		scanf("%f", &num);
		soma+=num;
		cont++;
	}
	
	media = soma / pam;
	
	printf("A media dos numeros fornecidos e: %.1f", media);
	
	return 0;
}