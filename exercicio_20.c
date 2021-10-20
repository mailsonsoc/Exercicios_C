/*Escreva um programa que informe o valor de uma
corrida de taxi. Para calcular o valor da corrida é
necessário saber a distância percorrida em quilômetros
e qual o tipo da bandeira da corrida, 1 ou 2. Caso a
bandeira seja 1, o preço do quilometro percorrido é
de R$ 1,80, se a bandeira for 2 o valor é de R$ 2,30.
Escreva um programa em linguagem C que solicite a 
distância percorrida em quilômetros e qual o tipo da
bandeira da corrida e informe o valor da corrida.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int opcao;
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
	printf("O valor da corrida e: R$ %.2f\n", km*band);
	
	return 0;
}
