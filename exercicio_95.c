/*Uma agência espiã deseja enviar mensagens secretas para
seus agentes. O código dessas mensagens é a substituição
das vogais por números, sendo que as vogais AEIOU
correspondem a 23456. Nesse código a frase “EU ESTOU
NA AULA DE ICC” corresponde à frase: “36 3ST56 N2
26L2 DE 4CC“. Faça um programa em C que receba uma
frase e a codifique-a. A frase deve possuir no máximo 60
caracteres.*/

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
	
	char frase[100], opcao;
	int cont;
	do{
		cabecalho();
		printf("Digite uma frase: ");
		gets(frase);
		for(cont=0;cont<100;cont++){
			if(frase[cont]=='A' || frase[cont]=='a'){
				frase[cont]='2';
			} else if(frase[cont]=='E' || frase[cont]=='e'){
				frase[cont]='3';
			} else if(frase[cont]=='I' || frase[cont]=='i'){
				frase[cont]='4';
			} else if(frase[cont]=='O' || frase[cont]=='o'){
				frase[cont]='5';
			} else if(frase[cont]=='U' || frase[cont]=='u'){
				frase[cont]='6';
			}
		}
		printf("\nA frase codificada %c: %c%s%c.",130,34,frase,34);
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