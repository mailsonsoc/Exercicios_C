/*Faça um programa C que leia dez números que
representam as notas de dez alunos de uma disciplina.
As notas variam de zero até dez (0 a 10). O programa
deve validar a entrada de dados e obter:
a) a soma das notas;
b) a média das notas;
c) a maior nota;
d) a menor nota.
Assuma que as notas são informadas corretamente
no intervalo de 1 a 10.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int cont = 1;
	float soma, maior, menor = 10, media, nota;
	
	printf("Digite 10 notas para calcular a media: \n");
	
	do{
		printf("Digite a %d.a nota: ", cont);
		scanf("%f", &nota);
		
		if (nota < 0 || nota > 10){
			printf("Erro! Digite um valor entre 0 e 10: ");
			scanf("%f", &nota);
		}
		
		soma += nota;			
		
		if(nota<menor){
			menor = nota;
		}
		if(nota>maior){
			maior = nota;
		}

			
		cont++;
		
	}while(cont<=10);
	
	media = soma / 10;
	
	printf("A media das notas fornecidas e: %.2f\n", media);
	printf("A soma das notas e: %.2f\n", soma);
	printf("A maior nota e: %.2f\n", maior);
	printf("A menor nota e: %.2f\n", menor);
	
}