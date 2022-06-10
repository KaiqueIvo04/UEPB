#include <stdio.h>

int main () {

    double n1, n2, n3, n4, n5, n6, soma, media;
    int positivos;
    positivos = 0;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
    scanf("%lf", &n5);
    scanf("%lf", &n6);

    if (n1 > 0) {
        positivos++;
        soma += n1;
    }
    if (n2 > 0) {
        positivos++;
        soma += n2;
    }
    if (n3 > 0) {
        positivos++;
        soma += n3;
    }
    if (n4 > 0) {
        positivos++;
        soma += n4;
    }
    if (n5 > 0) {
        positivos++;
        soma += n5;
    }
    if (n6 > 0) {
        positivos++;
        soma += n6;
    }

    media = soma / positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);

    return 0;
}