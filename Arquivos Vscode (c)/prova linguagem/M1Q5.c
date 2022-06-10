#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {

    int i, x;
    char nome[3][30], contA = 0, contE = 0, tam = 0;

    for (i = 0; i < 3; i++) {
        printf("Digite um nome:");
        scanf("%s", &nome[i]);
    }

    for (i = 0; i < 3;i++) {

        tam = strlen(nome[i]);
        for (x = 0; x <= tam-1; x++) {
            if (nome[i][x] == 'A' || nome[i][x] == 'a') {
                contA++;
            }
            if (nome[i][x] == 'E' || nome[i][x] == 'e') {
                contE++;
            }
        }
    }
    printf("Nos nomes existem %d letras A\n", contA);
    printf("Nos nomes existem %d letras E\n", contE);
    
    return 0;
}