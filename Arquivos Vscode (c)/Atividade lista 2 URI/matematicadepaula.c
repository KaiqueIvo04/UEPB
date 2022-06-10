#include <stdio.h>

int main () {

    int contador, i, n1, n2, resultado;
    char letra;

    scanf("%d", &contador);

    for(i = 1; i <= contador; i++) {

        scanf("%d%c%d", &n1, &letra, &n2);

        if (n1 == n2) {
            
            resultado = n2 * n1;
            printf("%d\n", resultado);
        }
        else if (letra >= 'A' && letra <= 'Z') {

            resultado = n2 - n1;
            printf("%d\n", resultado);
        }
        else if (letra >= 'a' && letra <= 'z') {

            resultado = n2 + n1;
            printf("%d\n", resultado);
        }

    }
    

    return 0;
}