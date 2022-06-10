#include <stdio.h>

int main() {
    
    FILE *arquivo;
    char frase[50], espaco[2] = {" "};
    int i;
    arquivo = fopen("questao8.txt","w");
    printf("\nO arquivo foi criado.");

    for (i = 0; i < 10; i++) {

        printf("\nDigite uma palavra para adicionar ao arquivo: ");
        scanf("%s", &frase);
        fputs(frase, arquivo);
        fputs(espaco, arquivo);

    }
    fclose(arquivo);
    arquivo = fopen("questao8", "r");

    if (arquivo != NULL) {
        while (fscanf(arquivo, "%[^\n]s", &frase) != EOF) {
            printf("%s", frase);
        }
        
    }
    fclose(arquivo);

    return 0;
}