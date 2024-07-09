#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct word 
{
    char data[100];
    int fre;
};

typedef struct word word;

word a[10000], b[10000];
int n = 0;

int find_position(char c[]) 
{
    for (int i = 0; i < n; i++) 
    {
        if (strcmp(c, a[i].data) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int cmp(const void * a, const void * b) 
{
    word * x = (word*) a;
    word * y = (word*) b;
    return strcmp(x->data, y->data); 
}

int main() 
{
    char c[100];
    printf("Enter a sentence: ");
    fgets(c, sizeof(c), stdin);
    
    char * token = strtok(c, " ");
    while (token != NULL) 
    {
        int pos = find_position(token);
        if (pos == -1) 
        {
            strcpy(a[n].data, token);
            a[n].fre = 1;
            strcpy(b[n].data, token);
            b[n].fre = 1;
            n++;
        } else 
        {
            a[pos].fre++;
            b[pos].fre++;
        }
        token = strtok(NULL, " ");
    }

    qsort(a, n, sizeof(word), cmp);

    printf("\nWord frequency (sorted):\n");
    for (int i = 0; i < n; i++)
        printf("%s %d\n", a[i].data, a[i].fre);
    
    printf("\nWord frequency (unsorted):\n");
    for (int i = 0; i < n; i++)
        printf("%s %d\n", b[i].data, b[i].fre);

    return 0;
}
