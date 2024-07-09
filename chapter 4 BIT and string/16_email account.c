#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void lower(char input[])
{
    int leng = strlen(input);
    for(int i = 0;i < leng;i++)
        input[i] = tolower(input[i]);
}

int tok(char input[], char matrix[][100])
{
    int index = 0;
    char * token = strtok(input, "/ ");
    while(token != NULL)
    {
        strcpy(matrix[index], token);
        token = strtok(NULL,  "/ ");
        index++;
    }

    return index;
}

int main()
{
    char input[1000];
    char matrix[100][100];
    char output[100];
    char digit[100];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    int index = tok(input, matrix);
    for(int i = 0;i < index;i++)
    {

        if(i > 0 && isdigit(matrix[i][0]) && isalpha(matrix[i - 1][0]))
        {
            strcpy(output, matrix[i - 1]);

            for(int j = 0;j < i - 1;j++)
            {
                char temp[2] = {matrix[j][0], '\0'};    
                strcat(output, temp);
            }

            if(matrix[i][0] == '0')
            {
                char temp[2] = {matrix[i][1], '\0'};
                strcat(output, temp);
            }
            else
            {
                char temp[2] = {matrix[i][0], '\0'};
                strcat(output, temp);
                temp[0] = matrix[i][1];
                strcat(output, temp);
            }

            strcat(output, "@ctu.edu.vn");
        }

        if(isdigit(matrix[i][0]))
            strcat(digit, matrix[i]);
    }

    printf("%s\n", output);
    printf("%s", digit);

    return 0;
}