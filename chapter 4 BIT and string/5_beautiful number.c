#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int check(char c[])
{
	for(int i = 1;i < strlen(c);i++)
	{
		if(abs(c[i] - c[i - 1]) != 1)
			return 0;
	}

	return 1;
}

int main()
{
	char c[100];
	gets(c);
	if(check(c))
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
