#include <stdio.h>

int main()
{
	long long n;
	long long k = 0;
	scanf("%lld", &n);

		while(n > 9)
		{
			k = 0;
			while(n != 0)
			{
				k+=(n%10);
				n/=10;
			}
			n = k;
		}

	printf("%lld\n", n);

	return 0;
}