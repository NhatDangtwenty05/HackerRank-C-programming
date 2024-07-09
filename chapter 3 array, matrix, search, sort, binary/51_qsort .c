#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int n)
{
	int sum = 0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int comp(const void *a, const void *b)
{
	int *x = (int*) a;
	int *y = (int*) b;
	if(sum(*x) < sum(*y))
		return -1;
	else if(sum(*x) == sum(*y))
	{	
		if(*x < *y)
			return -1;
		else if(*x == *y)
			return 0;
		else
			return 1;
	}
	else
		return 1;
}

int main()
{
	int n; 
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), comp);
	for(int i = 0;i < n;i++)
		printf("%d ", arr[i]);

	return 0;
}