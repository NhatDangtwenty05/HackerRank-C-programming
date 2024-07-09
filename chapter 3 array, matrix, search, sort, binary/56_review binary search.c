#include <stdio.h>
#include <math.h>

int binary_search(int arr[], int left, int right, int key)
{
	int mid = (right + left) / 2;
	while(left < right)
	{
		if(arr[mid] == key)
			return 1;
		if(arr[mid] > key)
			return binary_search(arr, left, mid - 1, key);
		if(arr[mid] < key)
			return binary_search(arr, mid + 1, right, key);
	}

	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	int q;
	scanf("%d", &q);
	while(q--)
	{
		int t;
		scanf("%d", &t);
		if(binary_search(arr, 0, n - 1, t))
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}