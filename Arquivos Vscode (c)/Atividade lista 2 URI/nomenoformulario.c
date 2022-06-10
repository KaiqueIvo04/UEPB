#include<stdio.h>

int main() {

    char *nome = (char *) malloc(sizeof(char) * 512);
    int posicao = 0, passou = 0;

    gets(nome);

    while (nome[posicao] != '\0') {
        posicao++;

        if (posicao > 80) {
            passou = 1;
            break;
        }
    }

    if (passou)
        printf("NO\n");

    else 
        printf("YES\n");

    return 0;
}