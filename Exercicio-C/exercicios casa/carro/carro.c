#include <stdio.h>

int main() {
    float matriz[8][8]; // matriz
    float consumo; // km/L
    int i, j; //linha-coluna

    printf("Informe o consumo do veiculo (km/l): ");
    scanf("%f", &consumo);

    printf("\nDigite as distancias entre as cidades (em km):\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (i == j) {
                matriz[i][j] = 0;
            } else {
                printf("Distancia de cidade %d para cidade %d: ", i + 1, j + 1);
                scanf("%f", &matriz[i][j]);
            }
        }
    }

    printf("\n--- Percursos com distancia <= 100 km ---\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (i != j && matriz[i][j] <= 100) {
                printf("Cidade %d -> Cidade %d : %.2f km\n", i + 1, j + 1, matriz[i][j]);
            }
        }
    }

    printf("\n--- Combustivel necessario para cada percurso ---\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (i != j) {
                float litros = matriz[i][j] / consumo;
                printf("Cidade %d -> Cidade %d : %.2f km = %.2f litros\n",
                       i + 1, j + 1, matriz[i][j], litros);
            }
        }
    }

    return 0;
}
