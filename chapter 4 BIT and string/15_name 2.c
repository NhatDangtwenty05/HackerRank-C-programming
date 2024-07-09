#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void Name(char name[], char sure_firt[], char firt_sure[]) 
{
    sure_firt[0] = '\0';
    firt_sure[0] = '\0';
    char temp[100] = "";
    char *token = strtok(name, " ");
    
    while (token != NULL) 
    {
        strcpy(temp, token);
        token = strtok(NULL, " ");
        int leng = strlen(temp);
        
        for (int i = 0; i < leng; i++) 
        {
            temp[i] = tolower(temp[i]);
        }
        temp[0] = toupper(temp[0]);
        
        if (token == NULL) 
        {
            for (int i = 1; i < leng; i++) 
            {
                temp[i] = toupper(temp[i]);
            }
        }
        
        if (token == NULL) 
        {
            strcat(firt_sure, temp);
            strcat(firt_sure, ", ");
            strcat(firt_sure, sure_firt);

            firt_sure[strlen(firt_sure) - 2] = '\0';
        }
        
        strcat(sure_firt, temp);
        if (token != NULL) 
        {
            strcat(sure_firt, " ");
        }
        temp[0] = '\0';
    }
}


int main()
{
	char name[100];
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';
	
	char sure_firt[100];
	char firt_sure[100];
	Name(name, sure_firt, firt_sure);

	printf("%s\n", sure_firt);
	printf("%s", firt_sure);

	return 0;
}