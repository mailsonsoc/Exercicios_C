/*Desenvolva um programa que apresente a tabuada
de 0 até 9 para o intervalo de 0 até 10. Entre cada
tabuada, coloque uma pausa para o usuário conseguir
lê-la.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int cont = 1, pam;
	
	do{
		pam = 0;
		do{
			printf("%d x %d = %d\n", cont, pam, cont*pam);
			pam++;
		}while(pam<=10);
		printf("\n");
		cont++;
	}while(cont<=9);
	return 0;
}