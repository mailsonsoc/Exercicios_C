/*Desenvolva um programa que possua uma matriz
notaprova para armazenar quatro notas de cinco
alunos e depois apresentem na tela essas notas.
Esse programa dever possui validação de dados de
entrada. Utilizar duas estruturas de repetição uma
para manusear a coluna da matriz e outra para
manusear as linhas. O resultado do programa deve
ser conforme as figuras a seguir, a primeira figura
representa a obtenção dos dados e a segunda à
apresentação dos dados na tela.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de matrizes em C.\n");
	printf("------------------------------------------\n");
}

float validaNota(float nota,int cont){
	while(nota<0 || nota>10){
		if(nota<0){
			printf("Voce digitou uma nota menor do que zero: ");
			printf("\nDigite novamente a %d.o nota: ", cont+1);
			scanf("%f", &nota);
		}
		if(nota>10){
			printf("Voce digitou uma nota maior do que dez: ");
			printf("\nDigite novamente a %d.o nota: ", cont+1);
			scanf("%f", &nota);
		}
	}
	return nota;
}

int main(){
	
	float notaprova[5][4];
	int cont1, contc;
	
	cabecalho();
	
	for(cont1=0;cont1<5;cont1++){
		printf("\n\nDigite as quatro notas do %d.o aluno: \n", cont1+1);
		for(contc=0;contc<4;contc++){
			printf("Digite %d.a nota: ", contc+1);
			scanf("%f", &notaprova[cont1][contc]);
			notaprova[cont1][contc]= validaNota(notaprova[cont1][contc], contc);
		}
	}
	
	printf("\n");
	for(cont1=0;cont1<5;cont1++){
		printf("\nAs notas do %d.o aluno sao:\n", cont1+1);
		for(contc=0;contc<4;contc++){
			printf("%d.a nota: %.2f\n", contc+1, notaprova[cont1][contc]);
		}
	}
	return 0;
}