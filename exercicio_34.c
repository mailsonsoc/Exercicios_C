/*Faça um programa em C que leia dois números inteiros
e apresente a soma do módulo desses dois números.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2;
	
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &num2);
	
	if(num1>0){
		num1 = num1;
	} else if (num1<0){
		num1 = -num1;
	}
	
	if(num2>0){
		num2 = num2;
	} else if (num2<0){
		num2 = -num2;
	}
	
	printf("A soma dos modulos e: %d", num1+num2);
		
	return 0;
}