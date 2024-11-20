#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// calculo da media dos numeros de um vetor usando uma funcao

float calcularmedia(float vetor[], int tamanho){
	float soma = 0.0;
	int i;
	for(i = 0; i < tamanho; i++){
		soma += vetor[i];
	}
	return soma / tamanho;
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int tamanho, i;
	printf("Digite o tamanho do vetor:");
	scanf("%d", &tamanho);
	
	float vetor[tamanho];
	printf("Digite os elementos do vetor");
	
	for(i = 0; i < tamanho; i++){
		scanf("%f", &vetor[i]);
	}
	
	float media = calcularmedia(vetor, tamanho);
	printf("A média dos elementos do vetor é %.2f \n", media);
	
	return 0;
	
}
