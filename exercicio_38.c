/*A conversão de graus Fahrenheit para Celsius é obtida
por Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura
em Celsius e Tf em Fahrenheit. Faça um programa
C que calcule e que imprima uma tabela de graus
Fahrenheit e graus Celsius, cujos graus variem de
50 a 65, de 1 em 1.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Tc;
	
	for (Tc=50;Tc<=65;Tc++){
		printf(" %.0f %cC = %.1f %cF \n", Tc, 248, (((Tc*9.0)/5.0)+32.0), 248);
	}
	
	return 0;
}