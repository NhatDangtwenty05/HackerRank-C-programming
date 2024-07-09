#include <stdio.h>
#include <math.h>

void selection_sort(long long arr[], int n)
{
	int position;
	long long temp;
	for(int i = 0;i < n - 1;i++)
	{
		temp = arr[i];
		position = i;
		for(int j = i + 1;j < n;j++)
		{
			if(arr[j] < arr[i])
			{
				temp = arr[j];
				position = j;
			}
		}
		arr[position] = arr[i];
		arr[i] = temp;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);

	selection_sort(arr, n);

	for(int i = 0;i < n;i++)
		printf("%lld ", arr[i]);

	return 0;
}