#include <stdio.h>

long long sum(long n)
{
	if(n == 0)
		return 0;
	if(n%2 == 0)
		return n + sum(n - 1);
	else
		return n * (-1) + sum(n - 1);
}

int main()
{	
	long long n;
	scanf("%lld", &n);
	printf("%lld", sum(n));

	return 0;
}