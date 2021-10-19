/*Desenvolva um programa para calcular e para
comparar a área de dois retângulos A e B. O programa
deverá informar qual retângulo possui a maior área
ou se possuem tamanhos iguais. Dados de entrada:
tamanho da base e da altura (tipo das variáveis:
inteiro, valor em centímetros).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int baseA, baseB, alturaA, alturaB, areaA, areaB;
	
	printf("Digite a base do primeiro retangulo em cm: ");
	scanf("%d", &baseA);
	printf("Digite a altura do primeiro retangulo em cm: ");
	scanf("%d", &alturaA);
	printf("Digite a base do segundo retangulo em cm: ");
	scanf("%d", &baseB);
	printf("Digite a altura do segundo retangulo em cm: ");
	scanf("%d", &alturaB);
	
	areaA = baseA*alturaA;
	areaB = baseB*alturaB;
	
	printf("\nA area do primeiro retangulo: %.2f cm\n", (float) areaA);
	printf("A area do segundo retangulo: %.2f cm\n\n", (float) areaB);
	
	if(areaA == areaB){
		printf("A area dos retangulos e igual.");
	} else {
		if(areaA > areaB){
		printf("A area do primeiro retangulo e maior");
		} else {
		printf("A area do segundo retangulo e maior");
		}
	}
	
	return 0;
}