#include <stdio.h>
#include <math.h>

int checkprime(long long n)
{
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	int check = checkprime(n);

	if(check == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}	