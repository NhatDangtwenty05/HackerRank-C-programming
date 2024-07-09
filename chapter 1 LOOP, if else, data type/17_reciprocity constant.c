#include <stdio.h>
#include <math.h>

int recip(long long n)
{
	long long temp = n;
	long long overturn = 0;
	while(temp != 0)
	{
		overturn*=10;
		overturn+=(temp%10);
		temp/=10;
	}
	if(overturn == n && n > 9)
		return 1;

	return 0;
}

int check_multiple(long long n)
{
	int count = 0;
	for(long long i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
		{

			count++;
			while(n%i == 0)
			{
				n/=i;
			}
		}
	}
	if(n > 1)
		count++;

	if(count > 2)
		return 1;
	else
		return 0;
}


int main()
{
	long long a, b;
	int count = 0;
	scanf("%lld %lld", &a, &b);

	for(long long i = a;i <= b;i++)
	{
		if(recip(i) && check_multiple(i))
		{
			count++;
			printf("%lld ", i);
		}
	}
	if(count == 0)
		printf("Nothing there");

	return 0;
}