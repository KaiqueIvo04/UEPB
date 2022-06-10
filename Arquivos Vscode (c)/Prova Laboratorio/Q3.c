#include<stdio.h>

int main() {

    int casos, i, pa, pb, anos;
    float g1, g2;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        anos = 0;
        while (pa <= pb) {

            pa *= (g1/100) + 1.0;
            pb *= (g2/100) + 1.0;
            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
        
    }

    return 0;
}