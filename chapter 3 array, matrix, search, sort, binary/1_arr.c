#include <stdio.h>

int even(int arr[], int n)
{
	int count = 0;
	for(int i = 0;i < n;i++)
	{
		if(arr[i]%2 == 0)
			count++;
	}

	return count;
}

int odd(int arr[], int n)
{
	int count = 0;
	for(int i = 0;i < n;i++)
	{
		if(arr[i]%2 != 0)
			count++;
	}

	return count;
}

int sum_even(int arr[], int n)
{
	int s = 0;
	for(int i = 0;i < n;i++)
	{
		if(arr[i]%2 == 0)
			s+=arr[i];
	}

	return s;
}

int sum_odd(int arr[], int n)
{
	int s = 0;
	for(int i = 0;i < n;i++)
	{
		if(arr[i]%2 != 0)
			s+=arr[i];
	}

	return s;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	printf("the nuber of even numbers:%d \n", even(arr, n));
	printf("the sum:%d \n", sum_even(arr, n));
	printf("the nuber of odd numbers:%d \n", odd(arr, n));
	printf("the sum:%d \n", sum_odd(arr, n));
	return 0;
}