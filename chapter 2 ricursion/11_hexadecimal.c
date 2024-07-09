#include <stdio.h>

void hex(int n)
{
	if(n < 16)
	{
		if(n < 10)
			printf("%d ", n);
		else
			printf("%c", n + 55);
	}
	else
	{
		hex(n/16);
		int res = n%16;
		if(res < 16)
		{
			if(res < 10)
				printf("%d ", res);
			else
				printf("%c 	", res + 55);
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	hex(n);

	return 0;
}