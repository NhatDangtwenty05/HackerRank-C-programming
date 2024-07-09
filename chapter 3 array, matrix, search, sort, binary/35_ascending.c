#include <stdio.h>
#include <math.h>

void main()
{
	int temp = -1e9;
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	for(int i = 0;i < n - 1;i++)
		if(arr[i + 1] < arr[i])
		{
			printf("No");
			return;
		}

	printf("Yes");
	return;
}