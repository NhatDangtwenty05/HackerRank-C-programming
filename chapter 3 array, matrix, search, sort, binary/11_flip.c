#include <stdio.h>
#include <math.h>

void flip(long long arr[], int n)
{
	long long temp;
	for(int i = 0;i < n;i++)
	{
		if(n - i - 1 <= i)
			return;
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	flip(arr, n);
	for(int i = 0;i < n;i++)
		printf("%lld ", arr[i]);

	return 0;
}