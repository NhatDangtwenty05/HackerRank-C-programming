#include <stdio.h>
#include <string.h>

void upper(char c[])
{
	for(int i = 0;i < strlen(c);i++)
	{
		if(c[i] >= 97 && c[i] <= 122)
			c[i]-=32;
	}
}

void lower(char c[])
{
	for(int i = 0;i < strlen(c);i++)
	{
		if(c[i] >= 65 && c[i] <= 90)
			c[i]+=32;
	}
}

void reveres(char c[])
{
	int left = 0, right = strlen(c) - 1;
	while(left < right)
	{
		char temp = c[left];
		c[left] = c[right];
		c[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	char c[100];
	fgets(c, sizeof(c), stdin);
	upper(c);
	printf("%s\n", c);
	lower(c);
	printf("%s\n", c);
	reveres(c);
	printf("%s\n", c);
	return 0;
}