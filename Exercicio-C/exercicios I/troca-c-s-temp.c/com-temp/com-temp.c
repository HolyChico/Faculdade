#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int temp;

    printf("Antes da troca: a = %d, b = %d, c = %d\n", a, b, c);

    // troca ciclica usando variavel temporaria
    temp = a;   // guarda valor original de a
    a = c;      // a recebe c original
    c = b;      // c recebe b original
    b = temp;   // b recebe a original

    printf("Depois da troca (com temp): a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}