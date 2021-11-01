/*Faça um programa que apresente a soma acumulada
de todos os valores entre 1 e 100, somando os
números 1 e 100 (inclusive).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cont = 1, soma = 0;
	
	while(cont<=100){
		
		soma+=cont;
		cont++;		
	}

	printf("A soma acumulada de todos os numeros entre 0 e 100 e = %d", soma);

return 0;
}