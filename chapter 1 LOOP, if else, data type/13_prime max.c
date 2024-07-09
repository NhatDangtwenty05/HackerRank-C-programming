#include <stdio.h>
#include <math.h>

long long find(long long n)
{
	int res;
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
		{
			while(n%i == 0)
			{
				n/=i;
				res = n;
			}
		}
	}
	if(n > 1)
		res = n;
	
	return res;
}

int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld\n", find(n));

	return 0;
}