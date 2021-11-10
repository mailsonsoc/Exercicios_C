/*Faça um programa que mostre todos os números
pares existentes entre 1 e 50.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cont = 2;
	
	printf("Os numeros pares entre 1 e 50 sao: ");
	
	do{
		printf("%d ", cont);
		cont=cont+2;
	}while(cont<50);
	
	
	return 0;
}