#include <stdio.h>
#include <math.h>

int prime(long long n)
{
	if(n < 2)
		return 0;
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	long long sum = 0;
	int count = 0;
	int n;
	scanf("%d", &n);
	long long arr[n];

	for(int i = 0;i < n;i++)
	{
		scanf("%lld", &arr[i]);
		if(prime(arr[i]))
		{	
			sum+=arr[i];
			count++;
		}
	}
	printf("%.2llf", 1.0*sum/count);

	return 0;
}