#include<stdio.h>
#include<locale.h>


int main() {

	setlocale(LC_ALL,"");
    int numero;

// Entrada do n�mero
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    

   
// Verifica��o se o n�mero � par
    
   
	if (numero % 2 == 0) {
        
    	printf("%d � um n�mero par.\n", numero);
    
	} else {
        
       	printf("%d � um n�mero �mpar.\n", numero);
    
	}

    }

