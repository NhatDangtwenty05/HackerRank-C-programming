#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int cut(char tempf[][50],char character[])
{
	char * token = strtok(character, ".,!? ");
	int n = 0;
	while(token != NULL)
	{
		strcpy(tempf[n], token);
		token = strtok(NULL, ".,!? ");
		int pos; 
		if(token != NULL)
		{
			pos = strlen(tempf[n]);
			tempf[n][pos] = ' ';
			tempf[n][pos + 1] = '\0';
		}
		else
		{
			pos = strlen(tempf[n]);
			tempf[n][pos] = '\0';
		}
		n++;
	}

	return n;	
}

void main()
{
	char character[100];
	fgets(character, sizeof(character), stdin);
	char temp[50][50];
	int n = cut(temp, character);

	for(int i = 0;i < n;i++)
		printf("%s", temp[i]);
}

