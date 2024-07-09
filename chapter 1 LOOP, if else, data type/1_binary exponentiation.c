#include <stdio.h>

int main()
{
	int a, b;
	int res = 1;
	printf("Enter a and b (a^b)\na: ");
	scanf("%d", &a);
	printf("\nb: ");
	scanf("%d", &b);

	while(b != 0)
	{
		if(b%2 == 1)
		{
			res*=a; 
		}
		a*=a;
		b/=2;
	}

	printf("\n%d", res);

	return 0;
}