#include <stdio.h>
#include <math.h>

int prime(long long n)
{
	if(n < 2)
		return 0;
	for(long long i = 2;i <= sqrt(n);i++)
		{
			if(n%i == 0)
				return 0;
		}
	return 1;
}

int sum(long long n)
{
	long long res = 0;
	while(n != 0)
	{
		res+=(n%10);
		n/=10;
	}

	return res;
}

int num(long long n)
{
	long long res = 0;
	while(n != 0)
	{
		res = n%10;
		n/=10;
		if(!prime(res))
			return 0;
	}

	return 1;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	if(prime(n) && num(n) && prime(sum(n)))
		{
			printf("Yes");
			return 1;
		}

	printf("No");
	return 0;
}