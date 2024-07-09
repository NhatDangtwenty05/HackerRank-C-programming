#include <stdio.h>
#include <math.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int matrix[n][m];

	int max = (int) -1e9;
	int min = (int) 1e9;

	int max_x = -1, max_y = -1, min_x = -1, min_y = -1;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
		{
			scanf("%d", &matrix[i][j]);
			if(max < matrix[i][j])
			{
				max_x = i + 1;
				max_y = j + 1;
			}
			if(min > matrix[i][j])
			{
				min_x = i + 1;
				min_y = j + 1;
			}
			max = fmax(max, matrix[i][j]);
			min = fmin(min, matrix[i][j]);
		}

	printf("%d %d\n(%d,%d) (%d,%d)", max, min, max_x, max_y, min_x, min_y);

	return 1;
}