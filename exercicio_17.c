/*Faça um programa que receba um número inteiro
e que verifique se esse número é par ou ímpar.
O programa deve informar:
a) se o número é par, caso afirmativo informar também
se ele é maior que 15;
b) se o número é ímpar, caso afirmativo se ele é menor
que 50.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, resto;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	
	resto = num%2;
	
	if (resto == 0){
		printf("O numero digitado e par ");
		if(num > 15){
			printf("e maior que 15.");
		}
	} else {
		printf("O numero digitado e impar ");
		if(num < 50){
			printf("e menor que 50.");
		} 
	}
	
	
	
	return 0;
}