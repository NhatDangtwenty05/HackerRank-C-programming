#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n][n];
	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			scanf("%d", &arr[i][j]);

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			if(i%2 == 0)
				printf("%d ", arr[i][j]);
			else
				printf("%d ", arr[i][n - 1 - j]);
		}
		printf("\n");
	}

	return 0;
}	