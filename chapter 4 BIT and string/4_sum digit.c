#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sum(char c[])
{
	int res = 0;
	for(int i = 0;i < strlen(c);i++)
	{
		if(isdigit(c[i]))
		{
			res+=c[i];
			res-=48;
			//res = res + c[i] - '0';
		}
	}

	return res;
}

int main()
{
	char c[100];
	fgets(c, sizeof(c), stdin);
	printf("%d\n", sum(c));

	return 0;
}
