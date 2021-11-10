/*Escreva um programa que solicite dois números ao
usuário e apresente na tela o resultado da soma do
módulo desses números. Esse programa deve possuir
uma função para calcular o módulo.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

int modulo(int num){
	if(num>0){
		return num;
	} else {
		return -num;
	}
}

int main(){
		
	int num_1, num_2, soma;
	
	cabecalho();
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num_1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num_2);
	
	soma = modulo(num_1) + modulo(num_2);
	
	printf("Soma do modulo dos numeros: %.2f", (float) soma);
	
	
	return 0;
}