#include <stdio.h>

int main(){

    int vetor[5];
    int i;
    for (i = 0; i < 5; i++){
        printf("Digite um numero para o vetor: ");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 5; i++) {
        if ((vetor[i] % 2) == 0) {
            printf("O endereco de memoria do %d e: %p\n",vetor[i], &vetor[i]);
        }
    }

    return 0;
}