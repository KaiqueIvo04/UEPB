#include<stdio.h>

//Prototipacao
int soma(int num1, int num2); //Chamada (Informando que será usado no Main)

//Função Principal (retorna 0)
int main(){
    int num1, num2;//Variáveis Reais

    //Entrada
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);//8
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);//9

    printf("Soma: %d", soma(num1, num2));//8 | 9
    return 0;
}

int soma(int num1, int num2){//Variáveis Formais 
    return num1 + num2;
}