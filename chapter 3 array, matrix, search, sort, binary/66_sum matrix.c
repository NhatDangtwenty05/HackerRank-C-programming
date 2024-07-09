#include <stdio.h>
#include <math.h>

int prime(int n)
{
	for(int i = 2;i <= sqrt(n);i++)
		if(n%i == 0)
			return 0;

	return n > 1;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int matrix[n][m];

	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
			scanf("%d", &matrix[i][j]);

	int sum[n + m];
	for(int i = 0;i < n + m;i++)
		sum[i] = 0;

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			sum[i]+=matrix[i][j];
			sum[n + i]+=matrix[j][i];
		}
	}

	for(int i = 0;i < n + m;i++)
	{
		if(i == n)
			printf("\n");
		printf("%d ", sum[i]);
	}

	return 1;
}