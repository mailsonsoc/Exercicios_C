/*Faça um programa em C, que a uma vez que se
forneça um número inteiro de 1 a 12, apresente o
nome do mês correspondente por extenso ou uma
mensagem de inválido, caso o usuário digite um
número fora do estabelecido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	
	printf("Digite um numero inteiro de 1 a 12 correspondente ao mes desejado: ");
	scanf("%d", &num);
	
	switch (num){
		case 1: 
			printf("O numero corresponde ao mes de janeiro!");
			break;
		case 2:
			printf("O numero corresponde ao mes de fevereiro!");
			break;
		case 3:
			printf("O numero corresponde ao mes de marco!");
			break;
		case 4:
			printf("O numero corresponde ao mes de abril!");
			break;
		case 5:
			printf("O numero corresponde ao mes de maio!");
			break;
		case 6:
			printf("O numero corresponde ao mes de junho!");
			break;
		case 7:
			printf("O numero corresponde ao mes de julho!");
			break;
		case 8:
			printf("O numero corresponde ao mes de agosto!");
			break;
		case 9:
			printf("O numero corresponde ao mes de setembro!");
			break;
		case 10:
			printf("O numero corresponde ao mes de outubro!");
			break;
		case 11:
			printf("O numero corresponde ao mes de novembro!");
			break;
		case 12:
			printf("O numero corresponde ao mes de dezembro!");
			break;
		default:
			printf("Digite um numero valido!\n");
			main();
	}
	return 0;
}