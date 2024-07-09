#include <stdio.h>

int sum(long long n)
{
	if(n == 0)
		return 0;
	return n % 10 + sum(n / 10);
}

int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%d", sum(n));
	
	return 0;
}