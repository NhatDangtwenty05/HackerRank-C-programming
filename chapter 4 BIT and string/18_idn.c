#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char c[100];
    int max = (int) -1e9;
    gets(c);

    int count = 1;
    int index = 0;
    for(int i = 0;i < strlen(c);i++)
    {
        if(c[i] == c[i + 1])
        {
            count++;
        }
        else
        {
            if(count > max)
                index = i + 1 - count;
            max = fmax(max, count);
            count = 1;
        }

    }
    for(int i = index;i < index + max;i++)
        printf("%c", c[i]);

    return 0;
}