#include <stdio.h>
#include <stdlib.h>

int funcao(int *vetor,int ma, int mi);

int main() {
    
    int v[] = {0};
    int max, min;
    v[0] = (int *) malloc(sizeof(int));

    funcao(v, max, min);


    return 0;
}

int funcao(int *vetor,int ma, int mi) {
    int n, i = 0, cont = 0, x;
    int maior = 0, menor;

    printf("Digite um valor para o vetor (0 - Para sair): ");
    scanf("%d", &n);
    vetor[i] = n;
    cont++;
    menor = n;
    if (n > maior) {
        maior = n;
    }

    while (!(n == 0)) {
        vetor = (int *) malloc((i + 1) * sizeof(int));
        printf("Digite um valor para o vetor (0 - Para sair): ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        vetor[i] = n;
        i++;
        cont++;
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    }
    ma = maior;
    printf("MAX = %d\n", ma);
    mi = menor;
    printf("MIN = %d\n", mi);

}