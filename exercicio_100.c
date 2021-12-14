/*Desenvolva um programa em C que declare três
variáveis do tipo inteiro e três do tipo ponteiro de
inteiro apontando para essas variáveis. Utilizando
ponteiros, leia três números e os imprima em ordem
crescente. O programa deve apresentar também o
endereço de memória desses números.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de ponteiros em C.\n");
	printf("------------------------------------------\n");
}

int main (){
	
	char opcao;
	int num1,num2,num3;
	int *pnt1,*pnt2,*pnt3;
	do
	{
		cabecalho();
		pnt1=&num1;
		pnt2=&num2;
		pnt3=&num3;
		printf("Digite o primeiro numero: ");
		scanf("%d", pnt1);
		printf("Digite o segundo numero: ");
		scanf("%d", pnt2);
		printf("Digite o terceiro numero: ");
		scanf("%d", pnt3);
		
		if(*pnt1>=*pnt2 && *pnt1>=*pnt3)
		{
			if(*pnt2>=*pnt3){
				printf("\nA ordem crescente dos valroes e: %d, %d, %d", (*pnt3),(*pnt2),(*pnt1));
				printf("\nOs seus enderecos sao respectivamente: %p, %p, %p", pnt3, pnt2, pnt1);
			} else if (*pnt3>=*pnt2)
			{
				printf("\nA ordem crescente dos valroes e: %d, %d, %d", (*pnt2),(*pnt3),(*pnt1));
				printf("\nOs seus enderecos sao respectivamente: %p, %p, %p", pnt2, pnt3, pnt1);
			}
		} else if(*pnt2>=*pnt1 && *pnt2>=*pnt3)
		{
			if(*pnt1>=*pnt3){
				printf("\nA ordem crescente dos valroes e: %d, %d, %d", (*pnt3),(*pnt1),(*pnt2));
				printf("\nOs seus enderecos sao respectivamente: %p, %p, %p", pnt3, pnt1, pnt2);
			} else if (*pnt3>=*pnt1)
			{
				printf("\nA ordem crescente dos valroes e: %d, %d, %d", (*pnt1),(*pnt3),(*pnt2));
				printf("\nOs seus enderecos sao respectivamente: %p, %p, %p", pnt1, pnt3, pnt2);
			}
		} else if (*pnt3>=*pnt1 && *pnt3>=*pnt2)
		{
			if(*pnt1>=*pnt2){
				printf("\nA ordem crescente dos valroes e: %d, %d, %d", (*pnt2),(*pnt1),(*pnt3));
				printf("\nOs seus enderecos sao respectivamente: %p, %p, %p", pnt2, pnt1, pnt3);
			} else if (*pnt2>=*pnt3)
			{
				printf("\nA ordem crescente dos valroes e: %d, %d, %d", (*pnt1),(*pnt2),(*pnt3));
				printf("\nOs seus enderecos sao respectivamente: %p, %p, %p", pnt1, pnt2, pnt3);
			}
		}
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