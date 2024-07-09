#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &a[i][j]);
	
	int temp;
	for(int i = 0;i < n;i++)
	{
		temp = a[i][i];
		a[i][i] = a[i][n - 1 - i];
		a[i][n - 1 - i] = temp;
	}

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 1;
}