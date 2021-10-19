/*Escreva um programa que solicite ao usuário dois
números inteiros diferentes de zero. Com esses
números imprima na tela: a soma, a subtração, o
produto, a divisão e a média.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2, soma, subtracao, produto, divisao, media;
	
	printf("Digite dois numeros inteiros diferentes de zero\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	soma = num1+num2;
	subtracao = num1-num2;
	produto = num1*num2;
	divisao = num1/num2;
	
	printf("\nA soma de %d + %d = %d\n", num1, num2, soma);
	printf("A subtracao de %d - %d = %d\n", num1, num2, subtracao);
	printf("O produto de %d * %d = %d\n", num1, num2, produto);
	printf("A divisao de %d : %d = %d\n", num1, num2, divisao);
	printf("A media entre %d e %d e %.2f", num1, num2, (float) (num1+num2)/2);
	return 0;
}