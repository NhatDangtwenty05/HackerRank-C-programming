#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	while(n > 92 || n < 1)
	{
		scanf("%d", &n);
	}

	if(n == 1)
	{
		printf("1\n");
		return 1;
	}

	if(n == 2)
	{
		printf("1\n1\n");
		return 1;
	}

	long long res = 0, num2 = 0, num1 = 1;
	for(int i = 1;i < n;i++)
	{
		res = num2 + num1;
		num2 = num1;
		num1 = res;
		if(i == 1)
			printf("1\n");
		printf("%lld\n", res);
	}
}