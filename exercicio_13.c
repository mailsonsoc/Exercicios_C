/*Escreva um programa que leia a quantidade de alunas
e de alunos. Depois esse programa deve informar se
essa turma possui mais alunos ou mais alunas. Se
essa turma possuir a quantidade de alunas maior que
a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos
é igual a de alunas.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int alunos, alunas;
	
	printf("Digite a quantidade de alunos:");
	scanf("%d", &alunos);
	printf("Digite a quantidade de alunas:");
	scanf("%d", &alunas);
	
	if(alunos == alunas){
		printf("O total de alunos e %d e a quantidade de alunos e igual a quantidade de alunas!", alunos+alunas);
	}else{
		if(alunos > alunas){
			printf("A turma possui mais alunos!");
		}else{
		printf("A turma possui mais alunas!");
		printf("O total de alunos e %d", alunos+alunas);
		}
	}
	
	return 0;
}