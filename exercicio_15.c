/*Escreva um programa em C que calcule o volume de
um cilindro circular, dados o seu raio e sua altura.
Observação: V = πx r2 x h, em que pi=3,14, r = raio
e h = altura.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float V, r, h;
	
	printf("Digite o raio da base do cilindro:");
	scanf("%f", &r);
	printf("Digite a altura do cilindro:");
	scanf("%f", &h);
	
	V = (3.14*(r*r)*h);
	
	printf("O volume do cilindro e: %.2f", V);
	
	
	return 0;
}