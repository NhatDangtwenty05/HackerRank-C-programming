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

int perfect(long long n)
{
	for(int p = 2;p <= 32;p++)
	{
		if(prime(p))
		{
			long long temp = (long long) pow(2,p) - 1;
			if(prime(temp))
				temp*=(pow(2,p - 1));
			if(temp == n)
				return 1;
		}
	}

	return 0;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	if(perfect(n))
	{
		printf("Yes");
		return 1;
	}

	printf("No");
	return 0;
}
