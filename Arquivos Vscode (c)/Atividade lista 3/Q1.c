#include <stdio.h>

int main() {

    int vetor[10], i;

    for ( i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] <= 0) {
            vetor[i] = 1;
        }
    }
    for ( i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}