/*Desenvolva um programa para ler uma string de no
máximo 100 caracteres e informe o número que cada
vogal se repete nessa frase.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de strings em C.\n");
	printf("------------------------------------------\n");
}

int strlen1(char *auxstring){
	int cont=0;
	while(auxstring[cont] != '\0'){
		cont++;
	}
	return cont;
}

int main(){
	
	char frase[100], opcao;
	int tamanho, auxcont, contaA, contaE, contaI, contaO, contaU;
	
	do{
		contaA=0, contaE=0, contaI=0, contaO=0, contaU=0;
		
		cabecalho();
		
		printf("Digite uma frase: ");
		gets(frase); //função que recebe uma string
		tamanho = strlen1(frase);
		puts(frase);
		while((frase[0] == '\0') || tamanho > 100){
			puts("Erro! Digite uma frase: ");
			gets(frase);
			tamanho = strlen1(frase);
		}
		for(auxcont=0;auxcont<tamanho;auxcont++){
			if(frase[auxcont]=='a' || frase[auxcont]=='A'){
				contaA++;
			} else if (frase[auxcont]=='e' || frase[auxcont]=='E'){
				contaE++;
			} else if (frase[auxcont]=='i' || frase[auxcont]=='I'){
				contaI++;
			} else if (frase[auxcont]=='o' || frase[auxcont]=='O'){
				contaO++;
			} else if (frase[auxcont]=='u' || frase[auxcont]=='U'){
				contaU++;
			}
		}
		
		printf("\nA frase %c%s%c possui a seguinte quantidade de vogais:\n",34,frase,34);
		printf("\n%cA%c: %d",34,34,contaA);
		printf("\n%cE%c: %d",34,34,contaE);
		printf("\n%cI%c: %d",34,34,contaI);
		printf("\n%cO%c: %d",34,34,contaO);
		printf("\n%cU%c: %d",34,34,contaU);
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