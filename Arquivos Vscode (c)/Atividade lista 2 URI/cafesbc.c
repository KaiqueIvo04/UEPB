#include <stdio.h>

int main () {

    int a1, a2 , a3, minutosTotal[3];

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    minutosTotal[0] = (a1 * 2) + (a3 * 2);
    minutosTotal[1] = (a2 * 2) + (a3 * 4);
    minutosTotal[2] = (a2 * 2) + (a1 * 4);
    if (minutosTotal[0] <= minutosTotal[1] && minutosTotal[0] <= minutosTotal[2]) {
        printf("%d\n", minutosTotal[0]);
    }
    else if (minutosTotal[1] <= minutosTotal[0] && minutosTotal[1] <= minutosTotal[2]) {
        printf("%d\n", minutosTotal[1]);
    }
    else {
        printf("%d\n", minutosTotal[2]);
    }

    return 0;
}