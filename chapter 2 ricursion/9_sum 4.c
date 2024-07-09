#include <stdio.h>

float sum(int n)
{
	if(n == 0)
	{
		printf("INVALID");
		return 0;
	}
	if(n == 1)
		return 1;

	return 1.0 / n + sum(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%.2f", sum(n));

	return 0;
}