#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define expoente 1024


int opr(char operator);
int main (void) {
    int num, k=0;
    char infixa[expoente], posfixa[expoente];
    scanf("%d\n", &num);

    for(k = num; k > 0;k--){
        fgets(infixa, expoente, stdin);
        pPosfixa(infixa, posfixa);
        printf("%s\n", posfixa);
    }

return EXIT_SUCCESS;
}
void pPosfixa(const char *exp, char *fora) {
    char p[expoente], c;
    int i=0, o = 0, t = -1;

    while(exp[i] != '\n' && exp[i] != '\0'){
        c = exp[i];

        if(c == ' ') continue;

        if (c == '('){
            p[++t] = c;
        }else if (c == ')') {
            while (t > -1 && p[t] != '(') {
                fora[o++] = p[t--];}
                t--;
        }else if ((c >= '0' && c <= '9') || (c >= 'a' &&     c <= 'z') || (c >= 'A' && c <= 'Z')) {
                fora[o++] = c;
        }else {
        while (t > -1 && p[t] != '(' && opr(p[t]) >= opr(c)) {
            fora[o++] = p[t--];}
        p[++t] = c;
        }
        i++;
    }
    while (t > -1){
        fora[o++] = p[t--]; 
    } 
    fora[o++] = '\0';
}

int opr(char operator) {
    if(operator == '^'){
        return 3;
    }else if(operator == '*'){
        return 2;
    }else if(operator == '/'){
        return 2;
    }else if(operator == '+'){
        return 1;
    }else if(operator == '-'){
        return 1;
    }else{
        return 0;
    }
}