#include <stdio.h>
#include <string.h>

int main () {

    int num, i, cont = 0;

    printf("Digite o numero maximo que seja impar:\n");
    scanf("%d", &num);

    if (num % 2 == 1) {
        while (cont != num) {
    
            for (i = cont; i < num - cont; i++) {
            
                printf("%d ", i+1);
            
            }
        
            cont ++;
            printf("\n");

            if (i+1 > cont) {
                for (i = 0; i < cont; i++) {
                    printf("  ");
                }
            }
        }
    }
    else {
        printf("O numero digitado nao eh impar");
    }
    return 0;
}