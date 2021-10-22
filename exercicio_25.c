/*Uma frutaria vende frutas com a seguinte tabela de
preços:
Até 5 Kg | Acima de 5 Kg
Morango: R$ 7,50 p/Kg | R$ 5,30 p/Kg
Maçã: R$ 3,50 p/Kg | R$ 2,80 p/Kg
Se o cliente comprar menos de 5 kg de frutas e o valor
total da compra ultrapassar R$ 19,00, receberá um
desconto de 8% sobre o total. Escreva um programa
em C para ler a quantidade (em Kg) de morangos e
a de maçãs (em Kg) e que informe o valor a ser pago
pelo cliente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float maca, morango, total, total_maca, total_mgo, total_preco;
	
	printf("Digite o total de macas em kg:");
	scanf("%f", &maca);
	printf("Digite o total de morangos em kg:");
	scanf("%f", &morango);
	
	total = maca + morango;
	
	if (total > 5){
		
		total_maca = maca * 2.80;
		total_mgo = morango * 5.30;
		
	} else {
		
		total_maca = maca * 3.50;
		total_mgo = morango * 7.50;
	}
	
	total_preco = total_maca + total_mgo;
	
	if(total_preco>19){
		total_preco = 0.92*total_preco;
		printf("O valor total da compra e: R$%.2f", total_preco);
	} else {
		printf("O valor total da compra e: R$%.2f", total_preco);
	}

	
	return 0;
}