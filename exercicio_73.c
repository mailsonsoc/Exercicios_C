/*Desenvolva um programa para calcular a tabuada de
um intervalo de dois números que será informado
pelo usuário. Entre cada tabuada, deve haver uma
pausa para o usuário conseguir lê-la. Esse programa
deve conter um procedimento, imptabuinter, que
recebe por parâmetro os dois números do intervalo.
Esse procedimento deve escrever as tabuadas na tela.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

int tabuada(int num_1, int num_2){
	int cont1, cont2;
	for(cont1=num_1;cont1<=num_2;cont1++){
		for(cont2=0;cont2<=9;cont2++){
			printf("\n%d x %d = %d", cont1, cont2, cont1*cont2);
		}
		printf("\n");
	}
}

int main (){
	
	int num_1, num_2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num_1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num_2);
	
	if(num_1<num_2){
		tabuada(num_1,num_2);
	}else if (num_2<num_1){
		tabuada(num_2,num_1);
	}
	return 0;
}