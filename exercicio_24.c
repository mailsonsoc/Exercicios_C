/*Faça um programa que receba dois números inteiros
e que informe o maior deles. O programa deve
verificar também se o maior número é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num_1, num_2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num_1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num_2);
	
	if (num_1 > num_2){
		printf("O primeiro numero e maior.\n");
		if(num_1%2 == 0){
			printf("Este numero e par!");
		} else{
			printf("Este numero e impar!");
		}
	}else{
		printf("O segundo numero e maior.\n");
		if(num_2%2 == 0){
			printf("Este numero e par!");
		} else{
			printf("Este numero e impar!");
		}
	}
	
	return 0;
}