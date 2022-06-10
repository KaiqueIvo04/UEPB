#include <stdio.h>
#include <string.h>

int main () {

    char nome[30], sexo[30], fem[9] = {"feminino"};
    int idade;

    printf("Informe seu nome:\n");
    scanf("%s", &nome);
    printf("Informe seu sexo:\n");
    scanf("%s", &sexo);
    printf("Informe sua idade:\n");
    scanf("%i", &idade);

    if (strcmp(sexo, fem) == 0 && idade < 25) {
        printf("%s ACEITA\n", nome);
    }
    else {
        printf("%s NAO ACEITA\n", nome);
    }
    return 0;
}