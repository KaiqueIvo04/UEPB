#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "Portuguese");
    
    int num;
    int cont;
    cont = 1;
    int i;

    for (cont = 1; cont <= 5; cont++) {

        printf("Insira um número inteiro até 30:\n");
        scanf("%d", &num);
        if (num > 30) {
            printf("Número inválido\n");
            break;
        }
        if (num < 0) {
            printf("Número inválido\n");
            break;
        }
        for (i = 1 ;i <= num ; i++) {
            printf("*");
        }
    }
    
    return 0;
}