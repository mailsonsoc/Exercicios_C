/*Desenvolva um programa que possua um
procedimento que recebe três notas de um aluno
por parâmetro e uma letra. Se a letra for A, o
procedimento calcula a média aritmética das notas
do aluno, se for P, calcula a sua média ponderada
(pesos: 5, 3 e 2), e se for H, a sua média harmônica.*/

//por algum motivo o codigo da linha 52 esta printando 2x antes de solicitar a entrada 

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

float calc_media(float nota1, float nota2, float nota3, char opcao){
	float media=0;
	if(opcao=='A'){
		media=(nota1+nota2+nota3)/3;
	}else if(opcao=='P'){
		media=((nota1*5)+(nota2*3)+(nota3*2))/10;
	}else if(opcao=='H'){
		media=((1/nota1)+(1/nota2)+(1/nota3))/3;
	}
	return media;
}

int main(){
	
	float nota1,nota2,nota3;
	char escolha;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	if(nota1<0 || nota1>10){
		printf("Erro! Digite a primeira nota: ");
		scanf("%f", &nota1);
	}
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	if(nota2<0 || nota2>10){
		printf("Erro! Digite a segunda nota: ");
		scanf("%f", &nota2);
	}
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	if(nota3<0 || nota3>10){
		printf("Erro! Digite a terceira nota: ");
		scanf("%f", &nota3);
	}
	
	printf("Digite a opcao para a media:\nAritmetica.....A\nPonderada.......P\nHarmonica.......H\nOpcao: ");
	scanf("%c", &escolha);	
	if((escolha!='A') || (escolha!='P') || (escolha!='H')){
		printf("Digite a opcao para a media:\nAritmetica.....A\nPonderada.......P\nHarmonica.......H\nOpcao: ");
		scanf("%c", &escolha);
	}
	
	printf("A media solicitada e igual a %.2f", calc_media(nota1,nota2,nota3,escolha));
	
	return 0;
}
	