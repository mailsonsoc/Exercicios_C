/*Escreva um programa para informar o maior
elemento de um vetor de 5 posições do tipo inteiro.
Esse programa deve possuir uma função para
verificar o maior número desse vetor.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de vetores em C.\n");
	printf("------------------------------------------\n");
}

float verMaior(float maior_num[5]){
	float maior=0;
	int cont;
	for(cont=0;cont<5;cont++){
		//teste verificação do maior número
		if(maior_num[cont]>maior){
			maior=maior_num[cont];
		}
	}
	return maior;
}

int main(){
	
	float num[5], maior_num;
	int cont;
	
	cabecalho();
	
	for(cont=0;cont<5;cont++){
		printf("Digite p %d.o elemento para o vetor: ", cont+1);
		scanf("%f", &num[cont]);
	}
	
	maior_num=verMaior(num);
	printf("\nO maior numero e: %.2f", maior_num);
	return 0;
}