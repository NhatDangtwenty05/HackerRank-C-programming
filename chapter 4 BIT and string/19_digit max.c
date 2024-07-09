#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char c[100];
    char temp[100] = "";
    long long max = (long long) -1e9;
    fgets(c, sizeof(c), stdin);
    
    for(int i = 0;i <= strlen(c);i++)
    {
        if(isdigit(c[i]))
        {
            char num[2] = {c[i], '\0'};
            strcat(temp, num);
        }
        else if(temp[0] != '\0')
        {   
            long long value = atoll(temp);
            max = fmax(max, value);
            temp[0] = '\0';
        }
    }
   printf("%lld\n", max);

    return 0;
}

// strtok(c, "abcdefg...z"); >>>>> num