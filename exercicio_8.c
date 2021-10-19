/*Desenvolva um programa para calcular e escrever
a área e o perímetro de um retângulo. Dados de
entrada: tamanho da base e da altura (tipo das
variáveis: inteiro, valor em centímetros).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int base, altura, area, perimetro;
	
	printf("Digite a base do retangulo em cm: ");
	scanf("%d", &base);
	printf("Digite a altura do retangulo em cm ");
	scanf("%d", &altura);
	
	area = base*altura;
	perimetro = 2*base+2*altura;
	printf("A area do retangulo e: %d\n", area);
	printf("O perimetro do retangulo e: %d", perimetro);
	
	return 0;
}