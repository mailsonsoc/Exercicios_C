/*Escreva um programa que leia os dados de um
funcionário e que aplique um aumento sobre o seu
salário, sendo que a empresa definiu um aumento de
10% para quem possuir mais de cinco anos de casa e for
casado, para os demais o aumento é de 8%. Esse aumento
deve ser calculado por uma função. Dados de entrada:
salário bruto, quantidades de anos na empresa, e estado
civil (C, c, S, s). Dados de saída: taxa do aumento, salário
inicial, e salário com aumento do funcionário.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de funcoes em C.\n");
	printf("------------------------------------------\n");
}

float reajuste_val(int anos, float sal, char est_civ){
	if(anos >= 5 && est_civ=='C' || est_civ=='c'){
		return sal*1.10;
	} else {
		return sal*1.08;
	}
}

int main (){
	
	int anos;
	float sal_brto, novo_sal;
	char est_civ;
	
	cabecalho();	
	
	do{
		printf("Digite o salario bruto do funcionario: ");
		scanf("%f", &sal_brto);
	}while(sal_brto <= 0);
	
	do{
		printf("Digite os anos do funcionario na empresa: ");
		scanf("%d", &anos);
	}while (anos <= 0);
	
	printf("Estado civil do funcionario (C para casado ou S para solteiro): ");
	fflush(stdin);
	scanf("%c", &est_civ);
	
	while(est_civ=='c' && est_civ=='C' && est_civ=='s' && est_civ=='S'){
		printf("Digite um estado civil valido (C/S): ");
		fflush(stdin);
		scanf("%c", &est_civ);
	}
	
	novo_sal=reajuste_val(anos, sal_brto, est_civ);
	printf("\nNovo salario do funcionario: R$ %.2f\n\n", novo_sal);

	return 0;
}