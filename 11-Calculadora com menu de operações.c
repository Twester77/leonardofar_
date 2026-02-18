#include <stdio.h>

int main() {
    int Opcao;
    double N1, N2, resultado; 

    printf("----Bem vindo a Calculadora Interativa!----\n");
    printf("\nEscolha uma opcao abaixo:\n");
    printf("1. Soma\n");
    printf("2. Elevar os dois numeros ao quadrado\n");
    printf("3. Divisao\n");
    printf("4. Multiplicacao\n");
    printf("Escolha a sua opcao (1-4): ");
    scanf("%d", &Opcao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &N1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &N2);

    printf("\n--- Resultado ---\n");

    switch (Opcao) {
        case 1:
            resultado = N1 + N2;
            printf("%.2lf + %.2lf = %.2lf\n", N1, N2, resultado);
            break;

        case 2:
            printf("%.2lf ao quadrado e: %.2lf\n", N1, N1 * N1);
            printf("%.2lf ao quadrado e: %.2lf\n", N2, N2 * N2);
            break;

        case 3:
            if (N2 == 0) {
                printf("Erro: Nao e possivel dividir por 0!\n");
            } else {
                resultado = N1 / N2;
                printf("%.2lf / %.2lf = %.2lf\n", N1, N2, resultado);
            }
            break;

        case 4:
            resultado = N1 * N2;
            printf("%.2lf * %.2lf = %.2lf\n", N1, N2, resultado);
            break;

        default:
            printf("Opcao invalida!\n");
    } 

    return 0;
}
