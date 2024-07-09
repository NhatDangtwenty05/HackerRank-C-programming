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

void t_prime(int n)
{
	for(int i = 1;i <= sqrt(n);i++)
		if(prime[i])
			printf("%d ", 1ll*i*i);
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
		t_prime(n);
	}
}