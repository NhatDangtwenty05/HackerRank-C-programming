#include <stdio.h>
#include <math.h>

int prime(int n)
{
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
			return 0;
	}

	return n > 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &a[i][j]);
	
	int count = 0;
	for(int i = 0;i < n;i++)
	{
		if(prime(a[i][0]))
			count++;
		if(prime(a[i][n - 1 - i]))
			count++;
	}
	if(n%2 == 1 && prime(a[n/2][n/2]))
		count--;

	printf("%d", count);

	return 1;
}