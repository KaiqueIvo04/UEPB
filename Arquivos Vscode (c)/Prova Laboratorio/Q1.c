#include <stdio.h>

int main() {

    int x, i;

    while (x != 0) {
        scanf("%d", &x);

        for (i = 1; i <= x; i++) {
            printf("%d%c", i, i == x ? '\n' : ' ');
        }
    }

    return 0;
}