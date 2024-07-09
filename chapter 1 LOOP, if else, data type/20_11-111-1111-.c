#include <stdio.h>

int check(long long n)
{
	for(long long i = 1;i <= n/111;i++)
	{
		int temp = n - 111*i;
		if(temp%11 == 0)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	long long n;
	scanf("%lld", n);

	if(check(n))
	{
		printf("Yes");
		return 1;
	}
	printf("No");

	return 0;
}