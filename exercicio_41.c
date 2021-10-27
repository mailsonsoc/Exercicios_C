/*Desenvolva um programa, tabuada.cpp, que
apresente a tabuada de 0 até 9 para o usuário. Entre
cada tabuada, coloque uma pausa para o usuário
conseguir lê-la.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cont, cont2;
	
	for (cont=1;cont<=9;cont++){
		
		for (cont2=1;cont2<=10;cont2++){
			printf("%d x %d = %d\n", cont,cont2,cont*cont2);
		printf("\n");	
		}
		
	}
	
	return 0;
}