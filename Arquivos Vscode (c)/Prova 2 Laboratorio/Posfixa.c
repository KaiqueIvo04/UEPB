#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXPOENTE 1024

int prec(char op);
void convertPosfixa(const char *express, char *sai);

int main (void) {

    int num;

    char infixa[EXPOENTE], posfixa[EXPOENTE];

    scanf("%d\n", &num);

    while (num-- > 0) {

        fgets(infixa, EXPOENTE, stdin);
        convertPosfixa(infixa, posfixa);
        printf("%s\n", posfixa);

    }
    return 0;

}

void convertPosfixa(const char *express, char *sai) {

    char p[EXPOENTE];

    int i, o = 0, t = -1;

    char c;

    for (i = 0; express[i] != '\n' && express[i] != '\0'; i++) {

    c = express[i];

    if (c == ' ') continue;

    if (c == '(') {

        p[++t] = c;

    }
    else if (c == ')') {

        while (t > -1 && p[t] != '(') {

        sai[o++] = p[t--];

        }

        t--;

    }
    else if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {

        sai[o++] = c;

    }
    else {

        while (t > -1 && p[t] != '(' && prec(p[t]) >= prec(c)) {

        sai[o++] = p[t--];

        }

        p[++t] = c;

        }

    }

    while (t > -1) sai[o++] = p[t--];

    sai[o++] = '\0';

}

int prec(char op) {

    switch (op) {

    case '^':
    return 3;

    case '*':
    return 2;

    case '/':
    return 2;

    case '+':
    return 1;

    case '-':
    return 1;

    default:
    return 0;

    }

}