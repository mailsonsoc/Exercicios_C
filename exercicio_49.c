/*Desenvolva um programa para calcular a tabuada de
um intervalo de números que será informado pelo
usuário.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int cont = 1, auxcont, intervalo;
	
	printf("Digite o valor do intervalo: ");
	scanf("%d", &intervalo);
	
	while(cont<=intervalo){
		auxcont=0;
		while(auxcont<=10){
			printf("%d x %d = %d\n", cont, auxcont, cont*auxcont);
			auxcont++;
		}
		cont++;
	}
	
	
return 0;
}