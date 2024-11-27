#include <stdio.h>
#include <stdlib.h>

//Nome: Matheus Emanuel Camargo Alves

typedef struct {
	char nome[50], endereco[50];
	int idade;
} Cadastro;

Cadastro* inicializarEstrutura(int n){
	Cadastro *auxiliar;
	auxiliar = (Cadastro*) malloc(n * sizeof(Cadastro));
	if(auxiliar == NULL){
		printf("Nao foi possivel alocar memoria\n");
		exit(1);
	}
	/*	Digite os dados na seguinte ordem:
		nome
		idade
		endereco
	*/
	printf("Digite o nome da pessoa:\nDigite a idade da pessoa:\n"
	"Digite o endereco da pessoa:\n");
	int i;
	for(i = 0; i < n; i++){
		printf("\n\n Cadastro: %d\n", i);
		setbuf(stdin, NULL);
		fgets(auxiliar[i].nome, 50, stdin);
		scanf("%d", &auxiliar[i].idade);
		setbuf(stdin, NULL);
		fgets(auxiliar[i].endereco, 50, stdin);	
	}
	return auxiliar;
}
void printarcadastros(Cadastro *cadastros, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\n\nCadastro %d:\n", i+1);
        printf("Nome: %s", cadastros[i].nome);
        printf("Idade: %d\n", cadastros[i].idade);
        printf("Endereco: %s", cadastros[i].endereco);
    }
}


int main(){
	int N;
	Cadastro *estruturas;
	printf("Digite quantos cadastros serão feitos: \n");
	scanf("%d", &N);

	estruturas = inicializarEstrutura(N);
	
	printarcadastros(estruturas, N);

	// liberando memoria alocada
	free(estruturas);
	estruturas = NULL;
	return 0;
}
