/*Escreva um programa em C para o Ministério da
Saúde que o auxilie nas informações sobre a dengue
em Brasília. Esse programa deve receber os dados
sobre o número de casos suspeitos, o número de casos
confirmados e o número de mortes, apresentando a
tela*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int casos_s, casos_c, num_mortes;
	
	printf("Preencha com os dados acerca da dengue em Brasilia:\n");
	printf("Casos suspeitos:");
	scanf("%d", &casos_s);
	printf("Casos confirmados:");
	scanf("%d", &casos_c);
	printf("Numero de mortes:");
	scanf("%d", &num_mortes);
	
	printf("Dados sobre a dengue em Brasilia:\n");
	printf("Casos suspeitos: %d\n", casos_s);
	printf("Casos confirmados: %d\n", casos_c);
	printf("Numero de mortes: %d\n", num_mortes);
	
}