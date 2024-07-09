#include <stdio.h>
#include <math.h>

int GCD(int a, int b)
{
	int res;
	while(b != 0)
	{
		res = a%b;
		a = b;
		b = res;
	}

	return a;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	for(int i = a;i <= b - 1;i++)
	{
		for(int j = i + 1;j <= b;j++)
		{
			if(GCD(i,j) == 1)
			{
				printf("(%d,%d)\n", i, j);
			}
		}
	}

	return 0;
}