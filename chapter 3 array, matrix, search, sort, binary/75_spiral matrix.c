#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n][n];
	
	int c1 = 0, c2 = n - 1;
	int h1 = 0, h2 = n - 1;

	int index = 1;
	while(index <= n * n)
	{
		for(int q = c1;q < c2;q++)
			arr[h1][q] = index++;
		for(int j = h1;j < h2;j++)
			arr[j][c2] = index++;
		for(int k = c2;k > c1;k--)
			arr[h2][k] = index++;
		for(int a = h2;a > h1;a--)
			arr[a][c1] = index++;

		c1++;
		c2--;
		h1++;
		h2--;
	}

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	return 1;
}