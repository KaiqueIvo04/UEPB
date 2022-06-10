#include <stdio.h>
#include <string.h>

int main(){

    char palavra[30];
    int i, num, cont = 0;
    
    printf("Informe a palavra:\n");
    scanf("%s", &palavra);
    num = strlen(palavra);

    while (cont < num) {
        for (i = 0; i < (cont +1); i++) {
            printf("%s", palavra);
        }
        cont++;
        printf("\n");
    }
    
    return 0;
}