/*Desenvolva um programa para calcular e escrever
a área e o perímetro de um quadrado. Dados de
entrada: tamanho do lado (tipo da variável: numérico
inteiro, valor em centímetros). Essa conversão deve
ser feita por meio da função printf().*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int lado, area, perimetro;
	
	printf("Digite o lado do quadrado em cm: ");
	scanf("%d", &lado);
	area = lado*lado;
	perimetro = lado*4;
	printf("A area do quadrado e: %d\n", area);
	printf("O perimetro do quadrado e: %d", perimetro);
	
	return 0;
}
