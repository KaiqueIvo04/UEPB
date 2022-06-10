#include <stdio.h>

int main() {

    int idade, cont21 = 0, cont50 = 0;

    printf("Informe a idade:");
    scanf("%d", &idade);

    while (idade != -99) {

        printf("Informe a idade:");
        scanf("%d", &idade);

        if (idade < 21) {
            cont21++;
        }
        else if (idade > 50) {
            cont50++;
        }

    }
    printf("Total de pessoas com menos de 21 anos: %d\n", cont21);
    printf("Total de pessoas com mais de 50 anos: %d\n", cont50);
    
    return 0;
}