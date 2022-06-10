#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int c, n, i, j, k;

    while (scanf("%d %d", &c, &n) != EOF)
    {
        char p1[22];
        char p2[22];
        //scanf("%s %s",p1,p2);
        //while (getchar() != '\n');
        //fgets(p1,c,stdin);
        scanf(" %[^\n]", p1);
        //while (getchar() != '\n');
        //fgets(p2,c,stdin);
        scanf(" %[^\n]", p2);

        //printf("p1: %s",p1);
        //printf("p2: %s",p2);

        for (i = 0; i < n; i++)
        {
            char frase[1001];
            //fgets (frase, 1000, stdin);
            scanf(" %[^\n]%*c", frase);
            //printf("frase: %s",frase);

            //gets(frase);
            for (j = 0; j < strlen(frase); j++)
            {
                for (k = 0; k < c; k++)
                {
                    if (isalpha(frase[j]))
                    {
                        if (frase[j] == toupper(p1[k]))
                        {
                            frase[j] = toupper(p2[k]);
                        }
                        else if (frase[j] == toupper(p2[k]))
                        {
                            frase[j] = toupper(p1[k]);
                        }
                        else if (frase[j] == tolower(p1[k]))
                        {
                            frase[j] = tolower(p2[k]);
                        }
                        else if (frase[j] == tolower(p2[k]))
                        {
                            frase[j] = tolower(p1[k]);
                        }
                    }
                    else
                    {
                        if (frase[j] == p1[k])
                        {
                            frase[j] = tolower(p2[k]);
                        }
                        else if (frase[j] == p2[k])
                        {
                            frase[j] = tolower(p1[k]);
                        }
                    }
                }
            }
            printf("%s\n", frase);

            //fflush(stdin);
        }
        printf("\n");
    }
    return 0;
}