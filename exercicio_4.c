/*Escreva um programa que leia o número de
chuteiras de uma loja de esporte. Os valores deverão
ser inseridos por meio do teclado. Como saída, o
programa deve apresentar o número de chuteiras e
suas marcas (marca A, marca B e marca C).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int marca_a, marca_b, marca_c;
	
	printf("Quantas chuteiras da marca A foram adquiridas?");
	scanf("%d", &marca_a);
	printf("Quantas chuteiras da marca B foram adquiridas?");
	scanf("%d", &marca_b);
	printf("Quantas chuteiras da marca C foram adquiridas?");
	scanf("%d", &marca_c);
	
	printf("\t   Quantidade de chuteiras em estoque\n");
	printf("\tMarca(A)\tMarca(B)\tMarca(C)\n");
	printf("\t  %d\t\t  %d\t\t  %d", marca_a,marca_b,marca_c);
	return 0;
}