#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int check(int x)
{
    if(x < 2)
        return 0;
    if (x == 2 || x == 3 || x == 5 || x == 7)
        return 1;
    if(x%2 == 0 || x%3 == 0 || x%5 == 0 || x%7 == 0 )
        return 0;
    
    return 1;
}

int cmp(const void * a, const void * b)
{
    int * x = (int*) a;
    int * y = (int*) b;

    return *x - *y;
}

int main()
{
    FILE * f;
    f = fopen("2_prime number.txt", "r");
    if(f == NULL)
        return 0;

    int c;
    int list[1000];
    int index = 0;
    while(fscanf(f, "%d", &c) != EOF)
    {
        if(check(c))
            list[index++] = c;
    }
    fclose(f);

    qsort(list, index, sizeof(int), cmp);

    f = fopen("2_prime number.txt", "w");
    if(f == NULL)
        return 0;

    for(int i = 0;i < index;i++)
        fprintf(f , "%d ", list[i]);
    fclose(f);

    return 0;
}