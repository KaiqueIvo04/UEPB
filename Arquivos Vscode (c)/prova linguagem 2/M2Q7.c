#include <stdio.h>

int num1, num2;
int mdc(int num1, int num2);

int main() {

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("\nMaximo dividor comum: %d", mdc(num1 , num2));

    return 0;
}

int mdc(int num1, int num2) {
    int n;
    if (num1 % num2 == 0){
        return num2;
    }
    else {
        return mdc(num2, num1 % num2);
    }
}