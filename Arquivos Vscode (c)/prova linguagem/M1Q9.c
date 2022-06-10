#include <stdio.h>
#define lim 25

int main() {

    int matriz[lim][lim], i, j, m, n;
    printf("Digite a qunatidade de linhas da sua matriz: ");
    scanf("%d", &m);
    printf("Digite a qunatidade de colunas da sua matriz: ");
    scanf("%d", &n);

    if (m < lim && n < lim) {
        for (i = 0 ; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("Digite o valor [%d, %d]: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Sua matriz:\n");

        for (i = 0 ; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("E a matriz transposta:\n");

        for (i = 0 ; i < n; i++) {
            for (j = 0; j < m; j++) {
                printf("%d ", matriz[j][i]);
            }
            printf("\n");
        }
    }
    else {
        printf("Erro: Matriz grande demais");
    }
    return 0;
}