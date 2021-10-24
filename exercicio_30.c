/*Dados três números, elabore um programa em C
para verificar se eles formam um triângulo, caso
verdadeiro calcule a sua área.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b, c;
	
	printf("Voce deve digitar tres numeros inteiros!\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	
	if(a<(b+c) && b<(a+b) && c<(a+b)){
		printf("Os numeros que voce digitou formam um triangulo.");
	} else {
		printf("Os numeros que voce digitou nao formam um triangulo.");
	}
	return 0;
}