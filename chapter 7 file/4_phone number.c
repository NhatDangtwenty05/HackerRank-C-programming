#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void get_phone_number(char c[], char res[])
{
	int n = 0;
	char temp[11];
	char * token = strtok(c, " ");
	while(token != NULL)
	{
		if(token[0] != '0' && strlen(token) < 9)
		{	
			token = strtok(NULL, " ");
			continue;
		}
		n = 0;
		while(isdigit(token[n]))
			n++;
		if(n == 9 || n == 10)
		{
			strcpy(res, token);
			return;
		}
		token = strtok(NULL, " ");
	}
}

int main()
{
	int index = 0;
	char list[1000][12];
	char temp[101];
	FILE * f;
	f = fopen("4_phone number.txt", "r");
	if(f == NULL)
		return 0;
	while(fgets(temp, 100, f) != NULL)
	{
		temp[strcspn(temp, "	")] = '\0';
		get_phone_number(temp,list[index]);
		if(list[index][0] == '0')
			index++;
	}
	fclose(f);
	f = fopen("4_return.txt", "w");
	for(int i = 0;i < index;i++)
	{
		if(strlen(list[i]) > 8)
			fprintf(f, "%s\n", list[i]);
	}
	fclose(f);

	return 0;
}