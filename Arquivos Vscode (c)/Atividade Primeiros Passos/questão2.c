#include <stdio.h>
#include <locale.h>
int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int maior;
    int menor;
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    maior = num1;
    menor = num1;

    printf("Digite o segundo número:\n");
    scanf("%d", &num2);
    if (num2 > maior) {
        maior = num2;
        }
    if (num2 < menor) {
        menor = num2;
    }

    printf("Digite o terceiro número:\n");
    scanf("%d", &num3);
    if (num3 > maior) {
        maior = num3;
        }
    if (num3 < menor) {
        menor = num3;
    }

    printf("Digite o quarto número:\n");
    scanf("%d", &num4);
    if (num4 > maior) {
        maior = num4;
        }
    if (num4 < menor) {
        menor = num4;
    }

    printf("Digite o quinto número:\n");
    scanf("%d", &num5);
    if (num5 > maior) {
        maior = num5;
        }
    if (num5 < menor) {
        menor = num5;
    }

    printf("O maior número é o %d\n", maior);
    printf("O menor número é o %d\n", menor);

    
    return 0;
}  