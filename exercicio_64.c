/*Escreva um programa que solicite a temperatura em
Celsius ao usuário e apresente na tela o resultado da
conversão dessa temperatura em Fahrenheit. Esse
programa deve possuir uma função para converter a
temperatura. Dados: Fahrenheit = Celsius x 1,8 + 32.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

float convert(float celsius){
	float f;
	f = (celsius * 1.8) + 32;
	return f;
}

int main(){
	
	float celsius;
	
	cabecalho();
	
	printf("Digite a temperatura em °Celsius: ");
	scanf("%f", &celsius);
	
	printf("A temperatura em °F %.2f", convert(celsius));
	
	return 0;
}