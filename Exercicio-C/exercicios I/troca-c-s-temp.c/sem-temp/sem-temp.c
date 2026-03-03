#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    printf("Antes da troca: a = %d, b = %d, c = %d\n", a, b, c);

    // troca ciclica usando apenas aritmetica
    a = a + b + c;   // soma tudo
    b = a - (b + c); // b recebe valor antigo de a
    c = a - (b + c); // c recebe valor antigo de b
    a = a - (b + c); // a recebe valor antigo de c

    printf("Depois da troca (sem temp): a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}