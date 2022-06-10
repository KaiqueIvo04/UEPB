#include <stdio.h>

int main() {

    int vetor[20], aux = 0, i;

    for ( i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }
    for ( i = 0; i < 10; i++) {
        aux = vetor[i];
        vetor[i] = vetor[19-i];
        vetor[19-i] = aux;
    }
    for ( i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}