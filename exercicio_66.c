/*Desenvolva um programa que solicite três notas de
provas de um aluno e apresente na tela a média dessas
notas. A obtenção das notas deve ser realizada na
função principal e o cálculo da média das notas deve
ser obtido por outra função (MEDIA). Para o cálculo
da média considere que a primeira prova tem peso 1
e as outras duas provas possuem peso 2.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

float media (float nota1, float nota2, float nota3){
	nota2=2*nota2;
	nota3=2*nota3;
	return ((nota1+nota2+nota3)/5);
}

int main(){
		
	float nota1, nota2, nota3;
	
	cabecalho();
	
	do{
		
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		
	}while(nota1 < 0 || nota1 >10);
	
	do{
		
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		
	}while(nota2 < 0 || nota2 >10);
	
	do{
		
		printf("Digite a terceiro nota: ");
		scanf("%f", &nota3);
		
	}while(nota3 < 0 || nota3 >10);
	
	
	printf("A media das notas: %.2f", media(nota1,nota2,nota3));
	
	return 0;
}