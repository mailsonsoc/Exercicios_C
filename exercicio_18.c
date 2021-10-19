/*Faça um programa que receba um número inteiro
e que verifique se esse número é par ou se é ímpar.
O programa deve informar ao usuário o número
apenas se for par e maior que 15 e se for ímpar apenas
se for menor que 50.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, resto;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	
	resto = num%2;
	
	if (resto == 0){
		if(num > 15){
			printf("O numero digitado e par e maior que 15. ");
	} else {
		if(num < 50){
			printf("O numero digitado e impar e menor que 50.");
			}
		}
	}
	
	return 0;
}