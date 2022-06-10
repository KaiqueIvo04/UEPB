#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
 char nome[21];
 char c;
}crianca;

int main(int argc,char *argv[]){
 int n,x,y,mais=0,menos=0;
 scanf(" %d",&n);
 crianca cri[n],aux;
 for(x=0;x<n;x++){
  scanf(" %c",&cri[x].c);scanf("%s",cri[x].nome);
 }
 for(x=0;x<n;x++){
  if(cri[x].c=='+'){
   mais++;
  }else{
   menos++;
  }
 }
 for (x = 1; x < n; x++) {
        for (y = 0; y < n - x; y++) {
   if(strcmp(cri[y].nome,cri[y+1].nome)>0){
    aux=cri[y];
    cri[y]=cri[y+1];
    cri[y+1]=aux;
   }
        }
    }
 for(x=0;x<n;x++){
  printf("%s\n",cri[x].nome);
 }
 printf("Se comportaram: %d | Nao se comportaram: %d\n",mais,menos);
 return 0;
}