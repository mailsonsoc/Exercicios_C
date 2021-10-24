/*Faça um programa em C que leia três números
diferentes (assuma que o sejam) e os imprima na tela
em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int a, b, c, primeiro, segundo, terceiro;
	
	printf("Voce deve digitar tres numeros inteiros!\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	
	if(a<b && a<c){
		primeiro = a;
		if(b<c){
			segundo = b;
			terceiro = c;
		} else {
			segundo = c;
			terceiro = b;
		}
	} else if (b<a && b<c) {
		primeiro = b;
		if(a<c){
			segundo = a;
			terceiro = c;
		} else {
			segundo = c;
			terceiro = a;
		}		
	} else {
		primeiro = c;
		if(a<b){
			segundo = a;
			terceiro = b;
		} else {
			segundo = b;
			terceiro = a;
		}	
	}
	
	printf("A ordem dos numeros digitados organizados de maneira crescente e:\n%d - %d - %d", primeiro, segundo, terceiro);
	
	return 0;
	
}