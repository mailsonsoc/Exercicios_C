/*Escreva um programa para informar o valor de
uma corrida de taxi em Brasília. A diferença com o
exercício anterior é que alguns taxis oferecem um
desconto de 30 %. Altere o programa do exercício
anterior para que ele solicite se a corrida possui ou
não desconto de 30% (1 – sim, 2 – não).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opcao, desconto;
	float band, km;
	
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
	printf("O taxi possui desconto de 30% ? <1 - SIM ou 2 - NAO>");
	scanf("%d", &desconto);
	if(desconto == 1){
		printf("O valor da corrida e: R$ %.2f\n", ((km*band)*0.70));
	} else if(desconto == 2){
	printf("O valor da corrida e: R$ %.2f\n", km*band);
	} else{
		printf("Voce nao digitou uma opcao valida.\nSegue valor sem desconto");
		printf("O valor da corrida e: R$ %.2f\n", km*band);
	}
	return 0;
}
