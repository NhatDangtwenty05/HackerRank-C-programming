#include <stdio.h>

int main()
{
	int n;
	int step_1 = 1;
	int step_2 = 1;
	scanf("%d", &n);

	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			printf("%d ", step_1);
			step_1++;
		}
		printf("\n");
	}
	printf("\n");
//
	for(int i = 1;i <= n;i++)
	{
		for(int j = step_2;j <= n + step_2;j++)
		{
			printf("%d ", j);
		}
		step_2++;
		printf("\n");
	}
	printf("\n");
//
	for(int i = n;i >= 1;i--)
	{
		for(int j = 1;j <= n;j++)
		{
			if(j >= i)
				printf("%d ", n - i + 1);
			else
				printf("~ ");
		}
		printf("\n");
	}
	printf("\n");
//
	for(int i = 1;i <= n;i++)
	{
		int init = i;
		int distance = n - 1;
		for(int j = 1; j <= i;j++)
		{	
			printf("%d ", init);
			init+=distance;
			distance--;
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}