#include <stdio.h>

int LCM(long long a, long long b)
{
	long long res;
	while(b != 0)
	{
		res = a%b;
		a = b;
		b =res;
	}
	return a;
}

int GCD(long long a, long long b)
{
	return a*b/LCM(a,b);
}

int main()
{
	long long a, b;
	printf("Enter a and b (a GCD b): \n");

	printf("a: ");
	scanf("%lld", &a);

	printf("\nb: ");
	scanf("%lld", &b);

	long long gcd = GCD(a,b);

	printf("%d ", gcd);
	return 0;
}