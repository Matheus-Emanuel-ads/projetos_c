#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Escreva uma função para determinar a quantidade de números primos abaixo de N.


int descubra_primos(int n);

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int N;

	printf("Insira um número e receba a quantidade de primos abaixo: ");
	scanf("%d", &N);

	descubra_primos(N);

	return 0;
}

int descubra_primos(int n){

	int i = 0, j = 0, count = 0, qtd_primos = 0, primos[n], k = 0;

	for(i = n-1; i > 0; i--){
		count = 0;
	
		for(j = 1; j <= i; j++){ 
		
			if(i % j == 0){
			
				count++;
			}
		}
		if(count == 2){
		
			qtd_primos++;
			primos[k++] = i;
		}
	}
	printf("Quantidade de números primos abaixo de N é: %d.\n", qtd_primos);
	
	printf("Primos abaixo de N: \n");

	for(i=0; i<qtd_primos; i++){
	
		if(i < k){
		
			printf("%d \n", primos[i]);
			k--;
		}
		else{
		
			printf("%d\n", primos[i]);
		}
	}
	
	return qtd_primos;
}
