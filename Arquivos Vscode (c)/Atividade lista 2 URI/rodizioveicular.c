#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int n, i = 0;
    char placa[110];
    scanf("%d", &n);

    while (i < n) {
        scanf ("%s", placa);
        
        if (!(strlen(placa) == 8 && isupper(placa[0]) && isupper(placa[1])
        && isupper(placa[2]) && placa[3] == '-' && isdigit(placa[4])
        && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])))
            printf("FAILURE\n");
        else {
            switch (placa[7]) {
                case '1':
                case '2':
                    printf("MONDAY\n");
                    break;
                case '3':
                case '4':
                    printf("TUESDAY\n");
                    break;
                case '5':
                case '6':
                    printf("WEDNESDAY\n");
                    break;
                case '7':
                case '8':
                    printf("THURSDAY\n");
                    break;
                case '9':
                case '0':
                    printf("FRIDAY\n");
                    break;
            }
        }
        i++;
    }

    return 0;
}