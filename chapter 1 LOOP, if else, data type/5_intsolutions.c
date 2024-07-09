#include <stdio.h>


int main()
{
	long long a, b, n;
	printf("Enter a and b and n (ax + by = n): \n");

	printf("a: ");
	scanf("%lld", &a);

	printf("\nb: ");
	scanf("%lld", &b);

	printf("\nn: ");
	scanf("%lld", &n);
	
	for(int i = 0;i <= n / a;i++)
	{
		int res = n - a*i;
		if(res%b == 0)
			printf("(%d,%d)\n", i, res / b);
	}
	
	return 0;
}