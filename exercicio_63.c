/*Desenvolva um programa para calcular e comparar
a área de dois retângulos A e B, o programa deverá
dizer qual retângulo possui a maior área ou se eles
possuem tamanhos iguais. Esse programa deve
possuir uma função para calcular a área do retângulo.
Dados de entrada: tamanho da base e da altura (tipo
das variáveis: inteiro, valor em centímetros).*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

float calcArea(float base, float altura){
	float area;
	area = base*altura;
	return area;
}

float maior(float area_1, float area_2){
	if(area_1>area_2){
		return area_1;
	} else{
		return area_2;
	}
}

int main(){
	
	float base_1, base_2, altura_1, altura_2, area_1, area_2;
	
	cabecalho();
	
	printf("Digite a base do primeiro triangulo: ");
	scanf("%f", &base_1);
	printf("Digite a altura do primeiro triangulo: ");
	scanf("%f", &altura_1);
	printf("Digite a base do segundo triangulo: ");
	scanf("%f", &base_2);
	printf("Digite a altura do segundo triangulo: ");
	scanf("%f", &altura_2);
	
	area_1 = calcArea(base_1, altura_1);
	area_2 = calcArea(base_2, altura_2);
	
	printf("Area do primeiro retangulo: %.1f\n", area_1);
	printf("Area do segundo retangulo: %.1f\n", area_2);
	printf("A maior area e: %f.1f", maior(area_1, area_2));
	return 0;
}