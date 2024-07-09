#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int prime(int n)
{
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
			return 0;
	}

	return n > 1;
}

int comparator(const void *a, const void *b)
{
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];
	int c[n * 2];
	for(int i = 0;i < n * 2;i++)
		c[i] = 0;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &a[i][j]);
	
	int index = 0;
	for(int i = 0;i < n;i++)
	{
		if(prime(a[i][0]))
			c[index++] = a[i][0];
		if(prime(a[i][n - 1 - i]))
			c[index++] = a[i][n - 1 - i];
	}

	qsort(c, index, sizeof(int), comparator);

	int count = 0;
	for(int i = 1;i < index + 1;i++)
	{
		if(c[i] != c[i - 1])
			count++;
	}

	printf("%d", count);

	return 1;
}