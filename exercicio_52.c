/*A conversão de graus Fahrenheit para Celsius é obtida
por Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura em
graus Celsius e Tf em Fahrenheit. Faça um programa
C que calcule e que imprima uma tabela de graus
Fahrenheit e graus Celsius, cujos graus variem de
50 a 65, de 1 em 1.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float Tc = 50.0;
	
	while (Tc <= 65.0){
		printf("\t%.1f C \t=\t %.1f \tF \n", Tc, (((Tc*9.0)/5.0)+32.0));
		Tc++;
	}
	
	return 0;
}