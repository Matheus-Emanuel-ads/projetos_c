#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// funcao para calcular a soma dos elementos acima da diagonal principal

int soma_acima_diagonal(int matriz[3] [3]){
	
	int i, j, soma = 0;
	
	for(i = 0; i < 3; i++){
		for(j = i + 1; j < 3; j++){
			soma += matriz[i][j];
		}
	}
	return soma;
}

int main(){
	int i, j, matriz[3][3];
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira os elementos para a matriz 3x3: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Elementos [%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	int soma = soma_acima_diagonal(matriz);
	
	printf("Soma dos números da diagonal superior da matriz: %d \n", soma);
	
	return 0;
}





