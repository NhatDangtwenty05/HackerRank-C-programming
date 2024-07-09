#include <stdio.h>
#include <math.h>

int linear_search(int arr[], int n, int x)
{
	for(int i = 0;i < n;i++)
		if(x == arr[i])
			return 1;

	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];

	for(int i = 0;i < n;i++)
		scanf("%d", &arr[i]);

	int x;
	scanf("%d", &x);

	if(linear_search(arr, n, x))
		printf("yes");
	else
		printf("no");

	return 0;
}