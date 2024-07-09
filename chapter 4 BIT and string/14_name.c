#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void ddmmyyyy(char date[])
{
	int leng;

	if(date[1] == '/')
	{
		leng = strlen(date);
		for(int i = leng;i > 0;i--)
			date[i] = date[i - 1];
		date[0] = '0';
		date[leng + 1] = '\0';
	}

	if(date[4] == '/')
	{
		leng = strlen(date);
		for(int i = leng;i > 3;i--)
			date[i] = date[i - 1];
		date[3] = '0';
		date[leng + 1] = '\0';
	}
}

void Name(char name[])
{
	char temp[100] = "";
	char * token = strtok(name, " ");
	while(token != NULL)
	{
		token[0] = toupper(token[0]);
		strcat(temp, token);
		token = strtok(NULL, " ");
		if(token != NULL)
			strcat(temp, " ");
	}
	strcpy(name, temp);
}

int main()
{
	char name[100];
	char date[100];
	fgets(name, sizeof(name), stdin);
	fgets(date, sizeof(date), stdin);
	Name(name);
	ddmmyyyy(date);
	printf("%s\n", name);
	printf("%s", date);

	return 0;
}