#include <stdio.h>

int main() {
    int num1, num2, num3, aux, maior;

    printf("\nDigite primeiro numero: ");
    scanf("%d" , &num1);
    
    printf("\nDigite segundo numero: ");
    scanf("%d" , &num2);
    
    printf("\nDigite terceiro numero: ");
    scanf("%d" , &num3);

    maior = num1;
    
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    printf(" ");
    
    if (num1 < num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if (num1 < num3) {
        aux = num1;
        num1 = num3;
        num3 = aux;
    }

    if (num2 < num3) {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    printf("\nMaior numero: %d", maior);
    printf("\nOrdem decrescente: %d %d %d", num1, num2,num3);

    return 0;
}
