/*Desenvolva um programa que solicite ao usuário
a idade de três pessoas e apresente na tela a maior
e a menor idade. Esse programa deve possuir uma
função para verificar qual é a maior idade e outra
para verificar a menor idade.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

int maior (int num_1, int num_2, int num_3){
	if(num_1 > num_2 && num_1 > num_3){
		return num_1;
	}else if (num_2 > num_1 && num_2 > num_3){
		return num_2;
	} else{
		return num_3;
	}
}

int menor (int num_1, int num_2, int num_3){
	if(num_1 < num_2 && num_1 < num_3){
		return num_1;
	}else if (num_2 < num_1 && num_2 < num_3){
		return num_2;
	} else{
		return num_3;
	}
}

int main(){
	
	int num_1, num_2, num_3;
	
	cabecalho();
	
	printf("Digite a primeira idade: ");
	scanf("%d", &num_1);
	while(num_1 <= 0){
		printf("Erro! Digite a primeira idade: ");
		scanf("%d", &num_1);
	}
	
	printf("Digite a segunda idade: ");
	scanf("%d", &num_2);
	while(num_2 <= 0){
		printf("Erro! Digite a segunda idade: ");
		scanf("%d", &num_2);
	}
	
	printf("Digite a terceira idade: ");
	scanf("%d", &num_3);
	while(num_3 <= 0){
		printf("Erro! Digite a terceira idade: ");
		scanf("%d", &num_3);
	}
	
	printf("Maior idade: %d\n", maior(num_1, num_2, num_3));
	printf("Menor idade: %d", menor(num_1, num_2, num_3));
	
}