#include <stdio.h>

int main() {

    int matrizA[5][5], matrizB[5][5], matrizC[5][5], i, j;

    for (i = 0 ; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                printf("Digite o valor [%d, %d] da matriz A: ", i+1, j+1);
                scanf("%d", &matrizA[i][j]);
            }
    }

    printf("Matriz A:\n");
    printf("\n");

    for (i = 0 ; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    for (i = 0 ; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                printf("Digite o valor [%d, %d] da matriz B: ", i+1, j+1);
                scanf("%d", &matrizB[i][j]);
            }
    }

    printf("Matriz B:\n");
    printf("\n");
    
    for (i = 0 ; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("Soma das duas matrizes:\n");
    printf("\n");

    for (i = 0 ; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    printf("Subtracao das duas matrizes:\n");
    printf("\n");

    for (i = 0 ; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}