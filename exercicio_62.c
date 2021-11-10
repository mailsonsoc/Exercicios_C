/*Escreva um programa que solicite dois números do
tipo inteiro distintos ao usuário e que apresente na
tela o maior deles. Esse programa deve possuir uma
função para verificar qual é o maior número.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}
int maior(int num1, int num2){
	if(num1>num2){
		return num1;
	} else{
		return num2;
	}
}
int main(){
	
	int num1, num2;
	
	cabecalho();
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	while(num2==num1){
		printf("Erro! Os numeros devem ser diferentes. Digite outro numero: ");
		scanf("%d", &num2);
	}
	
	printf("O maior numero e: %d\n\n", maior(num1, num2));
	
	return 0;
}