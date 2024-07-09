#include <stdio.h>
#include <math.h>


int main()
{
	int n, m, p;
	scanf("%d %d %d", &n, &m, &p);
	int matrix_1[n][m], matrix_2[m][p];
	
	for(int i = 0;i < n;i++)
		for(int j = 0;j< m;j++)
			scanf("%d", &matrix_1[i][j]);
	for(int i = 0;i < m;i++)
		for(int j = 0;j< p;j++)
			scanf("%d", &matrix_2[i][j]);

	long long arr[n][p];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < p;j++)
		{
			long long temp = 0;
			for(int index = 0;index < m;index++)
				temp+=matrix_1[i][index]*matrix_2[index][j];
			arr[i][j] = temp;
		}
	}

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < p;j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	return 1;
}