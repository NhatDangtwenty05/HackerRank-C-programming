#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int check(char c[])
{
	int right = strlen(c) - 1;
	int left = 0;
	while(right > left)
	{
		if(c[right] != c[left])
			return 0;
		left++;
		right--;
	}

	return 1;
}

void main()
{	
	char character[100];
	char list[100][100];
	int max = (int) -1e9;
	gets(character);
	char * token = strtok(character, " ");

	while(token != NULL)
	{	
		if(check(token))
		{
			max = fmax(max, strlen(token));
			if(list[strlen(token)] == NULL)
				strcpy(list[strlen(token)], token);
			else
			{
				strcat(list[strlen(token)], " ");
				strcat(list[strlen(token)], token);
			}
		}
		token = strtok(NULL, " ");
	}
	if(max >= 0)
	{
		for(int i = 0;i <= max;i++)
		{	
			if(list[i] != NULL && i != max)
				printf("%s ", list[i]);
			else if(i == max)
				printf("%s", list[i]);
		}	
	}
}

