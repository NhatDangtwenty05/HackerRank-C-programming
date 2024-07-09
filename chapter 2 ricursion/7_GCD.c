#include <stdio.h>

long long GCD(int a, int b)
{
	if(a == 0 || b == 0)
		return 0;

	if(a%b == 0)
		return b;

	return GCD(b, a%b);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%lld", GCD(a, b));

	return 0;
}	