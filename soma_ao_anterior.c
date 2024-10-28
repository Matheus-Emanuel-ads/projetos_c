#include<stdio.h>

int main(){
	
	int num = 0;
	int soma = 0;
	
	for(num = 0; num <= 10; num ++){
		
		printf(" numero: %d Soma: %d \n", num, soma);
		
		soma = soma + num;
	}
	printf("\n Soma: %d", soma);
}
