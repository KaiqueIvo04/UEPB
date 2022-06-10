#include <stdio.h>
#include <string.h>

float notas(float num1, float num2, float num3 ,char letra[2]);


int main() {
    float num1, num2, num3;
    char letra[2];

    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    printf("Digite a terceira nota: ");
    scanf("%f", &num3);
    printf("Digite uma letra: ");
    scanf("%s", &letra);
    if (notas(num1, num2, num3, letra) == 0) {
        printf("Letra invalida");
    }
    else {
        printf("\nMedia: %.1f", notas(num1, num2, num3, letra));
    }
    return 0;
}

float notas(float num1, float num2, float num3 ,char letra[2]) {
    float soma, somaPesos, result1, result2;
    char a[2] = {"a"}, p[2] = {"p"}, A[2] = {"A"}, P[2] = {"P"};
    
    soma = num1 + num2 + num3;
    somaPesos = (num1*5) + (num2*3) + (num3*2);
    if (strcmp(letra,a) == 0 || strcmp(letra, A) == 0) {
        result1 = soma / 3;
        return result1;
    }
    else if (strcmp(letra,p) == 0 || strcmp(letra,P) == 0) {
        result2 = somaPesos / 10;
        return result2;
    }
    else {
        return 0;
    }
}