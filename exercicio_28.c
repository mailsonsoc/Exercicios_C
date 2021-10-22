/*Escreva um programa para informar o valor de
uma corrida de taxi que considere o valor mínimo
da corrida. Ou seja, ao entrar no taxi, o cliente
deve pagar um valor mínimo de R$ 3,50, mesmo
que o tamanho da corrida seja inferior a esse valor.
O programa deve considerar as informações do
exercício anterior (exercicio_20).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int opcao;
	float band, km;
	
	printf("ATENCAO: Taxa minima do taxi: 3.50\n");
	printf("Digite o numero da bandeira <1 ou 2>:");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			band = 1.80;
			break;
		case 2:
			band = 2.30;
			break;
		default:
			printf("Voce nao digitou uma opcao valida!\n");
			return main();
	}
	
	printf("Digite a kilometragem rodada: ");
	scanf("%f", &km);
	printf("O valor da corrida e: R$ %.2f\n", km*band+3.50);
	
	return 0;
}
