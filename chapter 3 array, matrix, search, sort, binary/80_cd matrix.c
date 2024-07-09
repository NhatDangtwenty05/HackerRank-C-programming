#include <stdio.h>

int dx[4] = {-1, 0 , 1, 0};
int dy[4] = {0, -1, 0, 1};

int main()
{
	int arr[3][3] = 
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int i = 1, j = 1;

	for(int index = 0;index < 4;index++)
	{
		int i1 = i + dx[index];
		int j1= j + dy[index];
		printf("%d ", arr[i1][j1]);
	}
	
	return 1;
}