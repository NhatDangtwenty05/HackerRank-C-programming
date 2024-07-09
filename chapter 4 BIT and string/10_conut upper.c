#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int check(char c[])
{
	for(int i = 0;i < strlen(c);i++)
		if(islower(c[i]))
			return 0;

	return 1;
}

void main()
{
	char character[100];
	fgets(character, sizeof(character), stdin);
	int count = 0;
	char * token = strtok(character, " ");
	while(token != NULL)
	{
		if(check(token))
			count++;
		token = strtok(NULL, " ");
	}
	printf("%d\n", count);
}

