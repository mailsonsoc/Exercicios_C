/*Faça um programa que receba um número inteiro e
que verifique se esse número é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	
	if (num%2 == 0){
		printf("O numero e par!");
	} else {
		printf("O numero e impar");
	}
	
	return 0;
}