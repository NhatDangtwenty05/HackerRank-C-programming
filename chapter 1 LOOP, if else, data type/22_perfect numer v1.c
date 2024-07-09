#include <stdio.h>
#include <math.h>

int check(long long n)
{
	if(n < 2)
		return 0;
	long long sum = 1;
	for(int i = 0;i <= sqrt(n);i++)
	{
		if(n%i == 0)
		{
			sum+=i;
			if(i != n/i)
				sum+=n/i;
		}
	}
	if(sum == n)
		return 1;

	return 0;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	if(check(n))
	{
		printf("Yes");
		return 1;
	}

	printf("No");
	return 0;
}
