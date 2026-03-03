#include <stdio.h>

int main() {
    float media, renda_per_capita;
    int calouro, debito_biblioteca;
    int elegivel;

    printf("Digite a media: ");
    scanf("%f", &media);

    printf("Digite a renda per capita: ");
    scanf("%f", &renda_per_capita);

    printf("Digite 1 se for calouro, 0 caso contrario: ");
    scanf("%d", &calouro);

    printf("Digite 1 se tiver debito na biblioteca, 0 caso contrario: ");
    scanf("%d", &debito_biblioteca);

    elegivel = ((media >= 8.5 && renda_per_capita < 1500) ||
               (calouro == 1 && media >= 9.0))
               && (debito_biblioteca == 0);

    printf("%d\n", elegivel);

    return 0;
}