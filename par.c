#include<stdio.h>
#include<locale.h>


int main() {

	setlocale(LC_ALL,"");
    int numero;

// Entrada do número
    printf("Digite um número: ");
    scanf("%d", &numero);

    

   
// Verificação se o número é par
    
   
	if (numero % 2 == 0) {
        
    	printf("%d é um número par.\n", numero);
    
	} else {
        
       	printf("%d é um número ímpar.\n", numero);
    
	}

    }

