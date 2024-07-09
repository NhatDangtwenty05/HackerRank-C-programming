#include <stdio.h>

typedef long long ll;

int checkfn(ll n)
{
	ll fn;
	ll fn1 = 1;
	ll fn2 = 0;
	if(n == 0 || n == 1)
		return 1;
	for(int i = 2;i <= 92;i++)
	{
		fn = fn1 + fn2;
		if(n == fn)
			return 1;
		fn2 = fn1;
		fn1 = fn;
	}

	return 0;
}

int main()
{
	printf("check press 1\nPrint press 2\nPrint all press 3\n");
	int c;
	scanf("%d", &c);

	if(c == 1)
	{
		ll n;
		scanf("%lld", &n);
		int fn = checkfn(n);

		if(fn == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}

	if(c == 2)
	{
		int k;
		printf("Which Fibonacci number do you want to print: ");
		scanf("%d",&k);

		if(k == 0 || k == 1)
			printf("%d", k);

		else
		{
		ll f[100];
		f[0] = 0;
		f[1] = 1;

		for(int i = 2;i <= 92;i++)
		{
			f[i] = f[i - 1] + f[i - 2];
		}
		printf("\n%lld", f[k]);
		}
	}

	if(c == 3)
	{
		ll f[100];
		f[0] = 0;
		f[1] = 1;

		for(int i = 2;i <= 92;i++)
		{
			f[i] = f[i - 1] + f[i - 2];
		}

		for(int i = 0;i <= 92;i++)
		{
			printf("fibonacci %d: %lld \n", i, f[i]);
		}
	}
	

	if(c > 3)
		printf("INVALID");

	return 0;
}