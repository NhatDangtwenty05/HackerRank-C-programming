#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void femail(char c[], char res[])
{   
    strlwr(c);
    int n = 0;
    char a[100][100];
    char * token = strtok(c, " ");
    while(token != NULL)
    {
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }

    strcpy(res, a[n - 1]);
    int index = strlen(res);
    for(int i = 0;i < n - 1;i++)
        res[index++] = a[i][0];
    res[index] = '\0';
}

void fpassword(char c[], char res[])
{
   char temp[100] = "";
    char * token = strtok(c, "/");
    while(token != NULL) {
        if(token[0] == '0') {
            strncat(temp, &token[1], 1);
        } else {
            strcat(temp, token);
        }
        token = strtok(NULL, "/");
    }
    strcpy(res, temp);
} 

int main()
{
    char email[100][100];
    char password[100][10];
    int index = 0;

    FILE * f;
    f = fopen("3_mail edu.txt", "r");
    if(f == NULL)
        return 0;
    else
    {
        char temp[100];
        while(fgets(temp, 100, f) != NULL)
        {
            temp[strcspn(temp, "\n")] = '\0';
            femail(temp, email[index]);
            strcat(email[index], "@ctu.edu.vn");
            fgets(temp, 100, f);
            temp[strcspn(temp, "\n")] = '\0';
            fpassword(temp, password[index++]);
        }
        fclose(f);
        FILE * ft;
        ft = fopen("3_return.txt", "w");
        for(int i = 0;i < index;i++)
            fprintf(ft , "%s\n%s\n", email[i], password[i]);
        fclose(ft);
    }

    return 0;
}