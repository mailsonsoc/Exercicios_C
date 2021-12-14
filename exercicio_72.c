/*Desenvolva um programa, tabuada.cpp, que
apresente a tabuada de 0 até 9 para um número
determinado pelo usuário. Esse programa deve
conter um procedimento que recebe por parâmetro
o número digitado pelo usuário. Esse procedimento
deve escrever as tabuadas na tela.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

int tabuada(int num){
	int count = 0;
	do{
		printf("\n%d x %d = %d", count, num, count*num);
		count++;
	}while(count<=9);
}

int main(){
	
	int num;
	
	printf("Digite de qual numero deseja a tabuada: ");
	scanf("%d", &num);
	
	tabuada(num);
	
	return 0;
}