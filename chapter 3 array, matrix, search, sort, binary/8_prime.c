#include <stdio.h>
#include <math.h>

int prime(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2;i <= sqrt(n);i++)
		if(n%i == 0)
			return 0;

	return 1;
}

int sum_left(int arr[], int i)
{
	int sum = 0;
	for(int j = 0;j < i;j++)
		sum+=arr[j];

	return sum;
}

int sum_right(int arr[], int i, int n)
{
	int sum  = 0;
	for(int j = i + 1;j < n;j++)
		sum+=arr[j];

	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	for(int i = 0;i < n;i++)
	{
		if(prime(sum_left(arr, i)) && prime(sum_right(arr, i, n)))
			printf("%d %d %d\n", sum_left(arr, i), i, sum_right(arr, i, n));
	}

	return 0;
}