/*Escreva um programa que solicite seis números do
tipo inteiro ao usuário e os armazene em um vetor,
depois o programa deverá apresentar na tela os
números na ordem inversa do qual foram digitados.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de vetores em C.\n");
	printf("------------------------------------------\n");
}

int main(){
	int nros[6], cont;
	
	cabecalho();
	
	for(cont=0;cont<6;cont++){
		printf("Digite o %d.o numero inteiro: ", cont+1);
		scanf("%d", &nros[cont]);
	}
	printf("\nOs numeros na ordem inversa sao:\n");
	
	for(cont=5;cont>=0;cont--){
		printf("%d ", nros[cont]);
	}
	return 0;
}