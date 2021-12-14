/*Desenvolva um programa em C que declare duas
variáveis do tipo inteiro e duas do tipo ponteiro de
inteiro apontando para essas variáveis. Utilizando
ponteiros, o programa deve ler dois números para
essas variáveis e os imprimir, realizando as quatro
operações básicas de matemática com esses números.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de ponteiros em C.\n");
	printf("------------------------------------------\n");
}

int main(){
	
	int num1,num2;
	int *pnt1, *pnt2;
	
	cabecalho();
	pnt1=&num1;
	pnt2=&num2;
	printf("Digite o primeiro numero: ");
	scanf("%d",pnt1);
	printf("Digite o segundo numero: ");
	scanf("%d",pnt2);
	
	printf("\nSoma: %d + %d = %d", (*pnt1), (*pnt2), (*pnt1)+(*pnt2));
	printf("\nSubtracao: %d - %d = %d", (*pnt1), (*pnt2), (*pnt1)-(*pnt2));
	printf("\nMultiplicacao: %d * %d = %d", (*pnt1), (*pnt2), (*pnt1)*(*pnt2));
	printf("\nDivisao: %d / %d = %.2f", (*pnt1), (*pnt2), (float) (*pnt1)/(*pnt2));
	
	return 0;
}