#include <stdio.h>
#include <string.h>
#define tamanho 4
#define qTAlunos 3
/*
    Programa que vai ler 3 notas e x alunos, informar a média e o status do aluno.
*/
struct boletim{
    int id;
    float notas[tamanho];
    char status[10];
};

//Variáveis
struct boletim aluno[qTAlunos]; //aluno[j].notas[i]
struct boletim aux;

int op;
float soma;

//Prototipação
void menu();
void lernotas();
void exibirnotas();
void pesquisaraluno();
void ordenaraluno();

int main(){   
    //Estrutura de Repetição
    do{
        menu();
        scanf("%d", &op);
        //Switch case
        switch (op){
            case 1: lernotas(); break;
            case 2: exibirnotas(); break;
            case 3: pesquisaraluno(); break;
            case 4: ordenaraluno();
                    printf("Ranking\n");
                    exibirnotas();
             break;
        }

    } while(op !=0);
   
    return 0;
}

void menu(){
    printf("\nDigite uma das opcoes:");
    printf("\n1 - Informe as notas");
    printf("\n2 - Exibir as notas");
    printf("\n3 - Pesquisar aluno");
    printf("\n4 - Ranking");
    printf("\n0 - Sair\n");
}

void lernotas(){
    int j;//Controla a quantidade de alunos
    
    for(j=0; j<qTAlunos; j++){
        int i;//Controla a quantidade de notas
        soma = 0;
        //Entrada 
        printf("Informe ID:");
        scanf("%d", &aluno[j].id);//aluno[0].id

        for(i=0; i<tamanho-1; i++){
            printf("Informe uma nota:\n");
            scanf("%f", &aluno[j].notas[i]);
            //Processamento
            soma += aluno[j].notas[i];
        }
        aluno[j].notas[tamanho-1] = soma/3;
        //Saída   
        printf("A media eh %.2f", aluno[j].notas[tamanho-1]);
        
        //If-else
        if(aluno[j].notas[tamanho-1]>=7){
            strcpy(aluno[j].status, "Aprovado\n");
        } else if (aluno[j].notas[tamanho-1]>=4){
            strcpy(aluno[j].status, "Final\n");
        } else{
            strcpy(aluno[j].status, "Reprovado\n");
        }
        printf("\n%s", aluno[j].status);
    }
}

void exibirnotas(){
    int j;
    printf("Id: \tMedia\tStatus\n");
    for(j=0; j<qTAlunos;j++){
        printf("%d\t%.2f\t%s", aluno[j].id, aluno[j].notas[tamanho-1], aluno[j].status);
    }
} 

void pesquisaraluno(){
    int busca;
    int j=0;
    int acha=0;//0- não achou | 1 - achou
    printf("Informe o ID do aluno: ");
    scanf("%d", &busca);
    
    while(acha==0 && j<qTAlunos){
        if(busca==aluno[j].id){
            acha = 1;
            printf("Aluno encontrado!\n");
            printf("Id: %d\t Media: %.2f\tStatus: %s\n", aluno[j].id, aluno[j].notas[tamanho-1], aluno[j].status);
        } else{
            j++;
        }
    }
}

// id | Media | Status
// 1  | 9
// 0  | 5
// 2  | 8

void ordenaraluno(){
    int i, j;
    for(i=0; i<qTAlunos-1; i++){//i=0
        for(j = i+1; j<qTAlunos; j++){//j=1
            if(aluno[i].notas[tamanho-1]<aluno[j].notas[tamanho-1] ){
                aux = aluno[i];
                aluno[i] = aluno[j];
                aluno[j] = aux;
            }
        }
    }
}