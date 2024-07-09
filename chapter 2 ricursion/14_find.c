#include <stdio.h>

int find(long long n)
{
	if(n < 10)
		return n;
	find(n/10);
}

int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%d", find(n));

	return 0;
}