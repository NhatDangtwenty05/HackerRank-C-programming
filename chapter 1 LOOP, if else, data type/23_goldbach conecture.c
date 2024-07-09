#include <stdio.h>
#include <math.h>

int prime(int n)
{
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);

	while(t > 0)
	{
		t--;
		int n;
		scanf("%d", &n);

		if(n < 4)
		{
			printf("INVALID");
			return 0;
		}
		for(int i = 2;i <= n/2;i++)
		{
			if(prime(i) && prime(n - i))
			{
				printf("%d %d\n", i, n-i);
			}
		}
	}

	return 0;
}