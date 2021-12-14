/*Desenvolva um programa que leia dez números do
tipo inteiro ao usuário Armazene esses dez números
em um vetor. Para os valores dos elementos inseridos
nas posições pares desse vetor, calcule o somatório
deles, para os demais calcule a subtração desses
valores. Em seguida, o programa deverá apresentar
na tela os resultados.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de vetores em C.\n");
	printf("------------------------------------------\n");
}

int main (){
	
	int nros[10], cont, soma=0, sub=0;
	
	cabecalho();
	
	for(cont=0;cont<10;cont++){
		printf("Digite o %d.o numero inteiro: ", cont+1);
		scanf("%d",&nros[cont]);
		
		if(cont%2!=0){
			sub-=nros[cont];
		}else{
			soma+=nros[cont];
		}
	}
	printf("\nA soma dos numeros das posicoes pares e: %d", soma);
	printf("\nA subtracao dos numeros das posicoes impares e: %d", sub);
	return 0;
}