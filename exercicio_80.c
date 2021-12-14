/*Escreva um programa que solicite as notas de
quatro alunos ao usuário e apresente na tela a
menor e a maior nota. Esse programa deve possuir
um procedimento de cabeçalho e uma função para
verificar a menor e a maior nota dos alunos possuindo
um vetor de entrada NotAlunos[4].*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de vetores em C.\n");
	printf("------------------------------------------\n");
}

void verNotas(float NotAlunos[4]){
	int cont;
	float maior=0, menor=10;
	
	for(cont=0;cont<4;cont++){
		if(NotAlunos[cont]>maior){
			maior=NotAlunos[cont];
		}
		if(NotAlunos[cont]<menor){
			menor=NotAlunos[cont];
		}
	}
	
	printf("\nA maior nota e: %.2f", maior);
	printf("\nA menor nota e: %.2f", menor);
}

int main(){
	float NotAlunos[4];
	int cont;
	
	cabecalho();
	
	for(cont=0;cont<4;cont++){
		printf("Digite a nota do aluno %d: ", cont+1);
		scanf("%f", &NotAlunos[cont]);
		while((NotAlunos[cont]<0)||(NotAlunos[cont]>10)){
			printf("ERRO! Digite a nota do aluno %d: ", cont+1);
			scanf("%f", &NotAlunos[cont]);
		}
	}
	
	verNotas(NotAlunos);
	return 0;
}

