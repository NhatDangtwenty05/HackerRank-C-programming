#include <stdio.h>
#include <math.h>

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);

	for(long long i = ceil(sqrt(a));i <= sqrt(b);i++)
	{
		printf("%lld ", 1ll*i*i);
	}
	 
	printf("\n: %.0llf", (sqrt(b) - ceil(sqrt(a)) + 1));

	return 0;
}