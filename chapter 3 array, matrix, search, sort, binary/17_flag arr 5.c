#include <stdio.h>
#include <math.h>

long long count[1000001];

int main()
{
	int n;
	int max = -1e9;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
	{
		scanf("%lld", &arr[i]);
		count[arr[i]]++;
		if(arr[i] > max)
			max  = arr[i];
	}
	int cnt = -1, res;
	for(int i = 0;i < n;i++)
	{
		if(cnt < count[arr[i]])
		{
			cnt = count[arr[i]];
			res = arr[i];
		}
	}
	printf("%d %d", res, cnt);

	return 0;
}