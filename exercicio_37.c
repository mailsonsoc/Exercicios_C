/*Dado um conjunto de N números, faça um programa
C que calcule e mostre a média aritmética dos
elementos desse conjunto.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, cont;
	float num, media, soma=0;
	
	printf("De quantos numeros deseja calcular a media: ");
	scanf("%d", &n);
	
	if(n<0){
		printf("\nDados incorretos.\nDigite um numero valido!\n");
		scanf("%d", &n);
	}
	
	for(cont = 1; cont<=n; cont++){
		printf("Digite um dos numeros: ");
		scanf("%f", &num);
		soma = num + soma;
	}
	
	media = soma/n;
	printf("A media dos numeros digitados e: %.2f", media);
	
	return 0;
}