#include <stdio.h>

int main() {

    float aluno1[4], aluno2[4], aluno3[4], aluno4[4], aluno5[4], soma1 = 0 ,soma2 = 0 ,soma3 = 0 , soma4 = 0, soma5 = 0;
    float media[5];
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno 1: ");
        scanf("%f", &aluno1[i]);    
    }
    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno 2: ");
        scanf("%f", &aluno2[i]);    
    }
    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno 3: ");
        scanf("%f", &aluno3[i]);    
    }
    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno 4: ");
        scanf("%f", &aluno4[i]);    
    }
    for (i = 0; i < 4; i++) {
        printf("Digite a nota do aluno 5: ");
        scanf("%f", &aluno5[i]);    
    }
    for (i = 0; i < 4; i++) {
        soma1 += aluno1[i];
        soma2 += aluno2[i];
        soma3 += aluno3[i];
        soma4 += aluno4[i];
        soma5 += aluno5[i];
    }
    media[0] = soma1 / 4;
    media[1] = soma2 / 4;
    media[2] = soma3 / 4;
    media[3] = soma4 / 4;
    media[4] = soma5 / 4;

    for (i = 0; i < 5; i++) {
        if (media[i] >= 7) {
            printf("Aluno %d aprovado\n", i + 1);
        }
        else {
            printf("Aluno %d reprovado\n", i + 1);
        }
    }
    return 0;
}