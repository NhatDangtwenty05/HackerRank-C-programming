#include <stdio.h>

int main()
{
	int n;
	long long sum = 0;
	long long f = 1;
	scanf("%lld", &n);

	for(int i = 1;i <= n;i++)
	{
		f*=i;
		sum+=f;
	}

	printf("%lld\n", sum);

	return 0;
}