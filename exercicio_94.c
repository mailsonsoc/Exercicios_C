/*Escreva um programa em C que receba uma frase
qualquer fornecida pelo usuário, e que calcule e mostre
quantas palavras essa frase possui. A frase deve possuir
no máximo 50 caracteres.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de strings em C.\n");
	printf("------------------------------------------\n");
}

int main(){
	
	char frase[50], opcao;
	int cont, auxcont;
	do{
		auxcont=1;
		/*auxcont começa em um pois ele conta quantos
		espaços foram digitados, ou seja, quando se digita o primeiro espaço
		já se tem uma palavra digitada*/
		cabecalho();
		printf("Digite uma frase: ");
		gets(frase);
		for(cont=0;cont<50;cont++){
			if(frase[cont]==' '){
				auxcont++;
			}
		}
		printf("\nA frase %c%s%c possui %d palavras.",34,frase,34,auxcont);
		printf("\n\nDeseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		fflush(stdin);
		while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N'){
			printf("\n\nErro! Deseja executar novamente (S/N): ");
			scanf("%c", &opcao);
			fflush(stdin);
		}
		system("cls");
	}while(opcao=='s'||opcao=='S');
	
	return 0;
}