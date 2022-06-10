#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char num[201];
}numeros;
              
int ordem(const void *a, const void *b) {
    numeros *ia = (struct numeros *)a; 
    numeros *ib = (struct numeros *)b;
    return strcmp(ia->num, ib->num);
}  
              
int main(){
    int n, i, j;
    int cont;
    numeros comp;
    
    while(scanf("%d%*c",&n) != EOF){
        numeros array[n];
        cont = 0;
        for(i = 0; i < n; i++){
            scanf("%[^\n]%*c",&array[i].num);
        }
        qsort(array,n,sizeof(numeros),ordem);
        comp = array[0];
        for(i = 1; i < n; i++){
            for(j = 0; j < strlen(array[i].num); j++){
                  if(comp.num[0] != array[i].num[0]){
                             comp = array[i];
                             break;
                  }else if(comp.num[j] == array[i].num[j]) cont++;
                  else{
                    comp = array[i];
                    break;
                  }
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}