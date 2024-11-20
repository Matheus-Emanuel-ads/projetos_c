#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Fun��o para calcular o fatorial de um n�mero

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int somaalgarismo(int num){
	int soma = 0;
	
	while (num != 0){
		
		soma += num % 10;
		num /= 10;
	}
	return soma;
}

int somafatorial(int N){
	int fatorialN = fatorial(N);
	return somaalgarismo(fatorialN);
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int N;

	printf("Insira um n�mero e receba seu valor fatorial: \n");
	scanf("%d", &N);
	
	int resultado = fatorial(N);
	
	printf("O resultado do fatorial de %d! �: %d\n", N, fatorial(N));
	
	printf("A soma do fatorial de %d �: %d \n", N, somafatorial(N));

	return 0;
}
