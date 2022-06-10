#include <stdio.h>
#include <string.h>

int op, tamanho;
char s1[20], s2[20];

void menu();
void ler();
void imprimir();
void comparar();
void concatenar();
void contar();
void substituir();
void verificar();
void substring();

int main() {
    do {
        menu();
        scanf("%d", &op);

        switch (op) {
            case 1: ler(); break;
            case 2: imprimir(); break;
            case 3: comparar(); break;
            case 4: concatenar(); break;
            case 5: imprimirInversa(); break;
            case 6: contar(); break;
            case 7: substituir(); break;
            case 8: verificar(); break;
            case 9: substring(); break;
        
        }

    } while(op != 0);

    return 0;
}
void menu() {
    printf("\n\nDigite uma das opcoes:");
    printf("\n1 - Ler a string principal");
    printf("\n2 - Imprimir o tamanho da string");
    printf("\n3 - Comparar string");
    printf("\n4 - Concatenar a string");
    printf("\n5 - Imprimir a string de forma inversa");
    printf("\n6 - Contar quantas vezes um caractere aparece na string");
    printf("\n7 - Substituir um caractere na string");
    printf("\n8 - Verificar se uma string e substring da string principal");
    printf("\n9 - Retornar uma substring da string");
    printf("\n0 - Sair\n");
}
void ler() {
    printf("\nDigite a string principal: ");
    scanf("%s", &s1);
}
void imprimir() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        tamanho = strlen(s1);
        printf("\nA string tem tamanho igual a: %d", tamanho);
    }
}
void comparar() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        printf("\nDigite a string com qual voce deseja comparar com a principal: ");
        scanf("%s", &s2);
        if (strcmp(s1,s2) == 0) {
            printf("\nAs strings sao iguais.");
        }
        else {
            printf("\nAs strings sao diferentes.");
        }
    }
}
void concatenar() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        printf("\nDigite a string com qual voce deseja concatenar com a principal: ");
        scanf("%s", &s2);
        strcat(s1,s2);
        printf("\nSua string agora eh: %s", s1);
    }
}
void imprimirInversa() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        int i, aux, fim, tam = strlen(s1);

        fim = tam - 1;
        for(i = 0; i < tam/2; i++){
            aux = s1[i];
            s1[i] = s1[fim];
            s1[fim] = aux;
            fim--;
        }
        printf("\nA string inversa eh: %s",s1);
    }
}
void contar() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        int i, tam = strlen(s1), cont = 0;
        char caracter[2];

        printf("\nDigite o caractere que vc deseja contar: ");
        scanf("%s", caracter);

        for (i = 0; i < tam; i++) {
            if (s1[i] == caracter[0]) {
                cont++;
            }
        }
        printf("\nEste caractere aparece %d vez(es) na string", cont);
    }
}
void substituir() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        int i, tam = strlen(s1), cont = 0;
        char caracter[2], caracter2[2];

        printf("\nDigite o caractere que vc deseja substituir na string: ");
        scanf("%s", &caracter);
        printf("\nDigite o caractere que vc deseja colocar no lugar: ");
        scanf("%s", &caracter2);

        for (i = 0; i < tam; i++) {
            if (s1[i] == caracter[0]) {
                s1[i] = caracter2[0];
            }
        }
        printf("\nA string agora eh %s", s1);
    }
}
void verificar() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        char x;

        printf("\nDigite a string que voce deseja verificar se e substring: ");
        scanf("%s", &s2);

        x = strstr(s1,s2);
        if (x) {
            printf("\nEh substring da string principal");
        }
        else {
            printf("\nNao eh substring");
        }
    }
}
void substring() {
    if (strlen(s1) == 0) {
        printf("\nNao existe nenhuma string principal");
    }
    else {
        int pos, tam, i, aux;
        aux = strlen(s1);
        printf("\nIndique a posicao que voce quer que comece a substring: ");
        scanf("%d", &pos);
        printf("\nDigite o tamanho da substring: ");
        scanf("%d", &tam);

        printf("\nA substring eh: ");

        for (i = 0; i < aux; i++) {
            if (i >= pos && i < (pos + tam)) {
                printf("%c", s1[i]);
            }
        }
    }
}