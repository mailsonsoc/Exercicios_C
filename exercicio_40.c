/*Desenvolva um programa, maioridade.cpp, que
solicite ao usuário a idade de três pessoas e apresente
na tela a maior e a menor idade.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int cont, idade, maior = 0, menor = 0;
	
	for (cont=1;cont<=3;cont++){
		
		printf("Digite a %d.a idade: ", cont);
		scanf("%d", &idade);
		
		if(idade>menor){
			maior=idade;
			menor=idade-1;
		}
		if(idade<maior){
			menor=idade;
		}
		
	}
	
	printf("A maior idade e: %d\n", maior);
	printf("A menor idade e: %d", menor);

	return 0;
}