/*Escreva um programa que leia doze números do tipo
inteiro ao usuário. Separe esses números em pares
e ímpares e os armazenem em dois outros vetores
chamados vetpar e vetimpar. Em seguida, o programa
dever apresentar os resultados na tela.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de vetores em C.\n");
	printf("------------------------------------------\n");
}

int main(){
	int num[12], vetpar[12], vetimpar[12];
	int cont, cont_par=0, cont_impar=0;
	
	cabecalho();
	
	printf("Digite doze numeros:\n");
	
	for(cont=0;cont<12;cont++){
		printf("Digite o %d.o numero: ", cont+1);
		scanf("%d", &num[cont]);
		if(num[cont]%2==0){
			vetpar[cont_par]=num[cont];
			cont_par++;
		}else{
			vetimpar[cont_impar]=num[cont];
			cont_impar++;
		}
	}
	printf("\nNumeros pares sao: \n");
	for(cont=0;cont<cont_par;cont++){
		printf("%d ", vetpar[cont]);
	}
	
	printf("\nNumeros impares sao: \n");
	for(cont=0;cont<cont_impar;cont++){
		printf("%d ", vetimpar[cont]);
	}
	
	return 0;
}