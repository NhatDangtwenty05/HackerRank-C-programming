#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char indexs[1000][100];

int cmp(const void * a, const void * b)
{
    char * x = (char*) a;
    char * y= (char*) b;
    char xy[1000], yx[1000];
    strcpy(xy, x);
    strcat(xy, y);

    strcpy(yx, y);
    strcat(yx, x);

    return strcmp(yx, xy);
}

int main()
{
    char c[10000];
    fgets(c, sizeof(c), stdin);

    char * token = strtok(c, "qwertyuiopasdfghjklzxcvbnm");
    int i = 0;
    while(token != NULL)
    {
        strcpy(indexs[i], token);
        i++;
        token = strtok(NULL, "qwertyuiopasdfghjklzxcvbnm");
    }

    qsort(indexs, i, sizeof(indexs[0]), cmp);
    
    for(int j = 0;j < i;j++)
        printf("%s", indexs[j]);

    return 0;
}