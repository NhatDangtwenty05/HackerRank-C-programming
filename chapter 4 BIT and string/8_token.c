#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char c[100];
	gets(c);
	char matrix[100][10];
	char * token = strtok(c, " ");
	int n = 0;
	while(token != NULL)
	{
		strcpy(matrix[n], token);
		token = strtok(NULL, " ");
		n++;
	}

	for(int i = 0;i < n;i++)
		printf("%s\n", matrix[i]);

	return 0;
}