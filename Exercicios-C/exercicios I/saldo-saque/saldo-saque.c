#include <stdio.h>

int main() {
    float saldoInicial, deposito1, saque1, deposito2, taxaManutencao, saldoFinal;

    printf("Digite o saldo inicial: ");
    scanf("%f", &saldoInicial);

    printf("Digite o valor do primeiro deposito: ");
    scanf("%f", &deposito1);

    printf("Digite o valor do primeiro saque: ");
    scanf("%f", &saque1);

    printf("Digite o valor do segundo deposito: ");
    scanf("%f", &deposito2);

    printf("Digite a taxa de manutencao: ");
    scanf("%f", &taxaManutencao);

    saldoFinal = saldoInicial + deposito1;
    saldoFinal = saldoFinal - saque1;
    saldoFinal = saldoFinal + deposito2;
    saldoFinal = saldoFinal - taxaManutencao;

    printf("\nSaldo Final: %.2f", saldoFinal);

    return 0;
}