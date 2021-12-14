/*Desenvolva um programa que possua uma matriz de
4X8 de números inteiros e some cada uma das linhas
da matriz, guardando o resultado da soma em um
vetor somalinha. A seguir, apresente os valores da
matriz e do vetor.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de matrizes em C.\n");
	printf("------------------------------------------\n");
}

int main(){
	int matriz[4][8], somalinha[4] = {0,0,0,0};
	int cont1, contc;
	
	cabecalho();
	
	for(cont1=0;cont1<4;cont1++){
		printf("Digite os elementos da %d.a linha: \n", cont1+1);
		for(contc=0;contc<8;contc++){
			printf("Digite o elemento da %d.a coluna: ", contc+1);
			scanf("%d", &matriz[cont1][contc]);
		}
		printf("\n");
	}
	
	for(cont1=0; cont1<4;cont1++){
		for(contc=0;contc<8;contc++){
			somalinha[cont1]=somalinha[cont1] + matriz[cont1][contc];
		}
	}
	for(cont1=0;cont1<4;cont1++){
		printf("\n");
		for(contc=0;contc<8;contc++){
			printf("%d ",matriz[cont1][contc]);
		}
	}
	printf("\n\n");
	for(cont1=0; cont1<4; cont1++){
		printf("Soma da linha %d: %d\n", cont1+1, somalinha[cont1]);
	}
	return 0;
}