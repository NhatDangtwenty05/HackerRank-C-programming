#include <stdio.h>

long long sum(long n)
{
	if(n == 1)
		return 1;
	else
		return n * n + sum(n - 1);
}

int main()
{	
	long long n;
	scanf("%lld", &n);
	printf("%lld", sum(n));

	return 0;
}