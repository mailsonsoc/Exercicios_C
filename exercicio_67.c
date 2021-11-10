/*Escreva um programa que solicite dois números
inteiros ao usuário e que apresente na tela como
resultado o dobro desses números que devem ser
somados e o resultado da soma devem ser triplicados.
Esse programa deve possuir uma função para dobrar
o valor de um número, outra para somar dois
números e uma terceira para triplicar um número.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

int dobrar(int num){
	return num*2;
}

int triplo(int num){
	return num*3;
}

int somar(int num_1, int num_2){
	return num_1 + num_2;
}

int main(){
	
	int num_1, num_2;
	
	cabecalho();
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num_1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num_2);
	
	printf("Dobro do primeiro numero: %d\n", dobrar(num_1));
	printf("Dobro do segundo numero: %d\n", dobrar(num_2));
	printf("Soma dos dobros dos numeros e: %d\n", somar(dobrar(num_1), dobrar(num_2)));
	printf("Triplo da soma acima e: %d", triplo(somar(dobrar(num_1), dobrar(num_2))));
	
	return 0;
}