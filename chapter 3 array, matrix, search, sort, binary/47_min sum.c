#include <stdio.h>
#include <math.h>

int array[10];

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
		array[arr[i]]++;
	}

	if(array[0] == 3)
	{
		for(int i = 1;i < 10;i++)
		{
			if(array[i] > 0)
			{
				printf("%d", i);
				return 0;
			}
		}
	}
	if(array[0] > 3)
	{
		printf("0");
		return 0;
	}

	int n1 = -1;
	int i = 0;
	while(n1 == -1)
	{
		if(array[i++] > 0)
		{
			n1 = (i - 1) * 10;
			array[i - 1]--;
		}
	}

	int n2 = -1;
	i = 0;
	while(n2 == -1)
	{
		if(array[i++] > 0)
		{
			n2 = (i - 1) * 10;
			array[i - 1]--;
		}
	}

	i = 0;
	while(n1 % 10 == 0)
	{
		if(array[i++] > 0)
		{
			n1+=(i - 1);
			array[i - 1]--;
		}
	}

	i = 0;
	while(n2 % 10 == 0)
	{
		if(array[i++] > 0)
		{
			n2+=(i - 1);
			array[i - 1]--;
		}
	}

	int sol = n1 + n2;

	printf("%d", sol);
	return 0;	
}