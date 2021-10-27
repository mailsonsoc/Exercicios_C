/*Desenvolva um programa, tabinter.cpp, para calcular
a tabuada de um intervalo de números que será
informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cont, cont2, pam1, pam2;
	
	printf("Digite o primeiro limite do intervalo: ");
	scanf("%d", &pam1);
	printf("Digite o segundo limite do intervalo: ");
	scanf("%d", &pam2);
	
	for (cont=pam1;cont<=pam2;cont++){
		
		for (cont2=1;cont2<=10;cont2++){
			printf("%d x %d = %d\n", cont,cont2,cont*cont2);
		printf("\n");	
		}
		
	}
	
	return 0;
}