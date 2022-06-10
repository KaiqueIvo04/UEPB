#include<stdio.h>

int main() {

    int vetor[10], i, j, aux = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero inteiro:");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i+1; j < 10; j++){
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    printf("Ordem crescente: ");
    for (i = 0; i < 10; i++) {
        printf(" %d ", vetor[i]);
    }
    printf("\n");
    printf("Ordem decrescente: ");
    for (i = 0; i < 10; i++) {
        for (j = i+1; j < 10; j++){
            if (vetor[i] < vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf(" %d ", vetor[i]);
    }
    return 0;
}