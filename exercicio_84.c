/*Faça um programa para obter os valores de uma
matriz 6x6 de números inteiros. Depois da leitura
dos dados, o programa deve calcular a soma dos
elementos da diagonal principal. Em seguida ele deve
mostrar os valores da matriz e o da soma.*/

#include<stdio.h>
#include<stdlib.h>

int cabecalho(){
	printf("------------------------------------------\n");
	printf("Licoes para o aprendizado de matrizes em C.\n");
	printf("------------------------------------------\n");
}

int main (){
	
	int matriz[6][6];
	int soma = 0, contlinhas, contcolunas;
	
	cabecalho();
	
	for(contlinhas=0;contlinhas<6;contlinhas++){
		
		printf("Digite o elemento de %d.a linha: \n", contlinhas+1);
		for(contcolunas=0;contcolunas<6;contcolunas++){
			printf("Digite o elemento da %d.a coluna: ", contcolunas+1);
			scanf("%d", &matriz[contlinhas][contcolunas]);
		}
	}
	printf("\nApresentacao da Matriz:\n");
	for(contlinhas=0;contlinhas<6;contlinhas++){
		for(contcolunas=0;contcolunas<6;contcolunas++){
			printf("%d\t", matriz[contlinhas][contcolunas]);
			if(contlinhas==contcolunas){
				soma = soma + matriz[contlinhas][contcolunas];
			}
		}
		printf("\n");
	}
	printf("Soma da diagonal principal: %d", soma);
	return 0;
}