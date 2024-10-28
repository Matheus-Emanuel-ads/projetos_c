#include<stdio.h>

int main(){
	
	int num, tabuada;
	
	
	printf("Digite um numero e receba sua taboada:");
	scanf("%d", &tabuada);
	
	for(num = 1; num <= 10; num++)
	
	printf("%d x %d = %d \n", tabuada, num, tabuada * num);
}
