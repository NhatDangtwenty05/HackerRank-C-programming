#include <stdio.h>
#include <math.h>

void quick_sort(int arr[], int left, int right)
{
	if(left < right)
	{
		int pivot = arr[right];
		int index = left - 1;
		int temp;
		for(int i = left;i < right;i++)
			if(pivot >= arr[i])
			{
				temp = arr[++index];
				arr[index] = arr[i];
				arr[i] = temp;
			}
		temp = arr[index + 1];
		arr[index + 1] = arr[right];
		arr[right] = temp;

		quick_sort(arr, left, index);
		quick_sort(arr, index + 2, right);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	quick_sort(arr, 0, n - 1);

	for(int i = 0;i < n;i++)
		printf("%d ", arr[i]);

	return 0;
}