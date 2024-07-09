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

void prime_pp(int n)
{
	for(int i = 1;i <= n;i++)
	{
		if(i == 1)
			printf("1\n");
		if(i%2 == 0)
			printf("2\n");
		else
			for(int j = 2;j <= i;j++)
				if(prime[j] && i%j == 0)
					printf("%d\n", j);
	}
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
		prime_pp(n);
	}
}