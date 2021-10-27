/*Um funcionário de uma empresa recebe aumento
salarial anualmente. Sabe-se que:
a) esse funcionário foi contratado em 1995, com
salário inicial de R$ 1.000,00;
b) em 1996 recebeu aumento de 1,5% sobre seu
salário inicial;
c) a partir de 1997 (inclusive), os aumentos
salariais sempre corresponderam ao dobro do
percentual do ano anterior.
Faça um programa que determine o salário desse
funcionário até o ano 2000 (caso você tenha uma
excelente máquina, poderá realizar a operação até o
ano final desejado).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int ano, cont;
	double aumento = 0.015, salario = 1015.0;
	
	printf("Digite o ano a partir de 1996 que deseja saber o valor do salario: ");
	scanf("%d", &ano);
	
	while ((ano<1996) || (ano>2000)){
		printf("\nErro! Digite um ano entre 1996 e 2000");
		scanf("%d", &ano);
	}
	
	cont=ano-1996;
	
	while(cont>=1)
	{
		aumento=aumento*2;
		salario+=(salario*aumento);
		printf("\n%d = RS%.2f   ", ((ano-cont)+1), salario);
		cont--;
	}
	
	printf("\n\nO salario do ano de %d sera: R$%.2f", ano, salario);	
	return 0;
}