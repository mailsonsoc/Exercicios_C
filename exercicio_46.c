/*Faça um programa que leia dez conjuntos de dois
valores, o primeiro representando o número do
aluno e o segundo representando a sua altura em
centímetros. Encontre o aluno mais alto e o mais
baixo. Apresente o número do aluno mais alto e o do
aluno mais baixo, cada um com sua altura.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int cont = 1, numero, maior_num, menor_num;
	float altura, baixo = 3.00, alto = 0.0;
	
	while (cont <= 10){
		
		printf("Digite o numero do %d.o aluno: ", cont);
		scanf("%d", &numero);
		while(numero<0){
			printf("Erro! Digite novamento  o numero %d.o aluno: ", cont);
			scanf("%d", &numero);
		}
		printf("Digite a altura do %d.o aluno: ", cont);
		scanf("%f", &altura);
		while((altura<0) || (altura>3)){
			printf("Erro! Digite novament a altura do %d.o aluno: ", cont);
			scanf("%f", &altura);
		}
		if(altura>alto){
			alto=altura;
			maior_num=numero;
		}
		if(altura<baixo){
			baixo=altura;
			menor_num=numero;
		}
		cont++;
	}
	
	printf("\nO aluno mais baixo e o de numero %d com %.2fm.\n", menor_num, baixo);
	printf("O aluno mais alto e o de numero %d com %.2fm.\n", maior_num, alto);
	
	return 0;
}