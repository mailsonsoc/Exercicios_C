/*Desenvolva um programa para ler os dados de uma
matriz para armazenar três notas de dez alunos. Em
seguida apresente a menor nota da prova de cada
aluno. Desenvolva uma função para obter a menor
nota de cada aluno.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de matrizes em C.\n");
	printf("------------------------------------------\n");
}

float menorNota(float nota[3]){
	float menor_nota = 10;
	int cont;
	for(cont=0;cont<3;cont++){
		if(nota[cont]<menor_nota){
			menor_nota=nota[cont];
		}
	}
	return menor_nota;
}

int main(){
	
	float notas[10][3], menores[10];
	int cont1, contc;
	
	cabecalho();
	
	for(cont1=0;cont1<10;cont1++){
		printf("Digite as notas do %d.o aluno: \n", cont1+1);
		for(contc=0;contc<3;contc++){
			printf("Digite a %d.a nota: ", contc+1);
			scanf("%f",&notas[cont1][contc]);
			while(notas[cont1][contc]<0 || notas[cont1][contc]>10){
				printf("Erro! Digite corretamente a %d.a nota do %d.o aluno: ", contc+1, cont1+1);
				scanf("%f",&notas[cont1][contc]);
			}
		}
	menores[cont1] = menorNota(notas[cont1]);
	printf("\n");
	}
	
	for(cont1=0;cont1<10;cont1++){
	printf("A menor nota do aluno %d e: %.2f\n", cont1+1,menores[cont1]);}
	return 0;
}