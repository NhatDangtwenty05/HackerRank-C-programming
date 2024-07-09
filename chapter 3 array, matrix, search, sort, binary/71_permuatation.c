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
	
	int x, y;
	scanf("%d%d", &x, &y); 

	int temp;
	for(int i = 0;i < n;i++)
	{
		temp = a[x - 1][i];
		a[x - 1][i] = a[y - 1][i];
		a[y - 1][i] = temp;
	}
	
// prỉnt
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 1;
}