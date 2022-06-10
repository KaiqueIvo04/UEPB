#include<stdio.h>
#include<stdlib.h>
#define tamanho 3

//Estrutura de um no duplamente encadeado no formato de pilha
struct no{
    int dado;
    struct no *anterior;
    struct no *proximo;
};

//Variáveis globais
typedef struct no *ptr_no; //Definição de estrutura do tipo no prt_no
ptr_no pilha; //Cria a lista duplamente encadeada
int op;
int contador;

//Prototipação
void menu_mostrar();
void pilha_inserir(ptr_no pilha);
void pilha_remover(ptr_no pilha);
void pilha_mostrar(ptr_no pilha);

int main(){
    contador = 0;
    pilha = (ptr_no)malloc(sizeof(struct no));
    pilha->dado = 0;
    pilha->anterior = NULL;
    pilha->proximo = NULL;
    do{
        system("cls");
        pilha_mostrar(pilha);
        menu_mostrar();
        scanf("%d", &op);
        switch(op){
            case 1 : pilha_inserir(pilha); break;
            case 2 : pilha_remover(pilha); break;
        }
    } while(op!=0);
    return 0;
}

void menu_mostrar(){
    printf("\nEscolha uma das opcoes:\n");
    printf("1 - Inserir um elemento no topo da Pilha\n");
    printf("2 - Remover um elemento no topo da Pilha\n");
    printf("0 - Sair\n");
}

void pilha_inserir(ptr_no pilha){
    if(contador==tamanho){
        printf("\nA pilha esta cheia, impossivel de empilhar\n");
        system("pause");
    } else{
        int valor;
        printf("Informe o valor que deseja inserir: ");
        scanf("%d", &valor);//5

        while(pilha->proximo!=NULL){    
            pilha = pilha->proximo; //i++
        }
        pilha->proximo = (ptr_no)malloc(sizeof(struct no));
        pilha->proximo->anterior = pilha;//o ponteiro anterior do elemento novo apontar para o final da lista
        pilha = pilha->proximo;// Incrementar e acessar o nome elemento
        pilha->dado = valor; // Digitar o valor no dado
        pilha->proximo = NULL;
        contador++;
    }
}

void pilha_remover(ptr_no pilha){
    if(contador==0){
        printf("\nA pilha esta vazia, impossivel de desimpilhar\n");
        system("pause");
    } else{
        while(pilha->proximo!=NULL){
            pilha = pilha->proximo;//incremento até chegar no topo da pilha
        }
        pilha->anterior->proximo = pilha->proximo;
        contador--;
    }
}

void pilha_mostrar(ptr_no pilha){
    while(pilha->proximo!=NULL){
        printf("%d ", pilha->dado);
        pilha = pilha->proximo; //i++
    }
    printf("%d ", pilha->dado);
}