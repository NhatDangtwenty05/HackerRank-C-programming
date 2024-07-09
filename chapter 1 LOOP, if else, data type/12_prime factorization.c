#include <stdio.h>
#include <math.h>

int checkrelip(long long n)
{
	long long temp = n;
	long long overturn = 0;
	while(temp != 0)
	{
		overturn = overturn * 10 + temp % 10;
		temp/=10;
	}
	if(overturn == n)
		return 1;

	return 0;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	fz(n);

	return 0;
}