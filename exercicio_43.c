/*Dado um número, crie um programa C que escreva
todos os números ímpares menores que o número
informado e maiores do que um. Assuma que o
número informado é positivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	while(num<0){
		
		printf("\nErro! Digite um numero inteiro positivo: ");
		scanf("%d", &num);
	}
	
	printf("Os numero impares menores que %d e maiores que 1 sao:\n", num);
	
	if(num%2==0){
		num--;
	} else {
		num=num-2;
	}
	
	while(num>1){
		printf("%d ", num);
		num=num-2;
	}
	
	return 0;
}