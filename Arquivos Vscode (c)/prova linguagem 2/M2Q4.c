#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    
    printf("Digite uma string: ");
    scanf("%s", &str1);
    printf("Digite outra string: ");
    scanf("%s", &str2);

    if (strcmp(str1,str2) == 0) {
        printf("\nStrings iguais");
    } 
    else {
        strcat(str1, str2);
        printf("\n%s", str1);
    }

    return 0;
}