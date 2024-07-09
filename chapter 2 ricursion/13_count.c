#include <stdio.h>

int count(long long n)
{
	if(n < 10)
		return 1;

	return 1 + count(n/10);
}

int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%d", count(n));

	return 0;
}