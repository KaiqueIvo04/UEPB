#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 10

struct caixa {
    int serie;
    char descricao[30];
    char fornecedor[30];
};
struct pilha {
    int ini;
    int fim;
    struct caixa tpilha[tamanho];
};

struct pilha pilhaCaixas;
int op;
int i;

void pilha_mostrar();
void empilhar();
void desempilhar();
void menu();

int main() {
    
    pilhaCaixas.ini = 0;
    pilhaCaixas.fim = 0;

    do {
        system("cls");
        pilha_mostrar();
        menu();
        scanf("%d", &op);

        switch(op){
            case 1: empilhar(); break;
            case 2: desempilhar(); break;
        }
        
    } while (op != 0);
    

    return 0;
}

void pilha_mostrar() {

    printf("Caixas empilhadas:\n");
    for (i = tamanho-1; i>= 0; i--) {
        printf("%d \t %s \t %s \n", pilhaCaixas.tpilha[i].serie, pilhaCaixas.tpilha[i].descricao, pilhaCaixas.tpilha[i].fornecedor);
    }
}

void empilhar() {
    if (pilhaCaixas.fim == tamanho) {
        printf("A pilha de caixas esta cheia, impossivel empilhar.\n");
        system("pause");
    }
    else {
        printf("Digite o numero de serie da caixa: ");
        scanf("%d", &pilhaCaixas.tpilha[pilhaCaixas.fim].serie);
        printf("Digite a descricao do produto da caixa: ");
        scanf("%s", &pilhaCaixas.tpilha[pilhaCaixas.fim].descricao);
        printf("Digite o fornecedor do produto da caixa: ");
        scanf("%s", &pilhaCaixas.tpilha[pilhaCaixas.fim].fornecedor);
        pilhaCaixas.fim++;
    }
}

void desempilhar() {
    if (pilhaCaixas.ini == pilhaCaixas.fim) {
        printf("A pilha de caixas esta vazia, impossivel desempilhar.\n");
        system("pause");
    }
    else {
        pilhaCaixas.tpilha[pilhaCaixas.fim - 1].serie = 0;
        strcpy(pilhaCaixas.tpilha[pilhaCaixas.fim - 1].descricao,"");
        strcpy(pilhaCaixas.tpilha[pilhaCaixas.fim - 1].fornecedor,"");
        pilhaCaixas.fim--;
    }
}
void menu() {
    printf("\nEscolha uma opcao digitando um numero:");
    printf("\n1 - Inserir caixa");
    printf("\n2 - Retirar caixa");
    printf("\n0 - Sair\n");
}