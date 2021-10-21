/*Desenvolva um programa para calcular e comparar
a área de dois retângulos A e B. O programa deverá
dizer qual retângulo possui a maior área ou se
ambos possuem tamanhos iguais. Dados de entrada:
tamanho da base e da altura (tipo das variáveis:
inteiro, valor em centímetros).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int base_1, base_2, altura_1, altura_2, area_1, area_2;
	
	printf("Digite a base do primeiro retangulo: ");
	scanf("%d", &base_1);
	printf("Digite a altura do primeiro retangulo: ");
	scanf("%d", &altura_1);
	printf("Digite a base do segundo retangulo: ");
	scanf("%d", &base_2);
	printf("Digite a altura do segundo retangulo: ");
	scanf("%d", &altura_2);
	
	area_1 = base_1*altura_1; 
	area_2 = base_2*altura_2;
	
	if(area_1 > area_2){
		printf("A area do retangulo 1 e maior!\n");
		printf("Area do retangulo 1: %d\n", area_1);
		printf("Area do retangulo 2: %d", area_2);
	}else if(area_2 > area_1){
		printf("A area do retangulo 2 e maior!\n");
		printf("Area do retangulo 2: %d\n", area_2);
		printf("Area do retangulo 1: %d", area_1);
	}else{
		printf("A area dos dois retangulos e igual!\n");
		printf("Area do retangulo 1: %d\n", area_1);
		printf("Area do retangulo 2: %d", area_2);
	} 
	
	return 0;
}