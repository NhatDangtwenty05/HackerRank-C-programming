#include <stdio.h>

int search(int arr[], int left, int right, int x)
{	
	int res = -1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] >= x)
		{
			res = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}

	return res;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	
	int x;
	scanf("%d", &x);
	if(search(arr, 0, n - 1, x) == -1)
		printf("not found");
	else
		printf("(0 --> n - 1)   x at %d", search(arr, 0, n - 1, x));
	return 0;
}