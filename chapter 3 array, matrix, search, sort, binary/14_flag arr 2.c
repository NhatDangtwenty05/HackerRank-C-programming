#include <stdio.h>
#include <math.h>

long long count[1000001];

int main()
{
	int max = -1e9;
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
	{
		scanf("%lld", &arr[i]);
		count[arr[i]]++;

		if(arr[i] > max)
			max = arr[i];
	}

	for(int i = 0;i <= max;i++)
	{
		if(count[i] != 0)
			printf("%d, %d\n", i, count[i]);
	}

	return 0;
}