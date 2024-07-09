#include <stdio.h>
#include <math.h>

int prime[1000001];
void prime_cieve()
{
	prime[0] = prime[1] = 0;
	for(int i = 2;i <= 1000000;i++)
		prime[i] = 1;

	for(int i = 2; i <= sqrt(1000000);i++)
		if(prime[i])
			for(int j = i*i;j <= 1000000;j+=i)
				prime[j] = 0;
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

		if(prime[n])
			printf("yes\n");
		else
			printf("no\n");
	}
}