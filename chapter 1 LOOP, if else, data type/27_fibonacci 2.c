#include <stdio.h>
#include <math.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	long long res = 0, num2 = 0, num1 = 1;
	for(int i = 1;i < 93;i++)
	{
		if(n == res)
		{
			printf("Yes");
			return 1;
		}
		res = num2 + num1;
		num2 = num1;
		num1 = res;
	}
	printf("No");

	return 0;
}