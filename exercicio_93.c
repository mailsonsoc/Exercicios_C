/*Desenvolva um programa para ler uma palavra de
no máximo 60 caracteres e faça o programa escrever
essa palavra de trás para frente.*/

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
	
	char palavra[60], opcao;
	int tamanho, cont;
	do{
		
		cabecalho();
		
		printf("Digite uma palavra: ");
		gets(palavra);
		while(palavra[0]=='\0' || strlen(palavra)>60){
			puts("Erro! Digite uma palavra valida: ");
			gets(palavra);
		}
		tamanho = strlen(palavra);
		printf("\nA palavra %c%s%c invertida %c: ", 34,palavra,34,130);
		for(cont=tamanho;cont>=0;cont--){
			printf("%c", palavra[cont]);
		}
		printf("\n\nDeseja executar novamente (S/N): ");
		scanf("%c", &opcao);
		fflush(stdin);
		while(opcao!='s' && opcao!='S' && opcao!='n' && opcao!='N'){
			printf("\n\nErro! Deseja executar novamente (S/N): ");
			scanf("%c", &opcao);
			fflush(stdin);
		}
		system("cls");
	}while(opcao=='s' || opcao=='S');
	
	return 0;
}

