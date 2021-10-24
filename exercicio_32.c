/*Elabore um programa em C que leia dois números
inteiros e apresente o resultado da diferença do maior
número pelo menor deles.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2;
	
	printf("Voce devera digitar dois numeros inteiros diferentes.\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("A diferenca do maior pelo menor numero e: %d", num1-num2);
	} else {
		printf("A diferenca do maior pelo menor numero e: %d", num2-num1);
	}
	
	return 0;
}