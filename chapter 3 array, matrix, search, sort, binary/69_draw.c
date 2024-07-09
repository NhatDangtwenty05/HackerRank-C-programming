#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int matrix[n][n];

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &matrix[i][j]);

	printf("\n");
//1:
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			printf("%d ", matrix[j][i]);
		printf("\n");
	}
	printf("\n");
//2:
	for(int i = n - 1;i >= 0;i--)
	{
		for(int j = n - 1;j >= 0;j--)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
	printf("\n");
//3:
	for(int i = n - 1;i >= 0;i--)
	{
		for(int j = 0;j < n;j++)
			printf("%d ", matrix[j][i]);
		printf("\n");
	}
	printf("\n");
//4:
	for(int i = 0;i < n;i++)
	{
		for(int j = n - 1;j >= 0;j--)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}

	return 1;
}