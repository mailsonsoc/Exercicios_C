/*Escreva um programa em C que calcule o volume de
dois cilindros circulares e que verifique qual deles é
maior. O raio e altura dos cilindros serão informados
pelo usuário. Observação: Vπx r2 x h, em que π=3,14,
r = raio e h = altura.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float volume_1, volume_2, raio_1, raio_2, altura_1, altura_2;
	
	printf("Digite o raio do primeiro cilindro: ");
	scanf("%f", &raio_1);
	printf("Digite a altura do primeiro cilindro: ");
	scanf("%f", &altura_1);
	printf("Digite o raio do segundo cilindro: ");
	scanf("%f", &raio_2);
	printf("Digite a altura do segundo cilindro: ");
	scanf("%f", &altura_2);
	
	volume_1 = (3.14*(raio_1*raio_1)*altura_1);
	volume_2 = (3.14*(raio_2*raio_2)*altura_2);
	
	printf("O volume do cilindro 1 e: %.2f", volume_1);
	printf("\nO volume do cilindro 2 e: %.2f", volume_2);
	
	if(volume_1>volume_2){
		printf("\nO volume do cilindro 1 e maior do que o volume do cilindro 2.");
	} else {
		printf("\nO volume do cilindro 2 e maior do que o volume do cilindro 1.");
	}
	
	return 0;
}