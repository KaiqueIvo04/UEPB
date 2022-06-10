#include <stdio.h>

int num1;
int verifica(int num1);


int main() {

    printf("Digite um numero: ");
    scanf("%d", &num1);
    if (verifica(num1) == 0) {
        printf("\nO numero eh impar");
    }
    else if (verifica(num1) == 1) {
        printf("\nO numero eh par");
    }
    else {
        printf("\nErro");
    }

    return 0;
}

int verifica(int num1) {
    if (num1 % 2 == 0) {
        return 1;
    }
    else if (num1 % 2 == 1) {
        return 0;
    }

}