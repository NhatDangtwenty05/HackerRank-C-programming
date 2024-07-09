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

int main()
{
	long long a, b;
	printf("Enter a and b (a LCM b): \n");

	printf("a: ");
	scanf("%lld", &a);

	printf("\nb: ");
	scanf("%lld", &b);
	long long lcm = LCM(a,b);

	printf("\n%d", lcm);
	
	return 0;
}