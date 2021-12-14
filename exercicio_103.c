/*Faça um programa em C que receba uma frase
qualquer fornecida pelo usuário, que calcule e mostre
quantos caracteres essa frase possui. Esse programa
deve conter ponteiros para manusear a string. A frase
deve possuir no máximo 50 caracteres.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de ponteiros em C.\n");
	printf("------------------------------------------\n");
}

int main(){
	
	char opcao, frase[50];
	int cont, qnt, tamanho;
	char *pnt;
	do{
		cabecalho();
		pnt=&frase[0];
		qnt=0;
		
		printf("Digite uma frase: ");
		gets(frase);
		tamanho = strlen(frase);
		while((frase[0] == '\0') || tamanho > 100){
			puts("\nErro! Digite uma frase: ");
			gets(frase);
			tamanho = strlen(frase);
		}
		for(cont=0;cont<50;cont++){
			if(*pnt=='\0'){
				break;
			}
			qnt++;
			pnt++;
		}
		pnt=&frase[0];
		printf("\nA frase %c", 34);
		for(cont=0;frase[cont]!='\0';cont++){
			printf("%c", *pnt);
			pnt++;
		}
		printf("%c tem %d caracteres",34,qnt);
		printf("\n\nDeseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N')
		{
		fflush(stdin);
		printf("\n\nErro! Deseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		}
		system("cls");
	}while(opcao=='s'||opcao=='S');
	
	return 0;
}