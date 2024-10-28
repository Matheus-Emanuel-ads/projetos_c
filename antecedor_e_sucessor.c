#include<stdio.h>

int main() {

	int numero;
	int nmenos;
	int nmais;

	printf("Digite um numero e receba seu antecedor e sucessor:");
	scanf("%d", &numero);

	nmenos = numero - 1;
	nmais = numero + 1;

	printf("Antecedor: %d \n", nmenos);
	printf("Sucessor: %d \n", nmais);
}
