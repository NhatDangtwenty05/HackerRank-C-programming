#include <stdio.h>

int search(int arr[], int left, int right, int x)
{
	if(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] == x)
		{
			int firt = mid;
			while(arr[mid] == arr[firt])
				firt--;

			int last = mid;
			while(arr[mid] == arr[last])
				last++;

			return last - firt - 1;
		}

		if(arr[mid] < x)
			return search(arr, mid + 1, right, x);
		else
			return search(arr, left, mid - 1, x);
	}
	else
		return -1;
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
		printf("x appeared %d times", search(arr, 0, n - 1, x));

	return 0;
}