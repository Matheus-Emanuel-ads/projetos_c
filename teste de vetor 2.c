#include <stdio.h>
#include <stdlib.h>
#define HORIZONTAL 2
#define VERTICAL 2
 
int main(){
int i, j;
int vetordenumeros[HORIZONTAL][VERTICAL];
int aux1, aux2;
	
	printf("Digite numeros para uma matriz:");
	
	for(i = 0; i < 2; i++){
		
		for(j = 0; j < 2; j++){
			
			scanf("%d", &vetordenumeros[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 2; i++){
		
		for(j = 0; j < 2; j++){
			
			printf("%3d", vetordenumeros[i][j]);
		}
		printf("\n");
	}
	
	aux1 = vetordenumeros[0][0];
	aux2 = vetordenumeros[0][1];
	
	vetordenumeros[0][0] = vetordenumeros[1][0];
	vetordenumeros[0][1] = vetordenumeros[1][1];
	vetordenumeros[1][0] = aux1;
	vetordenumeros[1][1] = aux2;
	
	printf(" \n %d %d", vetordenumeros[0][0], vetordenumeros[0][1]);
	printf(" \n %d %d", vetordenumeros[1][0], vetordenumeros[1][1]);
	
}
