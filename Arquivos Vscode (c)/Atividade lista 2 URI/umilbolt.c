#include <stdio.h>

int main() {

    int tentativas, i;
    double t, menor;

    while (scanf("%d", &tentativas) != EOF) {
        menor = 11;
        for (i = 0; i < tentativas; i++) {

            
            scanf("%lf", &t);

            if (t < menor) {
                menor = t; 
            }
            
        }
        printf("%.2lf\n", menor);
    }
    return 0;
}