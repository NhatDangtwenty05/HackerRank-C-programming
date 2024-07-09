#include <stdio.h>
#include <math.h>

int palindromic(int n)
{
	int temp = n;
	int res = 0;
	while(n != 0)
	{
		res= res * 10 + n % 10;
		n/=10;
	}
	if(res == temp)
		return 1;

	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int matrix[n][n];

	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &matrix[i][j]);

	printf("\n");
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			if(palindromic(matrix[i][j]))
				printf("%d ", matrix[i][j]);
			else
				printf("* ");
		}
		printf("\n");
	}

	return 1;
}