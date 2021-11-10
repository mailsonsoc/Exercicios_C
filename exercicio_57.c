/*Faça um programa que leia dois conjuntos de dois
valores, o primeiro representando o número do
aluno e o segundo representando a sua altura em
centímetros. Encontre o aluno mais alto e o mais
baixo. Mostre o número do aluno mais alto, e o
número do aluno mais baixo, juntamente com suas
alturas.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cont = 1, num, maior, menor;
	float altura, menor_altura = 3.00, maior_altura = 0.0;
	
	printf("Voce devera digitar 2 conjuntos de 2 valores, o numero e a altura do aluno: \n");
	
	do{
		printf("Numero do %d.o aluno: ", cont);
		scanf("%d", &num);
		printf("Altura do %d.o aluno: ", cont);
		scanf("%f", &altura);
		
		
		if(altura<menor_altura){
			menor_altura = altura;
			menor = num;
		} 
		
		if(altura>maior_altura){
			maior_altura = altura;
			maior = num;
		}
		
		cont++;
		
	}while(cont<=2);
	
	printf("O aluno mais baixo e o de numero %d com %.2fm.\n", menor, menor_altura);
	printf("O aluno mais alto e o de numero %d com %.2fm.", maior, maior_altura);
	
	return 0;
}