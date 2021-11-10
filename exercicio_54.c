/*Dado um número, crie um programa C que escreva
todos os números ímpares menores que esse
número e maiores do que um. Assuma que o número
informado é positivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	
	do {
		printf("Digite um numero inteiro positivo maior que 3: ");
		scanf("%d", &num);
	} while (num<=3);
	printf("\nOs numeros impares menores que %d e maiores que 1 sao:\n", num);

	if(num%2==0){
		num--;
	} else {
		num=num-2;
	}
	
	do{
		printf("%d ", num);
		num=num-2;
	} while (num>=3);
	
	return 0;
}