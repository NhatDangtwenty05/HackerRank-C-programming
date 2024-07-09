#include <stdio.h>
#include <math.h>

int sum1(long long n)
{
	if(n == 0)
		return -1;
	int res = 0;
	while(n != 0)
	{
		res += n%10;
		n/=10;
	}

	return res;
}

int sum2(long long n)
{
	long long temp =n;
	int res = 0;
	for(int i = 2;i <= sqrt(n);i++)
	{
		while(n%i == 0)
		{
			res+=(sum1(i));
			n/=i;
		}
	}
	if(temp == n)
		return -2;
	if(n > 1)
		res+=sum1(n);

	return res;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	if(sum1(n) == sum2(n))
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}