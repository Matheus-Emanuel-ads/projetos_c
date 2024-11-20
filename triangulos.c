#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Codigo para determinacao de um triangulo

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float lado1, lado2, lado3;
	
		printf("Digite três números para determinar se formam um triângulo, e de qual tipo: \n ");
	
		printf("--------------Lado 1-------------- \n");
		scanf("%f", &lado1);
	
		printf("--------------Lado 2-------------- \n");
		scanf("%f", &lado2);
	
		printf("--------------Lado 3-------------- \n");
		scanf("%f", &lado3);
		
		float soma1, soma2, soma3;
		
		soma1 = lado1 + lado2;
		soma2 = lado1 + lado3;
		soma3 = lado2 + lado3;

	if(soma1 > lado3 && soma2 > lado2 && soma3 > lado1){
	
		if(lado1 == 0 || lado2 == 0 || lado3 == 0){
		
			printf("--------------Não existem Triângulos com lado 0-------------- \n");
		}
		else if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
		
			printf("--------------Triângulo Equilátero-------------- \n");
		}
		else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		
			printf("--------------Triângulo Escaleno-------------- \n");
		}
		else{
			printf("--------------Triângulo Isósceles-------------- \n");
		}
	}
	else{
		printf("--------------• O comprimento de cada lado de um triangulo deve ser menor do que a soma dos outros dois lados.-------------- \n");
	}
}
