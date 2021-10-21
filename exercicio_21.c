/*Escreva um programa que leia o número de alunos
e o de alunas de uma sala. Como saída, o programa
deve apresentar primeiro quem estiver em maior
quantidade. Por exemplo, se na sala tiver mais
alunos, apresente primeiro o número de alunos, caso
contrário apresente o número de alunas e depois o de
alunos. Considere o caso em que o número de alunos
é igual ao número de alunas.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num_alunos, num_alunas;
	
	printf("Digite o numero de alunos: ");
	scanf("%d", &num_alunos);
	printf("Digite o numero de alunas: ");
	scanf("%d", &num_alunas);
	
	if(num_alunos > num_alunas){
		printf("O numero de alunos = %d\nO numero de alunas = %d", num_alunos, num_alunas);
	} else if (num_alunas > num_alunos){
		printf("O numero de alunas = %d\nO numero de alunos = %d", num_alunas, num_alunos);
	} else{
		printf("O numero de alunos (%d) e igual o numero de alunas (%d)", num_alunos, num_alunas);
	}
	
	return 0;
}