/*Desenvolva um programa para calcular e imprimir o
volume de uma esfera. Esse programa deva possuir
uma função que recebe por parâmetro o raio de uma
esfera e calcula o seu volume (v = (4/3). π.R3).*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

float calculaVolume(int raio){
	float volume;
	
	volume = (4*3.14*raio*raio*raio)/3;
	
	return volume;
}

int main(){
	
	int raio;
	
	cabecalho();
	
	do{
		printf("Digite o raio: ");
		scanf("%d", &raio);
	}while(raio<0);
	
	printf("\nO volume = %f\n", calculaVolume(raio));
	
	return 0;
}