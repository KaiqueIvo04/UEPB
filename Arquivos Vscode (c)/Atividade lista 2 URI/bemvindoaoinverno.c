#include <stdio.h>

int main() {

    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);

    if (A > B && C > B && A > C) {
        printf(":)\n");
    }
    else if (B > A && B > C && A < C) {
        printf(":(\n");
    }
    else if ((B-C) > (A-B)) {
        printf(":(\n");
    }
    else if ((B-C) < (A-B)) {
        printf(":)\n");
    }
    else if ((C-B) < (B-A)) {
        printf(":)\n");
    }
    else if ((C-B) > (B-A)) {
        printf(":(\n");
    }
    else if (A == B && C > B && A < C) {
        printf(":)\n");
    }
    else if (A == B && C < B && A > C) {
        printf(":)\n");
    }

    return 0;
}