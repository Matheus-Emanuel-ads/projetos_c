#include<stdio.h>

int main() {

    float resultado, n1, n2;
    int operacao;

    // Exibe as opções de operação
    printf("Escolha uma das seguintes operacoes: \n");
    printf("1 - Adicao \n");
    printf("2 - Subtracao \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");

    // Recebe a operação escolhida pelo usuário
    scanf("%d", &operacao);

    // Recebe os dois números para a operação
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    // Executa a operação com base na escolha do usuário
    switch (operacao) {
        case 1:
            resultado = n1 + n2;
            break;
            
        case 2:
            resultado = n1 - n2;
            break;
            
        case 3:
            resultado = n1 * n2;
            break;
            
        case 4:
            resultado = n1 / n2;
            break;
        default:
            printf("Operacao invalida.\n");
            return 1; // Finaliza o programa com erro
    }

    // Exibe o resultado
    printf("Resultado: %f\n", resultado);

    return 0;
}

