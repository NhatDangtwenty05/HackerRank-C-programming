#include <stdio.h>
#include <math.h>

void bubble_sort(long long arr[], int n)
{
	long long temp;
	for(int i = n - 1;i > 0;i--)
		for(int j = 0;j < i;j++)
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);

	bubble_sort(arr, n);

	for(int i = 0;i < n;i++)
		printf("%lld ", arr[i]);

	return 0;
}