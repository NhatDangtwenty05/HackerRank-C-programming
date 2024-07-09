#include <stdio.h>
#include <math.h>

int symmetric(long long arr[], int n)
{
	for(int i = 0;i < n;i++)
	{
		if(n - i - 1 <= i)
			return 1;
		if(arr[i] != arr[n - i - 1])
			return 0;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	if(symmetric(arr, n))
	{
		printf("Yes");
		return 1;
	}

	printf("No");
	return 0;
}