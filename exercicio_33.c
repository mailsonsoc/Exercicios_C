/*Desenvolva um programa em C que leia um número
inteiro, positivo ou negativo, e apresente o valor do
módulo desse número.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if(num>0){
		printf("O modulo do numero e: %d", num);
	} else if (num<0){
		printf("O modulo do numero e: %d", -num);
	}
	
	return 0;
}