#include <stdio.h>

int main(void) {

    float base, altura, area;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    
    printf("Digite altura do retangulo: ");
    scanf("%f", &altura);
    
    area = base*altura;
    
    printf("A area do retangulo = %.2f", area);
    
    return 0;
}