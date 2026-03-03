#include <stdio.h>

int main() {
    float raio, lado, area_circulo, area_quadrado, perimetro_circulo, perimetro_quadrado, diferenca_area, soma_perimetros;
    const float PI = 3.14159;

    printf("Digite o raio do circulo ");
    scanf("%f", &raio);
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area_circulo = PI * raio * raio;
    perimetro_circulo = 2 * PI * raio;

    area_quadrado = lado * lado;
    perimetro_quadrado = 4 * lado;

    diferenca_area = (area_circulo > area_quadrado) * (area_circulo - area_quadrado) + (area_quadrado >= area_circulo) * (area_quadrado - area_circulo);

    soma_perimetros = perimetro_circulo + perimetro_quadrado;


    printf("\narea do circulo: %f", area_circulo);
    printf("\nperimetros do circulo: %f", perimetro_circulo);
    
    printf("\narea do quadrado: %f", area_quadrado);
    printf("\nPerimetro do quadrado: %f", perimetro_quadrado);
    
    printf("\nDiferenca absoluta entre as areas: %f", diferenca_area);
    printf("\nSoma dos perimetros : %f", soma_perimetros);

    return 0;
}
