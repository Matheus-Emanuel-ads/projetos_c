#include<stdio.h>

int main(){
	
	int numero;
	int digitado = 10;
	
	printf("Digite um numero:");
	scanf("%d", &numero);
	
	while(digitado <= numero){
		
		printf("%d \n", digitado);
		
		digitado += 2;
	}
}
