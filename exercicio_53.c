/*Faça um programa C que leia dez números que
representam as notas de dez alunos, e obtenha:
a) a soma dos números;
b) a média dos números;
c) o maior número;
d) o menor número.
Assuma que as notas são informadas corretamente
no intervalo de 1 a 10.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int cont = 1, pam;
	float nota, soma, media, maior, menor = 0;
	
	printf("Digite quantas notas voce deseja calcular a media: ");
	scanf("%d", &pam);
	
	while (cont <= pam){
		
		printf("Digite a %d.a nota: ", cont);
		scanf("%f", &nota);
		
		while (nota < 0){
			printf("Erro! Digite a %d.a nota novamente: ", cont);
			scanf("%f", &nota);
		}
		
		if (nota < maior){
			menor = nota;
		} else if (nota > menor){
			maior = nota;
		}
		soma += nota;
		cont++;
	}
	media = soma / pam;
	printf("A media das notas fornecidas e: %.1f\n", media);
	printf("A maior nota e: %.1f\n", maior);
	printf("A menor nota e: %.1f", menor);
	
	return 0;
}