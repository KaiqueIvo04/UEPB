#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "Portuguese");
    
    int num;
    int cont;
    cont = 1;
    int i;

    for (cont = 1; cont <= 5; cont++) {

        printf("Insira um n�mero inteiro at� 30:\n");
        scanf("%d", &num);
        if (num > 30) {
            printf("N�mero inv�lido\n");
            break;
        }
        if (num < 0) {
            printf("N�mero inv�lido\n");
            break;
        }
        for (i = 1 ;i <= num ; i++) {
            printf("*");
        }
    }
    
    return 0;
}