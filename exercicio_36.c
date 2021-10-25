/*Dado um número, crie um programa C que escreva
todos os números ímpares menores e/ou iguais a
esse número e maiores ou igual a um. Assuma que o
número informado é positivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, cont;
	
	printf("Digite um numero inteiro positivo:");
	scanf("%d", &num);
	
	if(num%2 == 0){
		num = num - 1;
	}
	
	printf("Os numeros impares menores que %d sao: \n", num);	

	for(cont = num; cont >= 1; cont=cont-2){
		printf("%d\n", cont);
	}
	
	return 0;
}