#include <stdio.h>

const int mod = 1000000007;	

long long binpow(int a, int b)
{
	if(b == 0)
		return 1;
	if(b%2 == 0)
		return (binpow(a, b / 2) % mod) * (binpow(a, b / 2) % mod) % mod;

	return (binpow(a, b / 2) % mod) * (binpow(a, b / 2) % mod) * (a % mod) % mod;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%lld", binpow(a, b));

	return 0;
}	