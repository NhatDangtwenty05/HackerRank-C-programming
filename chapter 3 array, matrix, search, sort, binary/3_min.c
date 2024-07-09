#include <stdio.h>

long long min(long long arr[], int n)
{
	long long res = arr[0];
	for(int i = 1;i < n;i++)
	{
		if(arr[i] < res)
			res = arr[i];
	}

	return res;
}

int count(long long arr[], int n)
{
	int count = 0;
	long long res = min(arr, n);
	for(int i = 0;i < n;i++)
	{
		if(arr[i] == res)
			count++;
	}

	return count;
}

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
		scanf("%lld", &arr[i]);
	
	printf("%lld and %d times", min(arr, n), count(arr, n));

	return 0;
}