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

int fibo(long long n)
{
	if(n == 0)
		return 1;
	long long f2 = 0, f1 = 1, res = 0;
	for(int i = 1;i < 93;i++)
	{
		res = f2 + f1;
		f2 = f1;
		f1 = res;
		if(n == res)
			return 1;
	}

	return 0;
}

int sum(long long n)
{
	int sum = 0;
	while(n != 0)
	{
		sum+=n%10;
		n/=10;
	}

	return sum;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	for(long long i = 1;i < n;i++)
	{
		if(prime(i) && fibo(sum(i)))
		{
			printf("%lld ", i);
		}
	}

	return 0;
}