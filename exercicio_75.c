/*Desenvolva um programa que possua uma função
que recebe, por parâmetro, a altura (alt) e o sexo
de uma pessoa e retorna o peso ideal. Para homens,
calcular usando a fórmula peso ideal = 72.7 x alt -
58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
Depois a função principal deve informar ao usuário
o resultado.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

float calc(float alt, char sexo){
	float peso;
	if(sexo=='m'){
		peso=(72.7*alt)-58;
	}else if(sexo=='f'){
		peso=(62.1*alt)-44.7;
	}
	return peso;
}

int main(){
	
	float alt;
	char sexo;
	
	cabecalho();
	
	do{
		printf("Digite m para masculino e f para feminino: ");
		scanf("%c", &sexo);
	}while((sexo!='m')&&(sexo!='f'));
	
	do{
		printf("Digite a altura: ");
		scanf("%f", &alt);
	}while(alt<0);
	
	printf("\nO peso ideal = %.2f\n\n", calc(alt,sexo));
	return 0;
}