#include <stdio.h>

long long f(int n)
{
	if(n == 1 || n == 0)
		return 0;
	if(n == 2)
		return 1;

	return f(n - 2) + f(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld", f(n));
}	