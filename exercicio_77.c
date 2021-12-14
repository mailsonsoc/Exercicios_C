/*Desenvolva um programa que possua uma função
que recebe um valor inteiro e verifica se o valor é
positivo ou negativo. A função deve retornar um valor
booleano. Depois a função principal deve informar
ao usuário o resultado.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

int booleana (int num){
	if(num/1>0){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	
	char opcao;
	int num;
	
	do{
		system("cls");
		cabecalho();
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		if (booleana(num)==1){
			printf("\nO numero %d e positivo", num);
		} else if (booleana(num)==0){
			printf("\nO numero %d e negativo", num);
		}
		
		do{
			fflush(stdin);
			printf("\n\nDeseja executar novamente (S/N): ");
			scanf("%c", &opcao);
		}while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N');
	}while(opcao=='s'||opcao=='S');
	
	return 0;
}