/*Desenvolva um programa que leia duas strings de
tamanho máximo de 60 caracteres e informe se essas
duas frases são iguais.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de strings em C.\n");
	printf("------------------------------------------\n");
}

int main (){
	
	char frase1[60], frase2[60], opcao;
	int cont, tamanho1, tamanho2, tamanhoFrase;
	
	do{
		tamanhoFrase=0;
		
		cabecalho();
		
		printf("Digite a primeira frase: ");
		gets(frase1);
		printf("\nDigite a segunda frase: ");
		gets(frase2);
		
		tamanho1=strlen(frase1);//strlen é uma função da lib string especifica de
		tamanho2=strlen(frase2);//contagem do tamanho de uma string
		
		if(tamanho1 == tamanho2){
			for(cont=0;cont<tamanho1;cont++){
				if(frase1[cont] == frase2[cont]){
					tamanhoFrase++;
				} else {
					break;
				}
			}
		}
		if(tamanho2==tamanhoFrase){
			printf("\nFrases sao iguais:\n");
			puts(frase1);
		} else {
			printf("\nFrase nao sao iguais:\n");
			puts(frase1);
			printf("\n");
			puts(frase2);
		}
		printf("\n\nDeseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		fflush(stdin); //função para limpar o buffer do teclado
		while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N'){
			printf("\n\nErro! Deseja executar novamente (S/N): ");
			scanf("%c", &opcao);
			fflush(stdin);
		}
		system("cls"); //limpando a tela
	}while(opcao=='s' || opcao=='S');
	return 0;
}