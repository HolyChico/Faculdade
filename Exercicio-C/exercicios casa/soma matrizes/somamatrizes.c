#include <stdio.h>

int main(void) {
    int matrizA[4][4], matrizB[4][4]; //matrizes A e B
    int matrizC[4][4]; // matriz para soma
    int i, j; //linhas - colunas
    
    //matrizA
    matrizA[0][0] = 7; matrizA[0][1] = 12; matrizA[0][2] = 5; matrizA[0][3] = 20;
    matrizA[1][0] = 3; matrizA[1][1] = 18; matrizA[1][2] = 1; matrizA[1][3] = 9;
    matrizA[2][0] = 11; matrizA[2][1] = 2; matrizA[2][2] = 15; matrizA[2][3] = 4;
    matrizA[3][0] = 8; matrizA[3][1] = 10; matrizA[3][2] = 6; matrizA[3][3] = 13;
    
    //matrizB
    matrizB[0][0] = 5; matrizB[0][1] = 1; matrizB[0][2] = 8; matrizB[0][3] = 2;
    matrizB[1][0] = 14; matrizB[1][1] = 7; matrizB[1][2] = 10; matrizB[1][3] = 3;
    matrizB[2][0] = 6; matrizB[2][1] = 13; matrizB[2][2] = 4; matrizB[2][3] = 19;
    matrizB[3][0] = 1; matrizB[3][1] = 9; matrizB[3][2] = 16; matrizB[3][3] = 5;


    //calculando soma da matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    //mostrando as matrizes
    printf("\n Matriz A \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n Matriz B \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\n Soma das matrizes \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrizC[i][j]); 
        }
        printf("\n");
    }

    return 0;
}