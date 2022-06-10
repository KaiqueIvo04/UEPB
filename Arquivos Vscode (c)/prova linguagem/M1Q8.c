#include <stdio.h>

int main() {

    char opniao[15], contSats = 0, contInsats = 0, soma = 0, sats[15] = "satisfatorio", insats[15] = "insatisfatorio", indi[15] = "indiferente";
    int idade;
    float media;

    while (idade != 0) {

        printf("Digite sua opniao: ");
        scanf("%s", &opniao);
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (strcmp(opniao, sats) == 0) {
            contSats++;
            soma += idade;
        }
        if (strcmp(opniao, insats) == 0) {
            contInsats++;
        }
        if (strcmp(opniao, indi) == 0) {
            void;
        }

    }
    media = (float)soma / (float)contSats;
    printf("Contagem de pessoas que responderam Satisfatorio: %d\n", contSats);
    printf("Media das idades das pessoas que responderam Satisfatorio: %.2f\n", media);
    printf("Contagem de pessoas que responderam Insatisfatorio: %d\n", contInsats);
    
    return 0;
}