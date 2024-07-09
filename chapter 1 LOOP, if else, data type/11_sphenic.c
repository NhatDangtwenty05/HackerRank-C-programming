#include <stdio.h>
#include <math.h>

int sphenic(long long n)
{
	int expon = 0;
	int count = 0;

	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0)
		{	
			count++;
			expon = 0;
			while(n%i == 0)
			{
				n/=i;
				expon++;
			}
			if(expon > 1)
				return 0;
		}
	}

	if(n > 1)
		count++;

	if(count == 3)
		return 1;
	else
		return 0;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	if(sphenic(n))
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}