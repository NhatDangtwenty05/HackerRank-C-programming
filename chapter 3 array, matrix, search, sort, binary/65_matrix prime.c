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

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			if(prime(matrix[i][j]))
				printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 1;
}