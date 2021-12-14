/*Desenvolva um programa que calcule a média das
notas de alunos para uma turma de no máximo
100 alunos. O programa deve solicitar no início o
tamanho da turma.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de vetores em C.\n");
	printf("------------------------------------------\n");
}

int main (){
	
	int qnt, cont;
	float notas[100], soma=0, media;
	
	cabecalho();
	
	printf("Digite quantos alunos a turma possui (maximo: 100): ");
	scanf("%d", &qnt);
	while((qnt>100) || (qnt<0)){
		printf("ERRO! Digite quantos alunos a turma possui (maximo: 100): ");
		scanf("%d", &qnt);
	}
	for(cont=0;cont<qnt;cont++){
		printf("Digite a nota do aluno %d: ", cont+1);
		scanf("%f", &notas[cont]);
		while((notas[cont]<0)||(notas[cont]>10)){
			printf("Erro! Digite a nota do aluno %d: ", cont+1);
			scanf("%f", &notas[cont]);
		}
		soma+=notas[cont];
	}
	
	media=soma/qnt;
	printf("\nA media de notas da turma e: %.2f", media);
	return 0;
}