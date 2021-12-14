/*Escreva um programa que solicite dois números ao
usuário e que apresente na tela o resultado da sua
soma e o dobro de cada um deles. Esse programa
deve possuir duas funções, uma para calcular a soma
e outro para calcular o dobro desses números*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

int soma(int a, int b){
	return a + b;
}

int dobro(int a){
	return a*2;
}

int main (){
	
	int num_1, num_2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num_1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num_2);
	
	printf("Soma dos numeros: %.2f", (float) soma(num_1, num_2));
	printf("\nDobro do numero 1: %.2f", (float) dobro(num_1));
	printf("\nDobro do numero 2: %.2f", (float) dobro(num_2));
	
	return 0;
}