#include <stdio.h>
#include <math.h>

long long count[1000001];

int main()
{
	int cnt = 0;
	int max = -1e9;
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
	{
		scanf("%lld", &arr[i]);
		count[arr[i]] = 1;

		if(arr[i] > max)
			max = arr[i];
	}

	for(int i = 0;i <= max;i++)
	{
		if(count[i] == 1)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}