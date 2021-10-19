/*Escreva um programa que leia o número de alunos
e de alunas de uma sala. Como saída, o programa
deve apresentar o número de alunos e em seguida
o de alunas.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int aluno_1, aluno_2;
	
	printf("Qual numero de alunos da sala?");
	scanf("%d", &aluno_1);
	printf("Qual numero de alunas da sala?");
	scanf("%d", &aluno_2);
	
	printf("O numero de alunos e: %d", aluno_1);
	printf("\n");
	printf("O numero de alunas e: %d", aluno_2);
	
	return 0;
	
}