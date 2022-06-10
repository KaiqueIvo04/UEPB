#include <stdio.h>

int n;

int somatoria(int n);

int main() {

    printf("Digite um numero ate o qual vc quer somar: ");
    scanf("%d", &n);
    printf("\nSomatoria: %d", somatoria(n));

    return 0;
}

int somatoria(int n) {

    int result, soma;
    if (n == 1) {
        soma = 1;
        return soma;
    }
    else {
        soma = n + somatoria(n-1);
        return soma;
    }

}