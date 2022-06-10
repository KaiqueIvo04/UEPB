#include <stdio.h>

struct criancaS {
    char nome[30];
    int valor;
    int ant, prox;
};

int main()
{
    while (1) {
        int N, i, j;
        struct criancaS crianca[100];

        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            scanf("%s%d", crianca[i].nome, &crianca[i].valor);

            crianca[i].ant = ((i - 1) % N + N) % N;
            crianca[i].prox = (i + 1) % N;
        }

        i = 0;
        while (N > 1) {
            int valor = crianca[i].valor;

            if (valor % 2) {
                for (j = 0; j < valor; ++j)
                    i = crianca[i].prox;
            } else {
                for (j = 0; j < valor; ++j)
                    i = crianca[i].ant;
            }

            crianca[crianca[i].ant].prox = crianca[i].prox;
            crianca[crianca[i].prox].ant = crianca[i].ant;

            --N;
        }
        i = crianca[i].prox;

        printf("Vencedor(a): %s\n", crianca[i].nome);
    }

    return 0;
}