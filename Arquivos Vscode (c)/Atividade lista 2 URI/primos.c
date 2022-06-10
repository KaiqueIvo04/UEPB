#include <stdio.h>

int main() {
    
    int contador, i, n, resultado = 0, x;

    scanf("%d", &contador);
    
    for(i = 1; i <= contador; i++) {

        scanf("%d", &n);

        for(x = 2; x <= n / 2; x++) {
            
            if (n % x == 0) {
                resultado++;
                break;
            }
            
        }
        if (resultado == 0) {
            printf("%d eh primo\n", n);
        }
        else {
            printf("%d nao eh primo\n", n);
        }
        resultado = 0;
    }
    
    return 0;
}