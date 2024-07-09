#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void insert(char c[], int k, char character)
{
	for(int i = strlen(c);i > k;i--)
		c[i] = c[i - 1];
	
	c[k] = character;
	c[strlen(c) + 1] = '\0';
}

int main()
{
	char dmy[100];
	fgets(dmy, sizeof(dmy), stdin);

	if(dmy[1] == '/')
		insert(dmy, 0, '0');
	if(dmy[4] == '/')
		insert(dmy, 3, '0');
	printf("%s\n", dmy);

	return 0;
}	