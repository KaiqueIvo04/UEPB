#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 310

typedef struct {
    int chave;
    char c;

}TItem;

typedef struct{
    TItem itens[max];
    int tam;
    int topo;
}TPilha;

char *ligacoes[] = {
    "BS",
    "SB",
    "CF",
    "FC"
};

void inicializa(TPilha *pilha){
    pilha->topo = -1; 
    pilha->tam = max;
    memset(pilha->itens, "", max);
}

int pilhaVazia(TPilha *pilha){
    if(pilha->topo == -1)
        return 1;
    return 0;
}

int pilhaCheia(TPilha *pilha){
    if(pilha->topo == pilha->tam-1)
        return 1;
    return 0;
}

int push(TPilha *pilha, TItem novo){

    int topo;
    if(pilhaCheia(pilha)) return 0;
    pilha->topo++;
    topo=pilha->topo;
    pilha->itens[topo] = novo;
    return 1;
}

TItem pop(TPilha *pilha){

    int topo;
    TItem item;
    item.chave = -1;
    if(pilhaCheia(pilha)) return item;
    topo = pilha->topo;
    pilha->topo--;
    return pilha->itens[topo];
}

int verifica(TPilha *pilha){
    int i;
    char str[2];
    
    if(pilha->topo >= 1){
        str[0] = pilha->itens[pilha->topo-1].c;
        str[1] = pilha->itens[pilha->topo].c;
        
        for(i=0; i<4; i++) {
            if(memcmp(str, ligacoes[i], 2)==0) {
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    TPilha pilha;
    TItem item;
    int i, n, dobra;
    char input[max];

    while(gets(input)){
        inicializa(&pilha);
        n = 0;
        for(i=0; i< strlen(input); i++){
            item.chave = i;
            item.c = input[i];
            push(&pilha, item);
            dobra = verifica(&pilha);
            if(dobra){
                pop(&pilha);
                pop(&pilha);
                n++;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}