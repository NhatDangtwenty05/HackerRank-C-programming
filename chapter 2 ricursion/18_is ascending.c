#include <stdio.h>

int check(int arr[], int n)
{
	if(n < 1)
		return 1;
	if(arr[n] > arr[n - 1])
	{
		check(arr, n - 1);
	}
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}

	if(check(arr, n - 1))
	{
		printf("Yes");
		return 1;
	}
	printf("No");

	return 0;
}