/*Faça um programa que receba um número inteiro
e que verifique se esse número é par ou ímpar.
O programa deve informar se o número é par, caso
afirmativo informar também se é ou não maior que
15 ou se o número é ímpar, caso afirmativo informar
se é ou não menor que 50.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num;
	
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("O numero que voce digitou e par");
		if(num > 15){
			printf("e maior do que 15.");
		} else {
			printf("e menor do que 15.");
		}
	} else{
		printf("O numero que voce digitou e impar");
		if(num < 50){
			printf(" e menor do que 50.");
		} else {
			printf(" e maior do que 50.");
		}
	}
	
	return 0;
}