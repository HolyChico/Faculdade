#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char opcao;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nEscolha a operacao: ");
    printf("\n+ para soma ");
    printf("\n- para subtracao ");
    printf("\n* para multiplicacao ");
    printf("\n/ para divisao ");
    printf("\n ");
    
    scanf("\n %c", &opcao);

    switch(opcao) {
        case '+':
            resultado = num1 + num2;
            printf("\nResultado: %d", resultado);
            break;
            
        case '-':
            resultado = num1 - num2;
            printf("\nResultado: %d", resultado);
            break;
            
        case '*':
            resultado = num1 * num2;
            printf("\nResultado: %d", resultado);
            break;
            
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("\nResultado: %d", resultado);
            } else {
                printf("\nErro: divisao por zero!");
            }
            break;
            
        default:
            printf("\nOperacao invalida!");
    }

    return 0;
}