/*Escreva um programa que leia um número na base
decimal e em seguida imprima esse mesmo número
nas bases octal e hexadecimal.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num;
	
	printf("Escreva um numero em base decimal: ");
	scanf("%d", &num);
	
	printf("O numero %d na base octal e: %o\n", num, num);
	printf("O numero %d na base hexadecimal e: %x", num, num);
	
	return 0;
}