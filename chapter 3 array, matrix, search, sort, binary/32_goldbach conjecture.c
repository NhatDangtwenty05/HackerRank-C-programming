#include <stdio.h>
#include <math.h>

int prime[1000001];

void prime_cieve()
{
	prime[0] = prime[1] = 0;
	for(int i = 2;i < 1000001;i++)
		prime[i] = 1;

	for(int i = 2;i <= sqrt(1000000);i++)
		for(int j = i*i;j < 1000001;j+=i)
			prime[j] = 0;
}

void goldbach(int n)
{
	if(n < 4 || n%2 != 0)
	{
		printf("no\n");
		return;
	}

	for(int i = 2;i <= n / 2;i++)
		if(prime[i] && prime[n - i])
			printf("(%d + %d)\n", i, n - i);
}

void main()
{
	prime_cieve();
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		goldbach(n);
	}
}