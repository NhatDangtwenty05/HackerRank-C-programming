#include <stdio.h>
#include <math.h>

void insertion_sort(long long arr[], int n)
{
	for(int i = 1;i < n;i++)
	{
		int position = i - 1;
		long long value = arr[i];
		while(position >= 0 && value < arr[position])
		{
			arr[position + 1] = arr[position];
			position--;
		}
		arr[position + 1] = value;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);

	insertion_sort(arr, n);

	for(int i = 0;i < n;i++)
		printf("%lld ", arr[i]);

	return 0;
}