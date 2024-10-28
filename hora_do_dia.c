#include<stdio.h>

int main() {

	int hora;

	printf("Digite uma hora do dia:");
	scanf("%d", &hora);

	if(hora > 5 && hora <= 12) {
		printf("Bom dia");
	}
	
	else if(hora > 12 && hora < 18){
		
		printf("Boa tarde");
	}
	else {
		printf("Boa noite");
	}

}
