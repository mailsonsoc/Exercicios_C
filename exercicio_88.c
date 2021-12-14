/*Faça um programa para ler uma matriz com três linhas
e quatro colunas; cada linha se refere aos dados de um
aluno; cada coluna se refere à nota de um bimestre.
Calcular a média de cada um dos alunos e dizer se o aluno
foi aprovado ou não (a média é igual a sete).*/

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>


int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de matrizes em C.\n");
	printf("------------------------------------------\n");
}

bool verifAprovacao(float resultados[4]){
	float soma = 0;
	int cont;
	for (cont=0;cont<4;cont++){
		soma+=resultados[cont];
	}
	return ((soma/4.0)>=7.0);
}

int main (){
	float notas[3][4];
	int cont1, contc;
	
	cabecalho();
	
	for(cont1=0;cont1<3;cont1++){
		printf("Digite as notas do %d.o aluno: \n", cont1+1);
		for(contc=0;contc<4;contc++){
			printf("Digite a %d.a nota: ", contc+1);
			scanf("%f", &notas[cont1][contc]);
			while(notas[cont1][contc]<0 || notas[cont1][contc]>10){
				printf("Erro! Digite novamente a %d.a nota do %d.o aluno(a): ", contc+1, cont1+1);
				scanf("%f", &notas[cont1][contc]);
			}
		}
	}
	for(cont1=0;cont1<3;cont1++){
		if(verifAprovacao(notas[cont1])==true){
			printf("\nO %d.o aluno esta aprovado.", cont1+1);
		}else{
			printf("\nO %d.o aluno esta reprovado.", cont1+1);
		}
	}
	return 0;
}