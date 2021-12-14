/*Faça um programa que leia uma matriz N por N, para
a qual a dimensão deve ser fornecida pelo usuário. O
programa deve subtrair a soma da diagonal principal pela
soma da diagonal secundária e exibir o resultado.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de matrizes em C.\n");
	printf("------------------------------------------\n");
}

int main (){
	
	int dim, cont1, contc;
	
	cabecalho();
	
	printf("Digite a dimensao da matriz quadrada: ");
	scanf("%d", &dim);
	printf("\n");
	
	int matriz[dim][dim], diag_principal=0, diag_sec=0;
	
	for(cont1=0; cont1<dim; cont1++){
		printf("Digite os valores da %d.a linha:\n", cont1+1);
		for(contc=0; contc<dim;contc++){
			printf("Digite o valor da %d.a coluna: ", contc+1);
			scanf("%d", &matriz[cont1][contc]);
			if(cont1==contc){
				diag_principal += matriz[cont1][contc];
			}
		}
		printf("\n");
	}
	
	for(cont1=0; cont1<dim; cont1++){
		diag_sec += matriz[cont1][dim-cont1-1];
	}
	
	printf("\nMatriz:");
	
	for(cont1=0;cont1<dim;cont1++){
		printf("\n");
		for(contc=0;contc<dim;contc++){
			printf("%d\t",matriz[cont1][contc]);
		}
	}
	
	printf("\n\nA soma da diagonal principal menos a soma da diagona secundaria e %d\n", diag_principal-diag_sec);
	
	return 0;
}