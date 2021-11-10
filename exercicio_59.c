/*Faça um programa que calcule o valor da soma:
S = 1/1+3/2+5/3+7/4+ .... + 99/50.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float soma = 0; 
	float cont1=1, cont2=1;
	
	do{
		soma+=(cont2/cont1);
		cont2=cont2+2;
		cont1=cont1+1;
	}while(cont2<=99);
	
	printf("A soma total: %.3f", soma);
	
	return 0;
}