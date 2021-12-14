/*Desenvolva um programa que leia uma palavra de
no máximo 60 caracteres e verifique se ela é um
palíndromo. Uma palavra é palíndromo quando
ela pode ser lida da mesma forma da esquerda para
direita e da direita para esquerda.*/

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
	
	char palavra[60], opcao;
	int cont1, cont2, tamanho, resposta=0;
	/*cont1 percorrerá de traz pra frente e cont2
	percorrerá normalmente mantendo-se as mesmas proporções.
	tamanho recebe o tamanho da palavra e resposta é incrementada
	toda vez que uma letra é identificada na posição oposta da string*/
	do{
		resposta=0;
		
		cabecalho();
		
		printf("Digite uma palavra: ");
		gets(palavra);
		tamanho=strlen(palavra);
		cont1=tamanho;
		for(cont2=0;cont2<tamanho;cont2++){
			if(palavra[cont2]==palavra[cont1-1]){
				resposta++;
			}
			cont1--;
		}
		
		if(resposta==tamanho){
			printf("\nA palavra %c%s%c %c um pal%cndromo.",34,palavra,34,130,161);
		}else{
			printf("\nA palavra %c%s%c nao %c um pal%cndromo.",34,palavra,34,130,161);
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