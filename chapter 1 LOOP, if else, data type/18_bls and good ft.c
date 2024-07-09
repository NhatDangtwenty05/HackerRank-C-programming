#include <stdio.h>

int bagf(long long n)
{
	while(n != 0)
	{
		if(n%10 != 6 && n%10 != 8 && n%10 != 0)
			return 0;
		n/=10;
	}

	return 1;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	if(bagf(n))
		printf("Yes");
	else
		printf("No");

	return 0;

}