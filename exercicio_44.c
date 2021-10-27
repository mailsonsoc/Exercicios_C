/*Faça um programa que exiba a tabuada dos números
de 10 a 20. Por exemplo:
10x0=0
10x1=10
....
10x10=100
até chegar à tabuada de 20,
20x0=0
20x1=20
....
20x10=200*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int cont1, cont2 = 10;
	
	while(cont2<20){
		
		cont1 = 0;
		
		while(cont1<=10){
			
			printf("%d x %d = %d\n", cont2, cont1, cont2*cont1);
			cont1++;
			
		}
		
		printf("\n\n");
		cont2++;
	}


return 0;
}