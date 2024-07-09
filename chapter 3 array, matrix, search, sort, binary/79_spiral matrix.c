#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n][n];

	long long f1 = 1;
	long long f2 = 0;
	long long temp;
	
	int c1 = 0, c2 = n - 1;
	int h1 = 0, h2 = n - 1;

	int index = 1;
	while(index <= n * n)
	{
		for(int q = c1;q < c2;q++)
		{	
			arr[h1][q] = f2;
			temp = f2;
			f2 = f1;
			f1+=temp;
			index++;
		}
		for(int j = h1;j < h2;j++)
		{
			arr[j][c2] = f2;
			temp = f2;
			f2 = f1;
			f1+=temp;
			index++;
		}
		for(int k = c2;k > c1;k--)
		{
			arr[h2][k] = f2;
			temp = f2;
			f2 = f1;
			f1+=temp;
			index++;
		}
		for(int a = h2;a > h1;a--)
		{
			arr[a][c1] = f2;
			temp = f2;
			f2 = f1;
			f1+=temp;
			index++;
		}

		c1++;
		c2--;
		h1++;
		h2--;
	}

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			printf("%lld ", arr[i][j]);
		printf("\n");
	}
	
	return 1;
}