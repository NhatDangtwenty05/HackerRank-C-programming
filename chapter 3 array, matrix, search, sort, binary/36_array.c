#include <stdio.h>
#include <math.h>

void main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int max = -1e9;
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for(int i = 0;i < n - 1;i++)
	{
		max = fmax(max, arr[i]);
		if(max < arr[i + 1])
			printf("%d ", arr[i + 1]);
	}
}