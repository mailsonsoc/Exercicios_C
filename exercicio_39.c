/*Faça um programa C que leia dez números que
representem as notas de dez alunos, e que apresente:
a) a soma dos números;
b) a média dos números;
c) o maior número;
d) o menor número.
Assuma que as notas são informadas corretamente
no intervalo de 1 a 10.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cont;
	float nota, soma=0, maior=0,menor=10;
	
	for(cont=1;cont<=10;cont++){
		
		printf("Digite a %d.a nota: ", cont);
		scanf("%f", &nota);
		
		if(nota<0 || nota>10){
			printf("\n Dados incorretos. A nota deve estar entre 0 e 10: ");
			scanf("%f", &nota);
		}
		soma=soma+nota;
		if(nota>maior)
			maior=nota;
		if(nota<menor)
			menor=nota;
		}
	printf("\nA soma das notas e: %.1f", soma);
	printf("\nA media das notas fornecidas e: %.1f", soma/10);
	printf("\nA maior nota e: %.1f", maior);
	printf("\nA menor nota e: %.1f", menor);
	return 0;
}