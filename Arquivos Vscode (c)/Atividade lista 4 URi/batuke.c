#include <stdio.h>

int main() {

    int N, F, C;
    int i,j;
    int valor;
    int passo = 1;
    int casasVisitadas = 0, casasPercorridas = 0;

    scanf("%d %d %d", &N, &F, &C);

    if (C >= 0 && C < N && F >= 0 && F < N) {
        printf("%d ", ((F * N) + (C + 1)));
        casasVisitadas++;
    }
    casasPercorridas++;

    while (casasVisitadas < (N*N)) {
        int k;
        if (passo % 2 != 0) {

            for (k = 0; k < passo; k++) {
                if (casasVisitadas < (N*N)) {
                    C++;
                    if (C >= 0 && C < N && F >= 0 && F < N) {
                        printf("%d", ((F * N) + (C + 1)));
                        casasVisitadas++;
                        if (casasVisitadas == (N*N)) {
                            void;
                        }
                        else {
                            printf(" ");
                        }
                    }
                    casasPercorridas++;
                }
            }
            
            for (k = 0; k < passo; k++) {
                if (casasVisitadas < (N*N)) {
                    F++;
                    if (C >= 0 && C < N && F >= 0 && F < N) {
                        printf("%d", ((F * N) + (C + 1)));
                        casasVisitadas++;
                        if (casasVisitadas == (N*N)) {
                            void;
                        }
                        else {
                            printf(" ");
                        }
                    }
                    casasPercorridas++;
                }
            }

            passo++;
        }
        else {
            for (k = 0; k < passo; k++) {
                if (casasVisitadas < (N*N)) {
                    C--;
                    if (C >= 0 && C < N && F >= 0 && F < N) {
                        printf("%d", ((F * N) + (C + 1)));
                        casasVisitadas++;
                        if (casasVisitadas == (N*N)) {
                            void;
                        }
                        else {
                            printf(" ");
                        }
                    }
                    casasPercorridas++;
                }
            }
            
            for (k = 0; k < passo; k++) {
                if (casasVisitadas < (N*N)) {
                    F--;
                    if (C >= 0 && C < N && F >= 0 && F < N) {
                        printf("%d", ((F * N) + (C + 1)));
                        casasVisitadas++;
                        if (casasVisitadas == (N*N)) {
                            void;
                        }
                        else {
                            printf(" ");
                        }
                    }
                    casasPercorridas++;
                }
            }
        
            passo++;
        }
    }
    printf("\n%d\n", casasPercorridas);
    return 0;
}