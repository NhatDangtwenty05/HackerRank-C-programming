#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	int a_t[m][n];
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
		{
			scanf("%d", &a[i][j]);
			a_t[j][i] = a[i][j];
		}
		
	printf("\n");

	for(int i = 0;i < m;i++)
	{
		for(int j = 0;j < n;j++)
		{
			if(j >= i)
				printf("%d ", a_t[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}



	return 0;
}