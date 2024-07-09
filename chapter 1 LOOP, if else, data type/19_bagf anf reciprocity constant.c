#include <stdio.h>
#include <math.h>

int checkrelip(long long n)
{
	long long temp = n;
	long long overturn = 0;
	while(temp != 0)
	{
		overturn = overturn*=10 + temp%10;
		temp/=10;
	}
	if(overturn == n)
		return 1;

	return 0;
}

int checkFaL(long long n)
{
	int count = 0;
	int firt;
	int last = n%10;
	if(last == 0)
		return 0;
	while(n != 0)
	{
		firt = n%10;
		n/=10;
		count++;
	}
	int temp = firt;
	for(int i = 1;i <= count;i++)
	{
		temp*=10;
	}
	int new = n - temp - last;

	if((firt/2 == last || last/2 == firt) && checkrelip(n))
		return 1;

	return 0;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	if(checkFaL(n))
	{
		printf("Yes");
		return 1;
	}
	printf("No");
	return 0;
}