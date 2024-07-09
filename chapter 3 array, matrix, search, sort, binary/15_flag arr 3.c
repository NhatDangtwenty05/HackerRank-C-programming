#include <stdio.h>
#include <math.h>

long long count[1000001];

int main()
{
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
	{
		scanf("%lld", &arr[i]);
		count[arr[i]]++;
	}

	for(int i = 0;i < n;i++)
	{
		if(count[arr[i]] != 0)
			printf("%d, %d\n", arr[i], count[arr[i]]);
		count[arr[i]] = 0;
	}

	return 0;
}