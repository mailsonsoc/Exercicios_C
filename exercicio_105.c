/*Faça um programa em C que receba uma frase do
usuário e mostre a frase, palavra por palavra, uma
em cada linha diferente. Esse programa deve conter
ponteiros na para manusear a string. A frase deve
possuir no máximo 60 caracteres.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de ponteiros em C.\n");
	printf("------------------------------------------\n");
}

int main (){
	char frase[60], opcao, tamanho;
	char *pnt;
	int cont;
	do{
		cabecalho();
		pnt=&frase[0];
		printf("Digite uma frase: ");
		gets(frase);
		tamanho = strlen(frase);
		while((frase[0] == '\0') || tamanho > 100){
			puts("\nErro! Digite uma frase menor: ");
			gets(frase);
			tamanho = strlen(frase);
		}
		for(cont=0;cont<strlen(frase);cont++){
			if(*pnt==' '){
				printf("\n");
			}else{
				printf("%c", *pnt);
			}
			pnt++;
		}
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