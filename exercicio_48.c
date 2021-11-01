/*Desenvolva um programa que apresente a tabuada
de 0 até 9 para o intervalo de 0 até 10. Entre cada
tabuada, coloque uma pausa para o usuário conseguir
lê-la.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int cont = 1, auxcont;
	
	while(cont<=9){
		auxcont=0;
		while(auxcont<=10){
			printf("%d x %d = %d\n", cont, auxcont, cont*auxcont);
			auxcont++;
		}
		cont++;
	}
	return 0;
}