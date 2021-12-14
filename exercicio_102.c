/*Desenvolva um programa em C que leia quatro
números e armazene-os em um vetor. Esse programa
deve conter ponteiros para manusear o vetor e
imprimir os seus valores. Esse programa deve conter
ponteiros também para apresentar o maior e o menor
número do vetor.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de ponteiros em C.\n");
	printf("------------------------------------------\n");
}

int main(){
	
	char opcao;
	int vet[4], cont, maior, menor;
	int *pnt, *pntMaior, *pntMenor;
	do
	{
		cabecalho();
		pnt=&vet[0];
		pntMaior=&maior;
		pntMenor=&menor;
		
		maior=-9999;
		menor=9999;
		printf("Digite 4 valores:\n");
		for(cont=0;cont<4;cont++){
			printf("[%d]: ", cont+1);
			scanf("%d", pnt);
			if(*pnt>*pntMaior){
				pntMaior=pnt;
			}
			if(*pnt<*pntMenor){
				pntMenor=pnt;
			}
			pnt++;
		}
		
		printf("\nO maior elemento do vetor e: %d", *pntMaior);
		printf("\nO menor elemento do vetor e: %d", *pntMenor);
		
		fflush(stdin);
		printf("\n\nDeseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
		{
		fflush(stdin);
		printf("\n\nErro! Deseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		}
		system("cls");
	}while(opcao=='s'||opcao=='S');
	
	return 0;
}