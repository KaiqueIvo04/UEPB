#include <stdio.h>

float x, y, z;

int isTriangle (float x, float y, float z);

int main() {

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &x);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &y);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &z);

    if (isTriangle(x, y, z) == 0) {
        printf("\nEsses lados nao formam um triangulo.");
    }
    else if (isTriangle(x, y, z) == 1) {
        printf("\nTriangulo Equilatero");
    }
    else if (isTriangle(x, y, z) == 2) {
        printf("\nTriangulo Isosceles");
    }
    else if (isTriangle(x, y, z) == 3) {
        printf("\nTriangulo Escaleno");
    }

    return 0;
}

int isTriangle (float x, float y, float z) {

    if (x < y+z && y < x+z && z < x+y) {
        if (x == y && y == z) {
            return 1;
        }
        else if (y == z || x == y) {
            return 2;
        }
        else if (x != z && x != y) {
            return 3;
        }
    }
    else {
        return 0;
    }
}