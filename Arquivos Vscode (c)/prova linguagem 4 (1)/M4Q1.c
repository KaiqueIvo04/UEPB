#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct caixa{
    int serie;
    char descricao[50];
    char fornecedor[30];
};

struct no{
    struct caixa tpilha;
    struct no *proximo;
};

typedef struct no *ptr_no;
ptr_no pilha;
int i, op, tamanho = 0;

void menu();
void empilhar(ptr_no pilha);
void desempilhar(ptr_no pilha);
void pilha_mostrar(ptr_no pilha);

int main(){
    
    pilha = (ptr_no) malloc(sizeof(struct no));
    pilha->tpilha.serie = 0;
    strcpy(pilha->tpilha.descricao, "Descricao");
    strcpy(pilha->tpilha.fornecedor,"Fornecedor");
    i = 0;
    
    printf("Informe o tamanho da pilha: ");
    scanf("%d", &tamanho);

    do{
        pilha_mostrar(pilha);
        menu();
        scanf("%d", &op);
        switch(op){
            case 1 : empilhar(pilha); break;
            case 2 : desempilhar(pilha); break;
        }

    }while(op!=0);
    return 0;
}

void menu(){
    printf("\nEscolha uma opcao digitando um numero:");
    printf("\n1 - Inserir caixa");
    printf("\n2 - Retirar caixa");
    printf("\n0 - Sair\n");
}

void empilhar(ptr_no pilha){
    if(i == tamanho){
        printf("A pilha de caixa esta cheia, impossivel empilhar.\n");
        system("pause");
    } else{
        while(pilha->proximo!=NULL){
            pilha = pilha->proximo;
        }
        pilha->proximo = (ptr_no) malloc(sizeof(struct no));
        pilha = pilha->proximo;
        printf("Digite o numero de serie do produto: \n");
        scanf("%d", &pilha->tpilha.serie);
        printf("Digite a descricao do produto: \n");
        scanf("%s", pilha->tpilha.descricao);
        printf("Digite o fornecedor do produto: \n");
        scanf("%s", pilha->tpilha.fornecedor);
        pilha->proximo = NULL;
        i++;
    }
}

void desempilhar(ptr_no pilha){
    if(i==0){
        printf("A pilha esta vazia, nao ha caixas para desempilhar\n");
        system("pause");
    } else{
        ptr_no aux;
        aux = (ptr_no) malloc(sizeof(struct no));
        while(pilha->proximo!=NULL){
            aux = pilha;
            pilha = pilha->proximo;
        }
        aux->proximo = NULL;
        i--;
    }
}

void pilha_mostrar(ptr_no pilha){
    system("cls");
    while(pilha->proximo!=NULL){
        printf("%d \t %s \t %s\n", pilha->tpilha.serie, pilha->tpilha.descricao, pilha->tpilha.fornecedor);
        pilha = pilha->proximo;
    }  
    printf("%d \t %s \t %s\n", pilha->tpilha.serie, pilha->tpilha.descricao, pilha->tpilha.fornecedor); 
}