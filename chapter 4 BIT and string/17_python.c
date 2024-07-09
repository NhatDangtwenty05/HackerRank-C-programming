#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char py[6] = "python";

int check(char string[], int index, int i)
{
    while(string[index] != py[i])
    {
        if(string[index] == '\0')
            return -1;
        index++;
    }
    return index;
}

int main()
{
    char string[100];
    fgets(string, sizeof(string), stdin);
    int bol = 1;
    int range = 6;
    int index = 0;

    for(int i = 0;i < range;i++)
    {
        index = check(string, index, i);
        if(index == -1)
        {
            bol = 0;
            range = -1;
        }
    }
    if(bol)
        printf("yes\n");
    else  
    printf("no\n");

    return 0;
}