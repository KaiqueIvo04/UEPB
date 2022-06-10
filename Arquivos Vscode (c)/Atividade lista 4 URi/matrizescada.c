#include <stdio.h>

int main() {
    int n, m, i, j, esq, cont, ok = 1, index = -1, digito;
    
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        cont = 0;
        esq = 1;
        for (j = 0; j < m; j++) {
            scanf("%d", &digito);
            if (digito == 0 && esq == 1) {
                cont++;
            }
            else {
                esq = 0;
            }
        }

        if (cont <= index && cont < m) {
            ok = 0;
        }
        index = cont;
    }
    
    if (ok == 1) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    
    return 0;
}