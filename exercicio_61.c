/*Desenvolva um programa para calcular a tabuada de
um intervalo de números que será informado pelo
usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int cont, pam, num1, num2;
	do{
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
		printf("Digite o segundo numero: ");
		scanf("%d", &num2);
	}while(num1>num2);
	cont = num1;
	do{
		pam=1;
		do{
			printf("\n%d x %d = %d", cont, pam, cont*pam);
			pam++;
		}while(pam<=10);
		printf("\n");
		cont++;
	}while(cont<=num2);
	return 0;
}